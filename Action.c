//   *****************************************************************************************************************************************
//   ****   PLEASE NOTE: This is a READ-ONLY representation of the actual script. For editing please press the "Develop Script" button.   ****
//   *****************************************************************************************************************************************

Action()
{
	lr_start_transaction("Transaction 1");
	truclient_step("1", "Navigate to 'https://supportweb.oras...Web%2fHome.aspx'", "snapshot=Action_1.inf");
	lr_end_transaction("Transaction 1",0);
	truclient_step("4", "Scroll on Login Home Welcome to...", "snapshot=Action_4.inf");
	truclient_step("5", "Wait 3 seconds", "snapshot=Action_5.inf");
	lr_start_transaction("Transaction 2");
	truclient_step("7", "Click on Support Sales link", "snapshot=Action_7.inf");
	lr_end_transaction("Transaction 2",0);

	return 0;
}
