8 possible button states instead of 2, defined by IN_BUTTON_STATE_COUNT

=> Require 3 bits to represent all possible states

|                           | buttonstate1 | buttonstate2 | buttonstate3 | Note                                                                  |
|:--------------------------|:------------:|:------------:|:------------:|:----------------------------------------------------------------------|
| IN_BUTTON_UP              | 0            | 0            | 0            | Default state                                                         |
| IN_BUTTON_DOWN            | 1            | 0            | 0            | State for holding a key                                               |
| IN_BUTTON_DOWN_UP         | 0            | 1            | 0            | Release a key being held last tick                                    |
| IN_BUTTON_UP_DOWN         | 1            | 1            | 0            | Key is newly pressed this tick. State sent by normal keypress.        |
| IN_BUTTON_UP_DOWN_UP      | 0            | 0            | 1            | Press and release within the same tick. State sent by scroll inputs.  |
| IN_BUTTON_DOWN_UP_DOWN    | 1            | 0            | 1            | Previously held then release and repress within the same tick         |
| IN_BUTTON_DOWN_UP_DOWN_UP | 0            | 1            | 1            | Previously held, release, repress and re-release within the same tick |
| IN_BUTTON_UP_DOWN_UP_DOWN | 1            | 1            | 1            | Press, release, then repress within the same tick.                    |

- Ladderhopping only checks for buttonstate1 value, so scrolling will not work if player wants be boosted off the ladder.
- Scroll inputs going through subtick pipeline (IN_BUTTON_UP_DOWN_UP) will not register, as the engine will consider the player as if they never pressed the key in the first place.
- Scroll input subtick moves look like this (IN_JUMP = 2):
```
CSGOUserCmdPB
{
base {
  command_number: 63188
  tick_count: 63346
  buttons_pb {
    buttonstate1: 0
    buttonstate2: 0
    buttonstate3: 2 
  }
  viewangles {
    x: 19.0926456
    y: 100.950325
    z: 0
  }
  forwardmove: 0
  leftmove: 0
  upmove: 0
  random_seed: 1990122587
  mousedx: 0
  mousedy: 0
  pawn_entity_handle: 14582260
  subtick_moves {
    button: 2
    pressed: true
    when: 0
  }
  subtick_moves {
    button: 2
    pressed: false
    when: 0
  }
  move_crc: "\032\006\010\000\020\000\030\002\"\017\r\275\275\230A\025\221\346\311B\035\000\000\000\000"
  fixangle_tick: 9709
}
```