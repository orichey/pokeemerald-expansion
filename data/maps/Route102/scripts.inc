Route102_MapScripts::
	.byte 0

Route102_EventScript_LittleBoy::
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
	end

Route102_EventScript_RouteSignOldale::
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
	end

Route102_EventScript_RouteSignPetalburg::
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
	end

Route102_EventScript_Boy::
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
	end

Route102_EventScript_Calvin::
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
	setvar VAR_0x8004, TRAINER_CALVIN_1
	specialvar VAR_RESULT, IsTrainerRegistered
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
	release
	end

Route102_EventScript_CalvinRegisterMatchCall::
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinTryRegister::
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_CalvinRegister::
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_CALVIN_1
	release
	end

Route102_EventScript_CalvinRematch::
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Rick::
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Tiana::
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_Allen::
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_Text_WatchMeCatchPokemon:
	.string "WALLY: {PLAYER}…\n"
	.string "POKéMON hide in tall grass like this,\l"
	.string "don't they?\p"
	.string "Please watch me and see if I can\n"
	.string "catch one properly.\p"
	.string "…Whoa!$"

Route102_Text_WallyIDidIt:
	.string "WALLY: I did it… It's my…\n"
	.string "My POKéMON!$"

Route102_Text_LetsGoBack:
	.string "{PLAYER}, thank you!\n"
	.string "Let's go back to the GYM!$"

Route102_Text_ImNotVeryTall:
	.string "I'm…not very tall, so I sink right\n"
	.string "into tall grass.\p"
	.string "The grass goes up my nose and…\n"
	.string "Fwafwafwafwafwa…\p"
	.string "Fwatchoo!$"

Route102_Text_CatchWholeBunchOfPokemon:
	.string "I'm going to catch a whole bunch of\n"
	.string "POKéMON!$"

Route102_Text_RouteSignOldale:
	.string "ROUTE 102\n"
	.string "{RIGHT_ARROW} OLDALE TOWN$"

Route102_Text_RouteSignPetalburg:
	.string "ROUTE 102\n"
	.string "{LEFT_ARROW} PETALBURG CITY$"

Route102_EventScript_Youngster::
	lock
	faceplayer
	msgbox Route102_EventScript_Youngster_Text_0
	release
	return


Route102_EventScript_Woman::
	lock
	faceplayer
	msgbox Route102_EventScript_Woman_Text_0
	release
	return


Route102_EventScript_JSOboy1::
	lock
	faceplayer
	msgbox Route102_EventScript_JSOboy1_Text_0
	release
	return


Route102_EventScript_Questioner::
	lock
	faceplayer
	msgbox Route102_EventScript_Questioner_Text_0
	release
	return


Route102_Text_UpDownSign::
	lockall
	msgbox Route102_Text_UpDownSign_Text_0
	releaseall
	return


Route102_Text_LeftRightSign::
	lockall
	msgbox Route102_Text_LeftRightSign_Text_0
	releaseall
	return


Route102_EventScript_Youngster_Text_0:
	.string "I've heard TREEFALL WOODS has\n"
	.string "experienced severe deforestation.\p"
	.string "Are the rumors true?$"

Route102_EventScript_Woman_Text_0:
	.string "Just a year ago, lumberjacks decimated\n"
	.string "TREEFALL WOODS. They left suddenly,\l"
	.string "following the orders of Paul, TREEFALL\l"
	.string "CITY'S Gym Leader.\p"
	.string "Many POKéMON species that used to live\n"
	.string "in the woods were driven out due to the\l"
	.string "destruction of the forest, and new\l"
	.string "POKéMON have moved in.$"

Route102_EventScript_JSOboy1_Text_0:
	.string "Anthrotech and Paul are trying to plant\n"
	.string "trees in the forest to bring it back.\p"
	.string "It'll never work!$"

Route102_EventScript_Questioner_Text_0:
	.string "Who are all of these people in orange,\n"
	.string "and why are they so angry?$"

Route102_Text_UpDownSign_Text_0:
	.string "DESOLA TOWN {UP_ARROW}\n"
	.string "TREEFALL WOODS {DOWN_ARROW}$"

Route102_Text_LeftRightSign_Text_0:
	.string "TREEFALL WOODS {LEFT_ARROW}\n"
	.string "TREEFALL CITY {RIGHT_ARROW}$"
