# 1 "data/maps/Route102/scripts.pory"
Route102_MapScripts::
# 2 "data/maps/Route102/scripts.pory"
	.byte 0
# 3 "data/maps/Route102/scripts.pory"

# 4 "data/maps/Route102/scripts.pory"
Route102_EventScript_LittleBoy::
# 5 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_ImNotVeryTall, MSGBOX_NPC
# 6 "data/maps/Route102/scripts.pory"
	end
# 7 "data/maps/Route102/scripts.pory"

# 8 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignOldale::
# 9 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignOldale, MSGBOX_SIGN
# 10 "data/maps/Route102/scripts.pory"
	end
# 11 "data/maps/Route102/scripts.pory"

# 12 "data/maps/Route102/scripts.pory"
Route102_EventScript_RouteSignPetalburg::
# 13 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RouteSignPetalburg, MSGBOX_SIGN
# 14 "data/maps/Route102/scripts.pory"
	end
# 15 "data/maps/Route102/scripts.pory"

# 16 "data/maps/Route102/scripts.pory"
Route102_EventScript_Boy::
# 17 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CatchWholeBunchOfPokemon, MSGBOX_NPC
# 18 "data/maps/Route102/scripts.pory"
	end
# 19 "data/maps/Route102/scripts.pory"

# 20 "data/maps/Route102/scripts.pory"
Route102_EventScript_Calvin::
# 21 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_CALVIN_1, Route102_Text_CalvinIntro, Route102_Text_CalvinDefeated, Route102_EventScript_CalvinRegisterMatchCallAfterBattle
# 22 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 23 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_CalvinRematch
# 24 "data/maps/Route102/scripts.pory"
	setvar VAR_0x8004, TRAINER_CALVIN_1
# 25 "data/maps/Route102/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 26 "data/maps/Route102/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Route102_EventScript_CalvinTryRegister
# 27 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 28 "data/maps/Route102/scripts.pory"
	release
# 29 "data/maps/Route102/scripts.pory"
	end
# 30 "data/maps/Route102/scripts.pory"

# 31 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCallAfterBattle::
# 32 "data/maps/Route102/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 33 "data/maps/Route102/scripts.pory"
	waitmovement 0
# 34 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegisterMatchCall
# 35 "data/maps/Route102/scripts.pory"
	release
# 36 "data/maps/Route102/scripts.pory"
	end
# 37 "data/maps/Route102/scripts.pory"

# 38 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegisterMatchCall::
# 39 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegisterShort, MSGBOX_DEFAULT
# 40 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 41 "data/maps/Route102/scripts.pory"
	release
# 42 "data/maps/Route102/scripts.pory"
	end
# 43 "data/maps/Route102/scripts.pory"

# 44 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinTryRegister::
# 45 "data/maps/Route102/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, Route102_EventScript_CalvinRegister
# 46 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinPostBattle, MSGBOX_DEFAULT
# 47 "data/maps/Route102/scripts.pory"
	release
# 48 "data/maps/Route102/scripts.pory"
	end
# 49 "data/maps/Route102/scripts.pory"

# 50 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRegister::
# 51 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRegister, MSGBOX_DEFAULT
# 52 "data/maps/Route102/scripts.pory"
	register_matchcall TRAINER_CALVIN_1
# 53 "data/maps/Route102/scripts.pory"
	release
# 54 "data/maps/Route102/scripts.pory"
	end
# 55 "data/maps/Route102/scripts.pory"

# 56 "data/maps/Route102/scripts.pory"
Route102_EventScript_CalvinRematch::
# 57 "data/maps/Route102/scripts.pory"
	trainerbattle_rematch TRAINER_CALVIN_1, Route102_Text_CalvinRematchIntro, Route102_Text_CalvinRematchDefeated
# 58 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_CalvinRematchPostBattle, MSGBOX_AUTOCLOSE
# 59 "data/maps/Route102/scripts.pory"
	end
# 60 "data/maps/Route102/scripts.pory"

# 61 "data/maps/Route102/scripts.pory"
Route102_EventScript_Rick::
# 62 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_RICK, Route102_Text_RickIntro, Route102_Text_RickDefeated
# 63 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_RickPostBattle, MSGBOX_AUTOCLOSE
# 64 "data/maps/Route102/scripts.pory"
	end
# 65 "data/maps/Route102/scripts.pory"

# 66 "data/maps/Route102/scripts.pory"
Route102_EventScript_Tiana::
# 67 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_TIANA, Route102_Text_TianaIntro, Route102_Text_TianaDefeated
# 68 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_TianaPostBattle, MSGBOX_AUTOCLOSE
# 69 "data/maps/Route102/scripts.pory"
	end
# 70 "data/maps/Route102/scripts.pory"

# 71 "data/maps/Route102/scripts.pory"
Route102_EventScript_Allen::
# 72 "data/maps/Route102/scripts.pory"
	trainerbattle_single TRAINER_ALLEN, Route102_Text_AllenIntro, Route102_Text_AllenDefeated
# 73 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_AllenPostBattle, MSGBOX_AUTOCLOSE
# 74 "data/maps/Route102/scripts.pory"
	end
# 75 "data/maps/Route102/scripts.pory"

# 76 "data/maps/Route102/scripts.pory"
Route102_Text_WatchMeCatchPokemon:
# 77 "data/maps/Route102/scripts.pory"
	.string "WALLY: {PLAYER}…\n"
# 78 "data/maps/Route102/scripts.pory"
	.string "POKéMON hide in tall grass like this,\l"
# 79 "data/maps/Route102/scripts.pory"
	.string "don't they?\p"
# 80 "data/maps/Route102/scripts.pory"
	.string "Please watch me and see if I can\n"
# 81 "data/maps/Route102/scripts.pory"
	.string "catch one properly.\p"
# 82 "data/maps/Route102/scripts.pory"
	.string "…Whoa!$"
# 83 "data/maps/Route102/scripts.pory"

# 84 "data/maps/Route102/scripts.pory"
Route102_Text_WallyIDidIt:
# 85 "data/maps/Route102/scripts.pory"
	.string "WALLY: I did it… It's my…\n"
# 86 "data/maps/Route102/scripts.pory"
	.string "My POKéMON!$"
# 87 "data/maps/Route102/scripts.pory"

# 88 "data/maps/Route102/scripts.pory"
Route102_Text_LetsGoBack:
# 89 "data/maps/Route102/scripts.pory"
	.string "{PLAYER}, thank you!\n"
# 90 "data/maps/Route102/scripts.pory"
	.string "Let's go back to the GYM!$"
# 91 "data/maps/Route102/scripts.pory"

# 92 "data/maps/Route102/scripts.pory"
Route102_Text_ImNotVeryTall:
# 93 "data/maps/Route102/scripts.pory"
	.string "I'm…not very tall, so I sink right\n"
# 94 "data/maps/Route102/scripts.pory"
	.string "into tall grass.\p"
# 95 "data/maps/Route102/scripts.pory"
	.string "The grass goes up my nose and…\n"
# 96 "data/maps/Route102/scripts.pory"
	.string "Fwafwafwafwafwa…\p"
# 97 "data/maps/Route102/scripts.pory"
	.string "Fwatchoo!$"
# 98 "data/maps/Route102/scripts.pory"

# 99 "data/maps/Route102/scripts.pory"
Route102_Text_CatchWholeBunchOfPokemon:
# 100 "data/maps/Route102/scripts.pory"
	.string "I'm going to catch a whole bunch of\n"
# 101 "data/maps/Route102/scripts.pory"
	.string "POKéMON!$"
# 102 "data/maps/Route102/scripts.pory"

# 103 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignOldale:
# 104 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 105 "data/maps/Route102/scripts.pory"
	.string "{RIGHT_ARROW} OLDALE TOWN$"
# 106 "data/maps/Route102/scripts.pory"

# 107 "data/maps/Route102/scripts.pory"
Route102_Text_RouteSignPetalburg:
# 108 "data/maps/Route102/scripts.pory"
	.string "ROUTE 102\n"
# 109 "data/maps/Route102/scripts.pory"
	.string "{LEFT_ARROW} PETALBURG CITY$"

Route102_EventScript_Youngster::
# 113 "data/maps/Route102/scripts.pory"
	lock
# 114 "data/maps/Route102/scripts.pory"
	faceplayer
# 115 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Youngster_Text_0
# 116 "data/maps/Route102/scripts.pory"
	release
	return


Route102_EventScript_Woman::
# 120 "data/maps/Route102/scripts.pory"
	lock
# 121 "data/maps/Route102/scripts.pory"
	faceplayer
# 122 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Woman_Text_0
# 123 "data/maps/Route102/scripts.pory"
	release
	return


Route102_EventScript_JSOboy1::
# 127 "data/maps/Route102/scripts.pory"
	lock
# 128 "data/maps/Route102/scripts.pory"
	faceplayer
# 129 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_JSOboy1_Text_0
# 130 "data/maps/Route102/scripts.pory"
	release
	return


Route102_EventScript_Questioner::
# 134 "data/maps/Route102/scripts.pory"
	lock
# 135 "data/maps/Route102/scripts.pory"
	faceplayer
# 136 "data/maps/Route102/scripts.pory"
	msgbox Route102_EventScript_Questioner_Text_0
# 137 "data/maps/Route102/scripts.pory"
	release
	return


Route102_Text_UpDownSign::
# 141 "data/maps/Route102/scripts.pory"
	lockall
# 142 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_UpDownSign_Text_0
# 144 "data/maps/Route102/scripts.pory"
	releaseall
	return


Route102_Text_LeftRightSign::
# 148 "data/maps/Route102/scripts.pory"
	lockall
# 149 "data/maps/Route102/scripts.pory"
	msgbox Route102_Text_LeftRightSign_Text_0
# 151 "data/maps/Route102/scripts.pory"
	releaseall
	return


Route102_EventScript_Youngster_Text_0:
# 115 "data/maps/Route102/scripts.pory"
	.string "I've heard Treefall Woods has\n"
	.string "experienced severe deforestation.\p"
	.string "Are the rumors true?$"

Route102_EventScript_Woman_Text_0:
# 122 "data/maps/Route102/scripts.pory"
	.string "Just a year ago, lumberjacks decimated\n"
	.string "Treefall Woods. They left suddenly,\l"
	.string "following the orders of Paul, Treefall\l"
	.string "City's Gym Leader.\p"
	.string "Many Pokémon species that used to live\n"
	.string "in the woods were driven out due to the\l"
	.string "destruction of the forest, and new\l"
	.string "Pokémon have moved in.$"

Route102_EventScript_JSOboy1_Text_0:
# 129 "data/maps/Route102/scripts.pory"
	.string "Anthrotech and Paul are trying to plant\n"
	.string "trees in the forest to bring it back.\p"
	.string "It'll never work!$"

Route102_EventScript_Questioner_Text_0:
# 136 "data/maps/Route102/scripts.pory"
	.string "Who are all of these people in orange,\n"
	.string "and why are they so angry?$"

Route102_Text_UpDownSign_Text_0:
# 142 "data/maps/Route102/scripts.pory"
	.string "Desola Town {UP_ARROW}\n"
	.string "Treefall Woods {DOWN_ARROW}$"

Route102_Text_LeftRightSign_Text_0:
# 149 "data/maps/Route102/scripts.pory"
	.string "Treefall Woods {LEFT_ARROW}\n"
	.string "Treefall City {RIGHT_ARROW}$"
