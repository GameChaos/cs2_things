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
	auto base = get_imagebase() + 1024;
	auto current = 0;
	// cvars
	while (1)
	{
		current = SetNextCvarName(base, "48 8D ? ? ? ? ? 48 8D ? ? ? ? ? E8 ? ? ? ? 48 8D ? ? ? ? ? 48 81 C4 88 00 00 00 E9 ? ? ? ?");
		if (current == 0)
		{
			break;
		}
		base = current + 1;
	}
	// commands
	base = get_imagebase() + 1024;
	while (1)
	{
		current = SetNextCvarName(base, "48 8D ? ? ? ? ? 66 0F 7F 44 24 40 48 8D ? ? ? ? ? 0F 11 4C 24 30 E8 ? ? ? ? 48 8D ? ? ? ? ? 48 83 C4 58");
		if (current == 0)
		{
			break;
		}
		base = current + 1;
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