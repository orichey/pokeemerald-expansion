.set LOCALID_MUNDUNGUS, 1

PetalburgCity_MundungusHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_MundungusHouse_OnTransition
	map_script MAP_SCRIPT_ON_WARP_INTO_MAP_TABLE, PetalburgCity_MundungusHouse_OnWarp
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_MundungusHouse_OnFrame
	.byte 0

PetalburgCity_MundungusHouse_OnTransition:
	call_if_eq VAR_DEVON_CORP_3F_STATE, 0, PetalburgCity_MundungusHouse_EventScript_SetEmployeePos
	end

PetalburgCity_MundungusHouse_EventScript_SetEmployeePos::
	setobjectxyperm LOCALID_MUNDUNGUS, 9, 7
	setobjectmovementtype LOCALID_MUNDUNGUS, MOVEMENT_TYPE_FACE_UP
	return

PetalburgCity_MundungusHouse_OnWarp:
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, PetalburgCity_MundungusHouse_EventScript_PlayerFaceEast
	.2byte 0

PetalburgCity_MundungusHouse_EventScript_PlayerFaceEast::
	turnobject OBJ_EVENT_ID_PLAYER, DIR_NORTH
	end

PetalburgCity_MundungusHouse_OnFrame:
	map_script_2 VAR_DEVON_CORP_3F_STATE, 0, PetalburgCity_MundungusHouse_EventScript_MeetPresident
	.2byte 0

PetalburgCity_MundungusHouse_EventScript_MeetPresident::
	lockall
	playbgm MUS_FOLLOW_ME, FALSE
	applymovement LOCALID_MUNDUNGUS, PetalburgCity_MundungusHouse_Movement_LeadPlayerToPresident
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_MundungusHouse_Movement_PlayerFollowToPresident
	waitmovement 0
    special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, PetalburgCity_MundungusHouse_Movement_CameraPanRight
	fadedefaultbgm
    delay 60
	msgbox PetalburgCity_MundungusHouse_Text_MrStoneIHaveFavor, MSGBOX_DEFAULT
	giveitem ITEM_POKEHM
	msgbox PetalburgCity_MundungusHouse_Text_MrStoneExplainPokenavRestUp, MSGBOX_DEFAULT
	closemessage
	setflag FLAG_HIDE_ROUTE_116_WANDAS_BOYFRIEND
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDAS_BOYFRIEND
	clearflag FLAG_HIDE_RUSTURF_TUNNEL_WANDA
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	setvar VAR_BRINEY_LOCATION, 1
	clearflag FLAG_HIDE_RUSTBORO_CITY_RIVAL
	setvar VAR_DEVON_CORP_3F_STATE, 1
	setvar VAR_RUSTBORO_CITY_STATE, 6
    applymovement OBJ_EVENT_ID_CAMERA, PetalburgCity_MundungusHouse_Movement_CameraPanLeft
    waitmovement 0
    special RemoveCameraObject
	releaseall
	end

PetalburgCity_MundungusHouse_Movement_CameraPanLeft:
    walk_left
    walk_left
    step_end

PetalburgCity_MundungusHouse_Movement_CameraPanRight:
    walk_right
    walk_right
    step_end

PetalburgCity_MundungusHouse_Movement_LeadPlayerToPresident:
	walk_up
	walk_right
	walk_right
    walk_up
    walk_up
	walk_in_place_faster_left
	step_end

PetalburgCity_MundungusHouse_Movement_PlayerFollowToPresident:
	walk_up
    walk_up
    walk_left
    walk_left
    walk_left
    walk_up
    walk_up
    walk_in_place_faster_right
	step_end

PetalburgCity_MundungusHouse_Movement_PlayerApproachDesk:
	delay_16
	delay_16
	walk_down
	walk_down
	walk_in_place_faster_right
	step_end

PetalburgCity_MundungusHouse_EventScript_MrStone::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_EXP_SHARE, PetalburgCity_MundungusHouse_EventScript_MrStoneAfterFavor
	goto_if_set FLAG_DELIVERED_STEVEN_LETTER, PetalburgCity_MundungusHouse_EventScript_GiveExpShare
	msgbox PetalburgCity_MundungusHouse_Text_CountingOnYou, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceLeft
	waitmovement 0
	release
	end

PetalburgCity_MundungusHouse_EventScript_GiveExpShare::
	msgbox PetalburgCity_MundungusHouse_Text_ThankYouForDeliveringLetter, MSGBOX_DEFAULT
	giveitem ITEM_EXP_SHARE
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_EXP_SHARE
	msgbox PetalburgCity_MundungusHouse_Text_ExplainExpShare, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PetalburgCity_MundungusHouse_EventScript_MrStoneAfterFavor::
	msgbox PetalburgCity_MundungusHouse_Text_NotFamiliarWithTrends, MSGBOX_DEFAULT
	closemessage
	applymovement VAR_LAST_TALKED, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PetalburgCity_MundungusHouse_EventScript_Employee::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_REPEAT_BALL, PetalburgCity_MundungusHouse_EventScript_EmployeeBalls
	msgbox PetalburgCity_MundungusHouse_Text_VisitCaptSternShipyard, MSGBOX_DEFAULT
	release
	end

PetalburgCity_MundungusHouse_EventScript_EmployeeBalls::
	msgbox PetalburgCity_MundungusHouse_Text_RepeatAndTimerHugelyPopular, MSGBOX_DEFAULT
	release
	end

PetalburgCity_MundungusHouse_EventScript_RareRocksDisplay::
	msgbox PetalburgCity_MundungusHouse_Text_RareRocksDisplay, MSGBOX_SIGN
	end

PetalburgCity_MundungusHouse_Text_MrStoneIHaveFavor:
	.string "Mundungus: Thank you again, {PLAYER}.\n"
	.string "Those hooligans in orange have been\l"
	.string "getting in the way of Anthrotech all\l"
	.string "throughout Ecodia.\p"
	.string "Don't they understand we just want to\n"
	.string "make the world a better place?\p"
	.string "In any case, I appreciate you helping\n"
	.string "me out. Anthrotech has offices in\l"
	.string "several cities, and this office has\l"
	.string "been focused on some new tech that\l"
	.string "could really change how we interact\l"
	.string "with our Pokémon.\p"
	.string "I'd like you to have a prototype!$"

PetalburgCity_MundungusHouse_Text_ReceivedPokenav:
	.string "{PLAYER} received a PokéHM!$"

PetalburgCity_MundungusHouse_Text_MrStoneExplainPokenavRestUp:
	.string "Mundungus: That device, the PokéHM,\n"
	.string "allows any Pokémon to use any HM in\l"
	.string "the field, regardless of if they know\l"
	.string "the move!\p"
	.string "Imagine the possibilities, a Golem using\n"
	.string "Fly, or a Torkoal using Surf!\p"
	.string "Of course, you still need to have\n"
	.string "the HM in your bag for this to work.\p"
	.string "If you continue to help Anthrotech,\n"
	.string "I will see to it that you get to test\l"
	.string "more of our products.\p"
	.string "There are many more vile protestors\n"
	.string "in Ecodia, and I trust you to protect\l"
	.string "progress and innovation!$"

PetalburgCity_MundungusHouse_Text_MrStoneGoWithCautionAndCare:
	.string "MR. STONE: Well, then, {PLAYER}{KUN},\n"
	.string "go with caution and care!$"

PetalburgCity_MundungusHouse_Text_CountingOnYou:
	.string "Mundungus: Thank you again, {PLAYER}!$"

PetalburgCity_MundungusHouse_Text_ThankYouForDeliveringLetter:
	.string "MR. STONE: You delivered my LETTER?\n"
	.string "Thank you kindly!\p"
	.string "This is my way of thanking you.\n"
	.string "It should help you, a TRAINER.$"

PetalburgCity_MundungusHouse_Text_ExplainExpShare:
	.string "MR. STONE: A POKéMON holding that\n"
	.string "EXP. SHARE will be given some of the\l"
	.string "EXP Points from battle.\p"
	.string "It will get EXP Points even if it didn't\n"
	.string "actually battle.\p"
	.string "I would say EXP. SHARE is quite useful\n"
	.string "for raising weak POKéMON.$"

PetalburgCity_MundungusHouse_Text_NotFamiliarWithTrends:
	.string "MR. STONE: Since my youth, I've immersed\n"
	.string "myself in work.\p"
	.string "Consequently, I'm not familiar with\n"
	.string "trends and that sort of thing.\p"
	.string "But do young people all want to be\n"
	.string "TRAINERS in the POKéMON LEAGUE?$"

PetalburgCity_MundungusHouse_Text_ThisIs3rdFloorWaitHere:
	.string "This is the DEVON CORPORATION's\n"
	.string "third floor.\p"
	.string "Our PRESIDENT's OFFICE is on\n"
	.string "this floor.\p"
	.string "Anyway, I can't tell you how much I'm\n"
	.string "grateful for what you've done.\p"
	.string "Um… By the way, that parcel\n"
	.string "you got back for us…\p"
	.string "Could I get you to deliver that to\n"
	.string "the SHIPYARD in SLATEPORT?\p"
	.string "It would be awful if those robbers\n"
	.string "tried to take it again.\p"
	.string "Uh… Hehehe, so, uh, could I count\n"
	.string "on you to do that for me?\p"
	.string "Oh, that's right.\n"
	.string "Could you wait here a second?$"

PetalburgCity_MundungusHouse_Text_WordWithPresidentComeWithMe:
	.string "Our PRESIDENT would like to have\n"
	.string "a word with you.\p"
	.string "Please come with me.$"

PetalburgCity_MundungusHouse_Text_PleaseGoAhead:
	.string "Please, go ahead.$"

PetalburgCity_MundungusHouse_Text_VisitCaptSternShipyard:
	.string "If you visit the SHIPYARD in SLATEPORT,\n"
	.string "you should go see CAPT. STERN.$"

PetalburgCity_MundungusHouse_Text_RepeatAndTimerHugelyPopular:
	.string "DEVON's new products, the REPEAT BALL\n"
	.string "and TIMER BALL, have become hugely\l"
	.string "popular among TRAINERS.$"

PetalburgCity_MundungusHouse_Text_RareRocksDisplay:
	.string "It's a collection of rare rocks and\n"
	.string "stones assembled by the PRESIDENT.$"
