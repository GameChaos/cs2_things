#include <idc.idc>

// rename cvars and commands to their appropriate names automatically.

// converted from a python script to idc for us plebs.
// stolen from a game hacking website

// cvar signature
// 48 8D ? ? ? ? ? 48 8D ? ? ? ? ? E8 ? ? ? ? 48 8D ? ? ? ? ? 48 81 C4 88 00 00 00 E9 ? ? ? ?
// command signature
// 48 8D ? ? ? ? ? 66 0F 7F 44 24 40 48 8D ? ? ? ? ? 0F 11 4C 24 30 E8 ? ? ? ? 48 8D ? ? ? ? ?
static main()
{
	auto current = get_imagebase() + 1024;
	auto max = 0;
	
	auto pattern = "48 8D ? ? ? ? ?  48 8D ? ? ? ? ?  E8 ? ? ? ?  48 8D ? ? ? ? ?  E8 ? ? ? ?  48 8D ? ? ? ? ?  E8 ? ? ? ?";
	
	auto uniqueCount = 0;
	// this attempts to rename cvars made by RegisterCvar.
	// the pattern is a bit too broad and found a "cvar" named %s::%s in server.dll
	/*
	while (1)
	{
		// search for convar creation byte sequence
		current = find_binary(current, SEARCH_DOWN | SEARCH_NEXT, pattern);
		if (current == BADADDR)
		{
			break;
		}
		
		// should be at .text:000000018065B60C 48 8D 15 AD 59 8D 00  lea     rdx, aHostTimescale ; "host_timescale"
		auto cvarNameAddress = GetOperandValue(current, 1);
		auto cvarName = GetString(cvarNameAddress, -1, ASCSTR_C);
		if (strlen(cvarName) == 0)
		{
			continue;
		}
		print(cvarName);
		
		// now go down to an LEA (48 8D) instruction to get to the actual convar operand
		auto last = current;
		current = current + 7;
		auto cvarAddress = GetOperandValue(current, 1);
		auto lastName = get_name(cvarAddress, GN_DEMANGLED);
		if (get_name_ea_simple(cvarName) == BADADDR || strstr(cvarName, lastName, 0) != -1)
		{
			set_name(cvarAddress, cvarName);
		}
		else
		{
			set_name(cvarAddress, sprintf("%s__%d", cvarName, uniqueCount));
			uniqueCount = uniqueCount + 1;
			msg("Duplicate cvar %s\n", cvarName);
		}
		
		current = current + 1;
		// return current;
		// break;
	}
	current = get_imagebase() + 1024;
	*/
	// cvars
	while (1)
	{
		current = SetNextCvarName(current, "48 8D ? ? ? ? ? 48 8D ? ? ? ? ? E8 ? ? ? ? 48 8D ? ? ? ? ? 48 81 C4 88 00 00 00 E9 ? ? ? ?");
		if (current == 0)
		{
			break;
		}
		current = current + 1;
	}
	// commands
	current = get_imagebase() + 1024;
	while (1)
	{
		current = SetNextCvarName(current, "48 8D ? ? ? ? ? 66 0F 7F 44 24 40 48 8D ? ? ? ? ? 0F 11 4C 24 30 E8 ? ? ? ? 48 8D ? ? ? ? ? 48 83 C4 58");
		if (current == 0)
		{
			break;
		}
		current = current + 1;
	}
}

static SetNextCvarName(base, pattern)
{
	// search for convar creation byte sequence
	auto current = find_binary(base, SEARCH_DOWN | SEARCH_NEXT, pattern);
	if (current == BADADDR)
	{
		return 0;
	}
	
	// should be at .text:00000001800A587A 48 8D 15 E7 AC E8 00  lea     rdx, aSvAutobunnyhop ; "sv_autobunnyhopping"
	auto cvarNameAddress = GetOperandValue(current, 1);
	auto cvarName = GetString(cvarNameAddress, -1, ASCSTR_C);
	if (strlen(cvarName) == 0)
	{
		msg("Encountered empty cvar name at %x", cvarNameAddress);
		return 0;
	}
	// print(cvarName);
	
	// now search down for an LEA (48 8D) instruction to get to the actual convar operand
	auto last = current;
	current = FindBinary(current, SEARCH_DOWN, "48 8D 0D ? ? ? ?");
	if (current - last > 20)
	{
		msg("Couldn't find operand for cvar \"%s\".", cvarName);
		return 0;
	}
	set_name(GetOperandValue(current, 1), cvarName);
	return current;
}
