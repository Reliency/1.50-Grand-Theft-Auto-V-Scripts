#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
#endregion

void __EntryFunction__()
{
	int iVar0;
	
	iLocal_0 = -1;
	NETWORK_SET_SCRIPT_IS_SAFE_FOR_NETWORK_GAME();
	REQUEST_IPL("prologue06_int");
	REQUEST_IPL("prologue01");
	REQUEST_IPL("prologue02");
	REQUEST_IPL("prologue03");
	REQUEST_IPL("prologue04");
	REQUEST_IPL("prologue05");
	REQUEST_IPL("prologue06");
	REQUEST_IPL("prologuerd");
	REQUEST_IPL("Prologue01c");
	REQUEST_IPL("Prologue01d");
	REQUEST_IPL("Prologue01e");
	REQUEST_IPL("Prologue01f");
	REQUEST_IPL("Prologue01g");
	REQUEST_IPL("prologue01h");
	REQUEST_IPL("prologue01i");
	REQUEST_IPL("prologue01j");
	REQUEST_IPL("prologue01k");
	REQUEST_IPL("prologue01z");
	REQUEST_IPL("prologue03b");
	REQUEST_IPL("prologue04b");
	REQUEST_IPL("prologue05b");
	REQUEST_IPL("prologue06b");
	REQUEST_IPL("prologuerdb");
	REQUEST_IPL("prologue_occl");
	REQUEST_IPL("DES_ProTree_start");
	REQUEST_IPL("DES_ProTree_start_lod");
	REQUEST_IPL("prologue04_cover");
	REQUEST_IPL("prologue03_grv_fun");
	REMOVE_IPL("prologue03_grv_dug");
	REMOVE_IPL("prologue_grv_torch");
	_0xAF12610C644A35C9("prologue", 1);
	REQUEST_MODEL(joaat("csb_prolsec"));
	while (!HAS_MODEL_LOADED(joaat("csb_prolsec")))
	{
		wait(0);
	}
	SET_PLAYER_MODEL(SET_PLAYER_MODEL(), joaat("csb_prolsec"));
	if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
	{
		SET_ENTITY_COORDS(SET_ENTITY_COORDS(), 5313.8f, -5207.2f, 83.5f, 1, false, 0, 1);
		SET_ENTITY_HEADING(SET_ENTITY_HEADING(), 169.2f);
	}
	DISPLAY_RADAR(false);
	SET_PLAYER_CONTROL(SET_PLAYER_CONTROL(), false, 0);
	NEW_LOAD_SCENE_START_SPHERE(5312.996f, -5208.671f, 83.90526f, 10f, 0);
	iVar0 = GET_GAME_TIMER() + 10000;
	while (!IS_NEW_LOAD_SCENE_LOADED() && IS_NEW_LOAD_SCENE_LOADED() < iVar0)
	{
		wait(0);
	}
	SHUTDOWN_LOADING_SCREEN();
	START_AUDIO_SCENE("MISSION_FAILED_SCENE");
	DO_SCREEN_FADE_IN(2500);
	NEW_LOAD_SCENE_STOP();
	REQUEST_ADDITIONAL_TEXT("NG_INSTALL", 0);
	while (true)
	{
		if (!IS_SCREEN_FADED_IN())
		{
			DO_SCREEN_FADE_IN(0);
		}
		DRAW_RECT(0.5f, 0.5f, 1f, 1f, 0, 0, 0, 255, 0);
		DRAW_RECT(0.5f, 0.5f, 0.8f, 0.8f, 20, 20, 20, 255, 0);
		SET_TEXT_SCALE(0.5f, 0.5f);
		SET_TEXT_CENTRE(1);
		if (timera() > 10000 && HAS_ADDITIONAL_TEXT_LOADED(0))
		{
			iLocal_0 = GET_RANDOM_INT_IN_RANGE(0, 5);
			if ((iLocal_0 - iLocal_1) != 0)
			{
				iLocal_1 = iLocal_0;
				settimera(0);
			}
		}
		else
		{
			switch (iLocal_0)
			{
				case 0:
					func_1(0.5f, 0.4f, "NG_INST_TT_1", 0);
					break;
				
				case 1:
					func_1(0.5f, 0.4f, "NG_INST_TT_2", 0);
					break;
				
				case 2:
					func_1(0.5f, 0.4f, "NG_INST_TT_3", 0);
					break;
				
				case 3:
					func_1(0.5f, 0.4f, "NG_INST_TT_4", 0);
					break;
				
				case 4:
					func_1(0.5f, 0.4f, "NG_INST_TT_5", 0);
					break;
				}
		}
		DISABLE_FRONTEND_THIS_FRAME();
		if (_HAS_ALL_CHUNKS_ON_HDD())
		{
			_CLEANUP_ASYNC_INSTALL();
			return;
		}
		wait(0);
	}
}

void func_1(float fParam0, float fParam1, char* sParam2, int iParam3)
{
	BEGIN_TEXT_COMMAND_DISPLAY_TEXT(sParam2);
	END_TEXT_COMMAND_DISPLAY_TEXT(fParam0, fParam1, iParam3);
}

__________________________
Native Named by Reliency
1577161228
__________________________
