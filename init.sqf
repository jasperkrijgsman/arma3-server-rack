//if (isServer) then {
	_trigger = createTrigger ["EmptyDetector", position _this];
	publicVariable "_trigger";
//}

//if (!isDedicated) then {
	//waitUntil {!isNil "_trigger"};
	_trigger setTriggerStatements ["true", "", ""];
	_trigger setSoundEffect ["$NONE$", "", "", "server_noise"];
//};