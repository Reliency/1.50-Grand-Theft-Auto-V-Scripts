void __EntryFunction__()
{
	if (IS_SCREEN_FADED_OUT())
	{
		DO_SCREEN_FADE_IN(500);
	}
	if (HAS_FORCE_CLEANUP_OCCURRED(18))
	{
		func_1();
	}
	while (true)
	{
		wait(0);
	}
}

void func_1()
{
	TERMINATE_THIS_THREAD();
}

__________________________
Native Named by Reliency
1577160490
__________________________
