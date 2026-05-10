	if(is_firm_341())
	{
		firmware  = 0x341C;
		//fw_ver    = 0x8534;
		off_idps  = 0x80000000003BA880ULL;
		off_idps2 = 0x800000000044A174ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_341();
	}
	else if(is_firm_355())
	{
		firmware  = 0x355C;
		off_idps  = 0x80000000003C2EF0ULL;
		off_idps2 = 0x8000000000452174ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_355();
	}
	else if(is_firm_355dex())
	{
		firmware  = 0x355D;
		off_idps  = 0x80000000003DE170ULL;
		off_idps2 = 0x8000000000472174ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_355dex();
	}
	else if(is_firm_355deh())
	{
		firmware  = 0x355E;
		off_idps  = 0x8000000000410F70ULL;
		off_idps2 = 0x80000000004A2174ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_355deh();
	}
	else if(is_firm_421())
	{
		firmware  = 0x421C;
		//fw_ver    = 0xA474;
		off_idps  = 0x80000000003D9230ULL;
		off_idps2 = 0x8000000000477E9CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_421();
	}
	else if(is_firm_430())
	{
		firmware  = 0x430C;
		off_idps  = 0x80000000003DB1B0ULL;
		off_idps2 = 0x8000000000476F3CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_430();
	}
	else if(is_firm_431())
	{
		firmware  = 0x431C;
		off_idps  = 0x80000000003DB1B0ULL;
		off_idps2 = 0x8000000000476F3CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_431();
	}
	else if(is_firm_440())
	{
		firmware  = 0x440C;
		off_idps  = 0x80000000003DB830ULL;
		off_idps2 = 0x8000000000476F3CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_440();
	}
	else if(is_firm_441())
	{
		firmware  = 0x441C;
		off_idps  = 0x80000000003DB830ULL;
		off_idps2 = 0x8000000000476F3CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_441();
	}
	else if(is_firm_446())
	{
		firmware  = 0x446C;
		off_idps  = 0x80000000003DBE30ULL;
		off_idps2 = 0x8000000000476F3CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_446();
	}
	else if(is_firm_450())
	{
		firmware  = 0x450C;
		off_idps  = 0x80000000003DE230ULL;
		off_idps2 = 0x800000000046CF0CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_450();
	}
	else if(is_firm_453())
	{
		firmware  = 0x453C;
		off_idps  = 0x80000000003DE430ULL;
		off_idps2 = 0x800000000046CF0CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_453();
	}
	else if(is_firm_455())
	{
		firmware  = 0x455C;
		off_idps  = 0x80000000003E17B0ULL;
		off_idps2 = 0x8000000000474F1CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_455();
	}
	else if(is_firm_460())
	{
		firmware  = 0x460C;
		off_idps  = 0x80000000003E2BB0ULL; // Thanks Orion90 for the offsets & ERMAK for the LV2 dump of 4.60
		off_idps2 = 0x8000000000474F1CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_460();
	}
	else if(is_firm_465())
	{
		firmware  = 0x465C;
		off_idps  = 0x80000000003E2BB0ULL; // The same as 4.60 CEX
		off_idps2 = 0x8000000000474F1CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_465();
	}
	else if(is_firm_466())
	{
		firmware  = 0x466C;
		off_idps  = 0x80000000003E2BB0ULL; // The same as 4.60-4.65 CEX
		off_idps2 = 0x8000000000474F1CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_465();
	}
	else if(is_firm_470())
	{
		firmware  = 0x470C;
		off_idps  = 0x80000000003E2DB0ULL;
		off_idps2 = 0x8000000000474AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_470();
	}
	else if(is_firm_475())
	{
		firmware  = 0x475C;
		off_idps  = 0x80000000003E2E30ULL;
		off_idps2 = 0x8000000000474AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475();
	}
	else if(is_firm_476())
	{
		firmware  = 0x476C;
		off_idps  = 0x80000000003E2E30ULL;
		off_idps2 = 0x8000000000474AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475();
	}
	else if(is_firm_466dex())
	{
		firmware  = 0x466D;
		off_idps  = 0x80000000004095B0ULL; // The same as 4.60-4.65 CEX
		off_idps2 = 0x800000000049CF1CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_465dex();
	}
	else if(is_firm_478())
	{
		firmware  = 0x478C;
		off_idps  = 0x80000000003E2E30ULL;
		off_idps2 = 0x8000000000474AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475();
	}
	else if(is_firm_480())
	{
		firmware  = 0x480C;
		off_idps  = 0x80000000003E2E30ULL;
		off_idps2 = 0x8000000000474AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_480();
	}
	else if(is_firm_481())
	{
		firmware  = 0x481C;
		off_idps  = 0x80000000003E2E30ULL;
		off_idps2 = 0x8000000000474AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475();
	}
	else if(is_firm_482())
	{
		firmware  = 0x482C;
		off_idps  = 0x80000000003E2E30ULL;
		off_idps2 = 0x8000000000474AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475();
	}
	else if(is_firm_483())
	{
		firmware  = 0x483C;
		off_idps  = 0x80000000003E2E30ULL;
		off_idps2 = 0x8000000000474AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475();
	}
	else if(is_firm_484())
	{
		firmware  = 0x484C;
		off_idps  = 0x80000000003E2E30ULL;
		off_idps2 = 0x8000000000474AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475();
	}
	else if(is_firm_485())
	{
		firmware  = 0x485C;
		off_idps  = 0x80000000003E2E30ULL;
		off_idps2 = 0x8000000000474AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475();
	}
	else if(is_firm_486())
	{
		firmware  = 0x486C;
		off_idps  = 0x80000000003E2E30ULL;
		off_idps2 = 0x8000000000474AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475();
	}
	else if(is_firm_487())
	{
		firmware  = 0x487C;
		off_idps  = 0x80000000003E2E30ULL;
		off_idps2 = 0x8000000000474AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475();
	}
	else if(is_firm_488())
	{
		firmware  = 0x488C;
		off_idps  = 0x80000000003E2E30ULL;
		off_idps2 = 0x8000000000474AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475();
	}
	else if(is_firm_489())
	{
		firmware  = 0x489C;
		off_idps  = 0x80000000003E2E30ULL;
		off_idps2 = 0x8000000000474AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475();
	}
	else if(is_firm_490())
	{
		firmware  = 0x490C;
		off_idps  = 0x80000000003E2E30ULL;
		off_idps2 = 0x8000000000474AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_480();
	}
	else if(is_firm_491())
	{
		firmware  = 0x491C;
		off_idps  = 0x80000000003E2E30ULL;
		off_idps2 = 0x8000000000474AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475();
	}
	else if(is_firm_421dex())
	{
		firmware  = 0x421D;
		off_idps  = 0x80000000003F7A30ULL;
		off_idps2 = 0x800000000048FE9CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_421dex();
	}
	else if(is_firm_430dex())
	{
		firmware  = 0x430D;
		off_idps  = 0x80000000003F9930ULL;
		off_idps2 = 0x8000000000496F3CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_430dex();
	}
	else if(is_firm_441dex())
	{
		firmware  = 0x441D;
		off_idps  = 0x80000000003FA2B0ULL;
		off_idps2 = 0x8000000000496F3CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_441dex();
	}
	else if(is_firm_446dex())
	{
		firmware  = 0x446D;
		off_idps  = 0x80000000003FA8B0ULL;
		off_idps2 = 0x8000000000496F3CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_446dex();
	}
	else if(is_firm_450dex())
	{
		firmware  = 0x450D;
		off_idps  = 0x8000000000402AB0ULL;
		off_idps2 = 0x8000000000494F0CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_450dex();
	}
	else if(is_firm_453dex())
	{
		firmware  = 0x453D;
		off_idps  = 0x80000000004045B0ULL;
		off_idps2 = 0x8000000000494F1CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_453dex();
	}
	else if(is_firm_455dex())
	{
		firmware  = 0x455D;
		off_idps  = 0x8000000000407930ULL;
		off_idps2 = 0x8000000000494F1CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_455dex();
	}
	else if(is_firm_460dex())
	{
		firmware  = 0x460D;
		off_idps  = 0x80000000004095B0ULL;
		off_idps2 = 0x800000000049CF1CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_460dex();
	}
	else if(is_firm_465dex())
	{
		firmware  = 0x465D;
		off_idps  = 0x80000000004095B0ULL;
		off_idps2 = 0x800000000049CF1CULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_465dex();
	}
	else if(is_firm_470dex())
	{
		firmware  = 0x470D;
		off_idps  = 0x80000000004098B0ULL;
		off_idps2 = 0x800000000049CAF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_470dex();
	}
	else if(is_firm_475dex())
	{
		firmware  = 0x475D;
		off_idps  = 0x8000000000409930ULL;
		off_idps2 = 0x800000000049CAF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475dex();
	}
	else if(is_firm_476dex())
	{
		firmware  = 0x476D;
		off_idps  = 0x8000000000409930ULL;
		off_idps2 = 0x800000000049CAF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475dex();
	}
	else if(is_firm_478dex())
	{
		firmware  = 0x478D;
		off_idps  = 0x8000000000409930ULL;
		off_idps2 = 0x800000000049CAF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475dex();
	}
	else if(is_firm_481dex())
	{
		firmware  = 0x481D;
		off_idps  = 0x8000000000409A30ULL;
		off_idps2 = 0x800000000049CAF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_481dex();
	}
	else if(is_firm_482dex())
	{
		firmware  = 0x482D;
		off_idps  = 0x8000000000409A30ULL;
		off_idps2 = 0x800000000049CAF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_481dex();
	}
	else if(is_firm_483dex())
	{
		firmware  = 0x483D;
		off_idps  = 0x8000000000409A30ULL;
		off_idps2 = 0x800000000049CAF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_481dex();
	}
	else if(is_firm_484dex())
	{
		firmware  = 0x484D;
		off_idps  = 0x8000000000409A30ULL;
		off_idps2 = 0x800000000049CAF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_481dex();
	}
	else if(is_firm_485dex())
	{
		firmware  = 0x485D;
		off_idps  = 0x8000000000409A30ULL;
		off_idps2 = 0x800000000049CAF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_481dex();
	}
	else if(is_firm_486dex())
	{
		firmware  = 0x486D;
		off_idps  = 0x8000000000409A30ULL;
		off_idps2 = 0x800000000049CAF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_481dex();
	}
	else if(is_firm_487dex())
	{
		firmware  = 0x487D;
		off_idps  = 0x8000000000409A30ULL;
		off_idps2 = 0x800000000049CAF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_481dex();
	}
	else if(is_firm_488dex())
	{
		firmware  = 0x488D;
		off_idps  = 0x8000000000409A30ULL;
		off_idps2 = 0x800000000049CAF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_481dex();
	}
	else if(is_firm_489dex())
	{
		firmware  = 0x489D;
		off_idps  = 0x8000000000409A30ULL;
		off_idps2 = 0x800000000049CAF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_481dex();
	}
	else if(is_firm_490dex())
	{
		firmware  = 0x490D;
		off_idps  = 0x8000000000409A30ULL;
		off_idps2 = 0x800000000049CAF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_481dex();
	}
	else if(is_firm_49Xdex())
	{
		firmware  = 0x491D;
		off_idps  = 0x8000000000409A30ULL;
		off_idps2 = 0x800000000049CAF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_481dex();
	}
	else if(is_firm_460deh())
	{
		firmware  = 0x460E;
		off_idps  = 0x8000000000432430ULL;
		off_idps2 = 0x80000000004C4F18ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_460deh();
	}
	else if(is_firm_475deh())
	{
		firmware  = 0x475E;
		off_idps  = 0x80000000004326B0ULL;
		off_idps2 = 0x80000000004C4AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475deh();
	}
	else if(is_firm_476deh())
	{
		firmware  = 0x476E;
		off_idps  = 0x80000000004326B0ULL;
		off_idps2 = 0x80000000004C4AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475deh();
	}
	else if(is_firm_478deh())
	{
		firmware  = 0x478E;
		off_idps  = 0x80000000004326B0ULL;
		off_idps2 = 0x80000000004C4AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475deh();
	}
	else if(is_firm_480dex())
	{
		firmware  = 0x480D;
		off_idps  = 0x8000000000409A30ULL;
		off_idps2 = 0x800000000049CAF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_480dex();
	}
	else if(is_firm_480deh())
	{
		firmware  = 0x480E;
		off_idps  = 0x80000000004326B0ULL;
		off_idps2 = 0x80000000004C4AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_480deh();
	}
	else if(is_firm_481deh())
	{
		firmware  = 0x481E;
		off_idps  = 0x80000000004326B0ULL;
		off_idps2 = 0x80000000004C4AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475deh();
	}
	else if(is_firm_482deh())
	{
		firmware  = 0x482E;
		off_idps  = 0x80000000004326B0ULL;
		off_idps2 = 0x80000000004C4AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475deh();
	}
	else if(is_firm_483deh())
	{
		firmware  = 0x483E;
		off_idps  = 0x80000000004326B0ULL;
		off_idps2 = 0x80000000004C4AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475deh();
	}
	else if(is_firm_484deh())
	{
		firmware  = 0x484E;
		off_idps  = 0x80000000004326B0ULL;
		off_idps2 = 0x80000000004C4AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475deh();
	}
	else if(is_firm_485deh())
	{
		firmware  = 0x485E;
		off_idps  = 0x80000000004326B0ULL;
		off_idps2 = 0x80000000004C4AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475deh();
	}
	else if(is_firm_486deh())
	{
		firmware  = 0x486E;
		off_idps  = 0x80000000004326B0ULL;
		off_idps2 = 0x80000000004C4AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475deh();
	}
	else if(is_firm_487deh())
	{
		firmware  = 0x487E;
		off_idps  = 0x80000000004326B0ULL;
		off_idps2 = 0x80000000004C4AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475deh();
	}
	else if(is_firm_488deh())
	{
		firmware  = 0x488E;
		off_idps  = 0x80000000004326B0ULL;
		off_idps2 = 0x80000000004C4AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475deh();
	}
	else if(is_firm_489deh())
	{
		firmware  = 0x489E;
		off_idps  = 0x80000000004326B0ULL;
		off_idps2 = 0x80000000004C4AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475deh();
	}
	else if(is_firm_490deh())
	{
		firmware  = 0x490E;
		off_idps  = 0x80000000004326B0ULL;
		off_idps2 = 0x80000000004C4AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475deh();
	}
	else if(is_firm_49Xdeh())
	{
		firmware  = 0x491E;
		off_idps  = 0x80000000004326B0ULL;
		off_idps2 = 0x80000000004C4AF4ULL;
		off_psid  = off_idps2 + 0x18ULL;
		payload_mode = is_payload_loaded_475deh();
	}

	if(is_cobra_based()) use_cobra = true;

	if(lv1peek(0x1773ULL) == 0x1773ULL)
	{
		unsupported_cfw = is_ps3hen = true;
		payload_mode = PAYLOAD_PS3HEN; // HENTai payload
	}

	// Read xRegistry data
	read_from_registry();

	// Read custom settings
	read_settings();

	*payload_str = 0;
	if(is_ps3hen) goto payload_ps3hen;

	switch(firmware)
	{
		case 0x341C:
			set_bdvdemu_341(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_341(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case HERMES_PAYLOAD:
					break;
			}
			break;
		case 0x355C:
			set_bdvdemu_355(payload_mode);
			switch(payload_mode)
			{
				case WANIN_PAYLOAD:
				case ZERO_PAYLOAD: // No payload installed
					install_new_poke(); // Needed for lv2 patch

					if (!map_lv1())
					{
						remove_new_poke();

						tiny3d_Init(1024*1024);
						ioPadInit(7);
						DrawDialogOK("Error Loading Payload: map failed?!");
						exit(0);
					}

					patch_lv2_protection();
					remove_new_poke(); // Restore pokes

					unmap_lv1(); // 3.55 need unmap?

					__asm__("sync");
					sleep(1); // Don't touch

					// Please, do not translate this strings - i prefer this errors in english for better support
					if(payload_mode == WANIN_PAYLOAD)
					{
						sys8_disable_all = 1;
						sprintf(temp_buffer, "WANINV2 DETECTED\nOLD SYSCALL 36 LOADED (mode=%i)\n\n - no big files allowed with this payload -", payload_mode);
						sprintf(payload_str, "wanin cfw - old syscall36, no bigfiles allowed");
					}
					else
					{
						load_payload_355(payload_mode);

						__asm__("sync");
						sleep(1); // Maybe needed, maybe not

						if(!use_cobra && install_mamba)
						{
							use_mamba = load_ps3_mamba_payload();
						}
					}
					break;
				case SYS36_PAYLOAD:
					sys8_disable_all = 1;
					sprintf(temp_buffer, "OLD SYSCALL 36 RESIDENT, RESPECT!\nNEW PAYLOAD NOT LOADED...\n\n - no big files allowed with this payload -");
					sprintf(payload_str, "syscall36 resident - new payload no loaded, no bigfiles allowed");
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x355D:
			set_bdvdemu_355dex(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					install_new_poke_355dex();
					if (!map_lv1_355dex())
					{
						remove_new_poke_355dex();

						tiny3d_Init(1024*1024);
						ioPadInit(7);
						DrawDialogOK("Error Loading Payload: map failed?!");
						exit(0);
					}
					patch_lv2_protection_355dex();

					remove_new_poke_355dex(); // Restore pokes
					unmap_lv1_355dex(); // 3.55 need unmap?
					__asm__("sync");

					load_payload_355dex(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;

		case 0x355E:
			set_bdvdemu_355deh(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					install_new_poke_355deh();
					if (!map_lv1_355deh())
					{
						remove_new_poke_355deh();

						tiny3d_Init(1024*1024);
						ioPadInit(7);
						DrawDialogOK("Error Loading Payload: map failed?!");
						exit(0);
					}
					patch_lv2_protection_355deh();

					remove_new_poke_355deh(); // Restore pokes
					unmap_lv1_355deh(); // 3.55 need unmap?
					__asm__("sync");

					load_payload_355deh(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;

		case 0x421C:
			set_bdvdemu_421(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_421(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x421D:
			set_bdvdemu_421dex(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_421dex(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x430C:
			set_bdvdemu_430(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_430(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x430D:
			set_bdvdemu_430dex(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_430dex(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x431C:
			set_bdvdemu_431(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_431(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x440C:
			set_bdvdemu_440(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_440(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x441C:
			set_bdvdemu_441(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_441(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x441D:
			set_bdvdemu_441dex(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_441dex(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x446C:
			set_bdvdemu_446(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_446(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x446D:
			set_bdvdemu_446dex(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_446dex(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x450C:
			set_bdvdemu_450(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_450(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x450D:
			set_bdvdemu_450dex(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_450dex(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x453C:
			set_bdvdemu_453(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_453(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x453D:
			set_bdvdemu_453dex(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_453dex(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x455C:
			set_bdvdemu_455(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_455(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x455D:
			set_bdvdemu_455dex(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_455dex(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x460C:
			set_bdvdemu_460(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_460(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x460D:
			set_bdvdemu_460dex(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_460dex(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x460E:
			set_bdvdemu_460dex(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_460dex(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x465C:
		case 0x466C:
			set_bdvdemu_465(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_465(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x465D:
		case 0x466D:
			set_bdvdemu_465dex(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_465dex(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x470C:
			set_bdvdemu_470(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_470(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x470D:
			set_bdvdemu_470dex(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_470dex(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x475C:
		case 0x476C:
		case 0x478C:
		case 0x481C:
		case 0x482C:
		case 0x483C:
		case 0x484C:
		case 0x485C:
		case 0x486C:
		case 0x487C:
		case 0x488C:
		case 0x489C:
		case 0x491C:
			set_bdvdemu_475(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_475(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x475D:
		case 0x476D:
		case 0x478D:
			set_bdvdemu_475dex(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_475dex(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x475E:
		case 0x476E:
		case 0x478E:
		case 0x481E:
		case 0x482E:
		case 0x483E:
		case 0x484E:
		case 0x485E:
		case 0x486E:
		case 0x487E:
		case 0x488E:
		case 0x489E:
		case 0x490E:
		case 0x491E:
			set_bdvdemu_475deh(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_475deh(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x480C:
		case 0x490C:
			set_bdvdemu_480(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_480(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x480D:
			set_bdvdemu_480dex(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_480dex(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x480E:
			set_bdvdemu_480deh(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_480deh(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		case 0x481D:
		case 0x482D:
		case 0x483D:
		case 0x484D:
		case 0x485D:
		case 0x486D:
		case 0x487D:
		case 0x488D:
		case 0x489D:
		case 0x490D:
		case 0x491D:
			set_bdvdemu_481dex(payload_mode);
			switch(payload_mode)
			{
				case ZERO_PAYLOAD: // No payload installed
					load_payload_481dex(payload_mode);
					__asm__("sync");
					sleep(1); // Maybe needed, maybe not

					if(!use_cobra && install_mamba)
					{
						use_mamba = load_ps3_mamba_payload();
					}
					break;
				case SKY10_PAYLOAD:
					break;
			}
			break;
		default:
			tiny3d_Init(1024*1024);
			ioPadInit(7);
			unsupported_cfw = true;
			break;
	}

	if(use_mamba && !use_cobra)
	{
		syscall_40(1, 0); // Disable PS3 Disc-less / load mamba
		if(is_cobra_based()) use_cobra = true;
	}

	usleep(250000);


	if(payload_mode >= ZERO_PAYLOAD && sys8_disable_all == 0)
	{
		int test = 0x100;

		uint16_t mamba_version = 0;
		if(use_cobra) sys8_mamba_version(&mamba_version);
		if(use_mamba) is_mamba_v2 = (mamba_version < 0x0801);

		// Check syscall8 status
		test = sys8_enable(0ULL);
		if((test & 0xff00) == 0x300)
		{
			if(payload_mode == ZERO_PAYLOAD)
			{
				if(firmware== 0x341C)
						sprintf(payload_str, "payload-hermes - new syscall%i v%i (%slibfs_patched)", (u16)SYSCALL_SK1E, test & 0xff, is_libfs_patched()? "": "no ");
				else
				{
					if(use_mamba)
						sprintf(payload_str, "payload-sk1e sc%i - '%s v%X' syscall8 v%i (%slibfs_patched)", (u16)SYSCALL_SK1E, is_mamba_v2 ? "Mamba 2.x" : "Mamba 3.x", mamba_version, test & 0xff, is_libfs_patched()? "": "no ");
					else if(use_cobra)
						sprintf(payload_str, "payload-sk1e sc%i - 'Cobra v%X' syscall8 v%i (%slibfs_patched)", (u16)SYSCALL_SK1E, mamba_version, test & 0xff, is_libfs_patched()? "": "no ");
					else
						sprintf(payload_str, "payload-sk1e - new syscall%i v%i (%slibfs_patched)", (u16)SYSCALL_SK1E, test & 0xff, is_libfs_patched()? "": "no ");
				}
			}
			else if (payload_mode == SKY10_PAYLOAD)
			{
				if(use_cobra && sys8_mamba() == 0x666)
					sprintf(payload_str, "payload-sk1e sc%i - '%s v%X' syscall8 v%i (%slibfs_patched)", (u16)SYSCALL_SK1E, is_mamba_v2 ? "Mamba 2.x" : "Mamba 3.x", mamba_version, test & 0xff, is_libfs_patched()? "": "no ");
				else if(use_cobra)
					sprintf(payload_str, "payload-sk1e sc%i - 'Cobra v%X' syscall8 v%i (%slibfs_patched)", (u16)SYSCALL_SK1E, mamba_version, test & 0xff, is_libfs_patched()? "": "no ");
				else
					sprintf(payload_str, "payload-sk1e - new syscall%i v%i (%slibfs_patched)", (u16)SYSCALL_SK1E, test & 0xff, is_libfs_patched()? "": "no ");
			}
			else
					sprintf(payload_str, "payload-hermes resident - new syscall%i v%i (%slibfs_patched)", (u16)SYSCALL_SK1E, test & 0xff, is_libfs_patched()? "": "no ");

		}
		else
		{
payload_ps3hen:
				{
					unsupported_cfw = false, is_ps3hen = true;
					sprintf(payload_str, "payload-PS3HEN");
					use_cobra = use_mamba = true; is_mamba_v2 = true;
				}
		}
	}
