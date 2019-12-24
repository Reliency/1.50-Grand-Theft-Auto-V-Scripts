#region Local Var
	int iLocal_0 = 0;
	int iLocal_1 = 0;
	int iLocal_2 = 0;
	struct<2> ScriptParam_0 = { 0, 0 } ;
#endregion

void __EntryFunction__()
{
	float fVar0;
	
	if (HAS_FORCE_CLEANUP_OCCURRED(19))
	{
		func_1();
	}
	iLocal_0 = ScriptParam_3;
	iLocal_1 = ScriptParam_3.f_1;
	while (!IS_BIT_SET(iLocal_2, 1))
	{
		if (!IS_BIT_SET(iLocal_2, 0))
		{
			if (DOES_ENTITY_EXIST(iLocal_0))
			{
				if (IS_VEHICLE_DRIVEABLE(iLocal_0, 0))
				{
					SET_ENTITY_AS_MISSION_ENTITY(iLocal_0, false, 1);
					FREEZE_ENTITY_POSITION(iLocal_0, true);
					SET_ENTITY_PROOFS(iLocal_0, true, true, true, true, true, false, 0, false);
					if (DOES_ENTITY_EXIST(iLocal_1))
					{
						SET_ENTITY_AS_MISSION_ENTITY(iLocal_1, false, 1);
						FREEZE_ENTITY_POSITION(iLocal_1, true);
						SET_ENTITY_PROOFS(iLocal_1, true, true, true, true, true, false, 0, false);
					}
					SET_BIT(&iLocal_2, 0);
				}
			}
		}
		else if (!IS_ENTITY_DEAD(IS_ENTITY_DEAD(), 0))
		{
			if (IS_VEHICLE_DRIVEABLE(iLocal_0, 0))
			{
				fVar0 = vdist2(GET_ENTITY_COORDS(GET_ENTITY_COORDS(), true), GET_ENTITY_COORDS(iLocal_0, true));
				if (fVar0 > 90000f)
				{
					SET_BIT(&iLocal_2, 1);
				}
				else if (fVar0 > 40000f && !IS_ENTITY_ON_SCREEN(iLocal_0))
				{
					SET_BIT(&iLocal_2, 1);
				}
			}
			else
			{
				SET_BIT(&iLocal_2, 1);
			}
		}
		wait(0);
	}
	func_1();
}

void func_1()
{
	SET_VEHICLE_AS_NO_LONGER_NEEDED(&iLocal_0);
	SET_ENTITY_AS_NO_LONGER_NEEDED(&iLocal_1);
	TERMINATE_THIS_THREAD();
}

__________________________
Native Named by Reliency
1577160517
__________________________
