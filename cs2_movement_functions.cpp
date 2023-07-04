#include "cs2_movement_reverse_engineering.cpp"
CCSPlayer_MovementServices* moveService;
CMoveData* mv;
void CCSPlayer_MovementServices::Duck() {
	
	UpdateDuckJumpEyeOffset(); // See hl2sdk
	
	const bool playerTouchingGround = GetGroundEntity(moveService->pawn) != NULL;
	
	// Check to see if we are in the air.
	const bool bInAir = !playerTouchingGround && moveService->pawn->m_MoveType != MOVETYPE_LADDER;
	const bool bForcedBotDuck = moveService->pawn->IsBot() && bot_crouch.GetBool();
	const bool duckPressed = moveService->m_nButtons.m_pButtonStates[0] & IN_DUCK;
	
	bool duckingEnabled = true;
	// Anti-duck-spam: If mashing duck key too much, treat as unpressed to avoid being
	// able to "camp" in half-ducked positions by pressing/releasing near a target height.
	if (moveService->m_flDuckSpeed < 1.5f)
	{
		duckingEnabled = false;
	}
	else if ( ( moveService->pawn->m_fFlags & FL_DUCKING ) == 0
// if ( !gpGlobals->unknown2[13] && !gpGlobals->unknown2[12] )
// {
//   v26 = *&gpGlobals->unknown1[12];
//   if ( v26 )
//     v26(1i64);
// }
		 && gpGlobals->curtime < moveService->m_flLastDuckTime + sv_timebetweenducks.GetFloat() )
	{
		duckingEnabled = false;
	}
	bool doDuck = moveService->m_duckUntilOnGround && bInAir || moveService->m_bDuckOverride || bBotDuck || duckPressed && duckingEnabled;
	if (IsDead() && moveService->pawn->IsObserver()) //GetHealth(this->pawn) <= 0 && !(this->pawn->m_pObserverServices->__vftable[1].MaybeGetSchema)(this->pawn->m_pObserverServices)
	{
		if (moveService->m_bDuckOverride)
		{
			//sub_7FFA28ED4B90(&this->__m_pChainEntity, 552i64, 0xFFFFFFFFi64);
			moveService->m_bDuckOverride = 0;

			if ( moveService->pawn->m_fFlags & FL_DUCKING )
			{
				FinishUnDuck();
			}
			return;
		}
	}

	if ( moveService->m_duckUntilOnGround )
	{
		// This code handles the case where a bot is jumping; they
		// automatically crouch jump, and we want to decide if they are
		// ready to un-duck here.

		// TODO: Should we move this code into the bot movement logic
		//       instead?

		// $$$REI There still seems to be a way to end up in this state if the bot
		//        was crouch-jumping at the end of the round; I haven't found where
		//        his flags are getting reset.  Will fix later, and just reset the
		//        inconsistent state here.  Next tick the bot will behave normally.
		// Assert( player->GetFlags() & FL_DUCKING );
		if ( ( moveService->pawn->m_fFlags & FL_DUCKING ) == 0 )
		{
			moveService->m_duckUntilOnGround = false;
			return;
		}

		// If we have landed, we are done with 'duck until on ground'.
		if ( !bInAir )
		{
			moveService->m_duckUntilOnGround = false;

			// Stop crouching if possible
			if ( CanUnduck() )
			{
				FinishUnDuck();
			}

			return;
		}

		// Otherwise we are still in the air.
		// Try to un-duck just as we land, for better animation and movement.

		// If we're still going up, we aren't about to land.  Early-out.
		if ( mv->m_vecVelocity.z > 0.0f )
			return;
		/*
			v103 = 0i64;
		v104 = 0i64;
		v105 = 0i64;
		v108 = 117440512;
		v106 = 0;
		v107 = -1;
		sub_7FFA28FB2930(v102);
		v32 = mv->m_vecAbsOrigin.y;
		*&v81 = mv->m_vecAbsOrigin.x;
		*&v82 = mv->m_vecAbsOrigin.z;
		*(&v81 + 1) = v32;
		v33 = sub_7FFA28B17B60();
		v34 = *(v33 + 12);
		v98 = *(v33 + 5);
		v35 = sub_7FFA28B17B60();
		v36 = v35[6];
		v37 = v35[7];
		v38 = v35[8];
		v39 = sub_7FFA28B17B60();
		v40 = *(v39 + 36);
		*&v85[8] = *(v39 + 11);
		v41 = sub_7FFA28B17B60();
		v97 = v34.m128_u64[0];
		v42 = v41[12] - v40.m128_f32[0];
		v43 = v41[14] - *&v85[8];
		v44 = v41[13] - _mm_shuffle_ps(v40, v40, 85).m128_f32[0];
		*v85 = v40.m128_u64[0];
		*&v81 = *&v81 - ((v36 - v34.m128_f32[0]) - v42);
		*&v82 = *&v82 - ((v38 - v98) - v43);
		v84 = *&v82;
		*(&v81 + 1) = v32 - ((v37 - _mm_shuffle_ps(v34, v34, 85).m128_f32[0]) - v44);
		v83 = v81;
		v45 = sub_7FFA2902C100(&sv_stepsize, -1);
		if ( !v45 )
		v45 = *(qword_7FFA29760FF8 + 8);
		v84 = v84 - *v45;
		v46 = sub_7FFA28B17B60();
		v47 = sub_7FFA28B17B60();
		*&v85[12] = v46[3];
		v48 = *(v47 + 12);
		v49 = *(v47 + 5);
		LODWORD(v47) = *(v46 + 8);
		*v85 = v48;
		*&v85[20] = v47;
		*&v85[8] = v49;
		if ( sub_7FFA2848A400(v85, &v85[12]) )
		{
		v101 = 2;
		v99 = *v85;
		v100 = *&v85[16];
		}
		else
		{
		v101 = 0;
		*&v99 = v48;
		*(&v99 + 1) = v49;
		}
		v50 = sub_7FFA289A9AC0(this);
		v51 = this->pawn;
		v87 = 0i64;
		v95 = v95 & 0xC9 | 0x49;
		v52 = v50;
		v89 = -1;
		v91 = -1;
		v93 = 458752;
		v96 = 0;
		v94 = 11;
		v86[1] = v50;
		v88 = sub_7FFA28AC5B20(v51);
		v92 = sub_7FFA28AC9D40(v51);
		if ( !v51 || (v51->GetCollisionProperty)(v51) && (*((v51->GetCollisionProperty)(v51) + 90) & 4) != 0 )
		{
		v90 = -1;
		v86[0] = &CCSTraceFilterSimple::`vftable';
		if ( !v51 )
		{
	LABEL_74:
			LOBYTE(v30) = sub_7FFA28AD9B90(off_7FFA295A0400, &v99, &v81, &v83, v86, v102);
			if ( traceStartSolid || traceFraction == 1.0 )
			return v30;
			this->m_duckUntilOnGround = 0;
			LOBYTE(v30) = CCSPlayer_MovementServices::CanUnduck(this, &mv->moveDataFlags);
			v31 = v30 == 0;
			goto LABEL_47;
		}
		}
		else
		{
		v53 = v51->m_hOwnerEntity.handle;
		if ( v53 != -1 )
		{
			if ( qword_7FFA2969F220 )
			{
			if ( v53 != -2 )
			{
				v54 = *(qword_7FFA2969F220 + 8 * ((v53 & 0x7FFF) >> 9));
				if ( v54 )
				{
				v55 = v54 + 120i64 * (v53 & 0x1FF);
				if ( v55 )
				{
					if ( *(v55 + 16) == v53 )
					v4 = *v55;
				}
				}
			}
			}
		}
		v90 = sub_7FFA28AC5B20(v4);
		v86[0] = &CCSTraceFilterSimple::`vftable';
		}
		if ( (v51->CbeReturnZero145)(v51) )
		*&v87 = v52 & 0x180000000i64 | v87;
		goto LABEL_74;
		*/
		// Check if we are close enough to the ground and that there is room to un-duck.
		trace_t trace;
		Vector newOrigin;
		Vector groundCheck;

		VectorCopy( mv->GetAbsOrigin(), newOrigin );
		Vector hullSizeNormal = VEC_HULL_MAX - VEC_HULL_MIN;
		Vector hullSizeCrouch = VEC_DUCK_HULL_MAX - VEC_DUCK_HULL_MIN;
		newOrigin -= ( hullSizeNormal - hullSizeCrouch );
		groundCheck = newOrigin;
		groundCheck.z -= moveService->pawn->GetStepSize();

		UTIL_TraceHull( newOrigin, groundCheck, VEC_HULL_MIN, VEC_HULL_MAX, PlayerSolidMask(), moveService->pawn, COLLISION_GROUP_PLAYER_MOVEMENT, &trace );
		if ( trace.startsolid			// No room to unduck.
			|| trace.fraction == 1.0f	// We are still in the air
			)
			return;

		// Success!  We can un-duck.  Remove "un-duck when possible" flag.
		moveService->m_duckUntilOnGround = false;

		// Theoretically CanUnduck() should always succeed here since we just did a hull trace.
		// REI: But the hulltrace in CanUnduck() looks slightly different than this one; it uses
		//         newOrigin = mv->GetAbsOrigin() + -0.5f * ( hullSizeNormal - hullSizeCrouch )
		//      and traces from mv->GetAbsOrigin() to newOrigin instead of from newOrigin to a
		//      step away.
		if ( CanUnduck() )
		{
			FinishUnDuck();
		}

		return;
	}
	moveService->m_flDuckSpeed = Approach( CS_PLAYER_DUCK_SPEED_IDEAL, moveService->m_flDuckSpeed, gpGlobals->frametime * 3.0f );
	if (moveService->m_flDuckSpeed < CS_PLAYER_DUCK_SPEED_IDEAL )
	{
		moveService->m_vecLastPositionAtFullCrouchSpeed = GetAbsOriginAsVector2D(moveService->pawn);
	}
	else if ( moveService->m_flDuckAmount <= 0 || moveService->m_flDuckAmount >= 1 )
	{
		//debugoverlay->AddLineOverlay( player->m_vecLastPositionAtFullCrouchSpeed, player->GetAbsOrigin(), 255,0,0, true, 0.1f );
		//debugoverlay->AddTextOverlay( player->GetAbsOrigin(), 0.1f, "%f", player->m_flDuckSpeed );

		float flDistToLastPositionAtFullCrouchSpeed = moveService->m_vecLastPositionAtFullCrouchSpeed.DistToSqr( GetAbsOriginAsVector2D(moveService->pawn) );

		// if we're sufficiently far from the last full crouch speed location, we can safely restore crouch speed faster.
		if ( flDistToLastPositionAtFullCrouchSpeed > (64*64) )
		{
			moveService->m_flDuckSpeed = Approach( CS_PLAYER_DUCK_SPEED_IDEAL, moveService->m_flDuckSpeed, gpGlobals->frametime * 6.0f );
		}
	}
	if (doDuck)
	{
		if (moveService->m_flDuckAmount < 1.0 && !moveService->m_bDucking)
		{
			moveService->m_bDucking = 1;
		}
		if (moveService->m_bDucking)
		{
			// ducking is always a little slower than unducking
			float duckSpeed = moveService->m_flDuckSpeed * 0.8f;
			if ( moveService->pawn->m_bIsDefusing )
				duckSpeed *= 0.4f;
			
			moveService->m_flDuckAmount = Approach( 1.0f, moveService->m_flDuckAmount, gpGlobals->frametime * duckSpeed );
			// Finish ducking immediately if duck time is over or not on ground
			if ( moveService->m_flDuckAmount >= 1.0f || !playerTouchingGround )
			{
				FinishDuck();
			}
			else
			{
				SetDuckedEyeOffset( moveService->m_flDuckAmount );
			}
		}
	}
	else
	{
		if (moveService->m_flDuckAmount > 0.0 && !moveService->m_bDucking)
		{
			moveService->m_bDucking = 1;
		}
		if (moveService->m_bDucking && (moveService->m_bAllowAutoMovement || !playerTouchingGround))
		{
			if ( CanUnduck() )
			{
				// Always unduck at at least 1.5 to prevent advantageous semi-ducked positions
				float duckSpeed = MAX( 1.5f, moveService->m_flDuckSpeed );

				// Reduce crouch/uncrouch speed significantly while defusing
				if ( moveService->pawn->m_bIsDefusing )
					duckSpeed *= 0.4f;

				moveService->m_flDuckAmount = Approach( 0.0f, moveService->m_flDuckAmount, gpGlobals->frametime * duckSpeed );
				moveService->m_bDucked = false;

				if ( moveService->m_flDuckAmount <= 0.0f || !playerTouchingGround )
				{
					FinishUnDuck();
				}
				else
				{
					SetDuckedEyeOffset( moveService->m_flDuckAmount );
				}

				// Remove the ducked flags if we're not fully ducked anymore.
				// REI: This is inconsistent with the documentation for these flags, but I'm not sure why the code
				//      is doing this.  It does mean you lose your ducking accuracy bonus very early in the un-duck,
				//      which is certainly important.
				if ( moveService->m_flDuckAmount <= 0.75f && moveService->pawn->m_fFlags & FL_DUCKING )
				{
					RemoveFlag(moveService->pawn, FL_DUCKING );
				}
			}
			else
			{
				// Reset to fully-ducked as we went under something we can't un-duck from.
				// We'll try again once the player has moved out of the obstructing obstacle.
				moveService->m_flDuckAmount = 1.0f;
				moveService->m_bDucked = true;
				moveService->m_bDucking = false;
				AddFlag(moveService->pawn, FL_DUCKING );

				SetDuckedEyeOffset( moveService->m_flDuckAmount );
			}
		}
	}
	HandleDuckingSpeedCrop( moveService->m_flDuckAmount ); // See hl2sdk
}

void CCSPlayer_MovementServices::SetGroundEntity(trace_t* pm)
{
	// TODO: same thing, just no noclip flag check
}