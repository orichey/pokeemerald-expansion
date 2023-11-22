.set LOCALID_MART_EMPLOYEE, 2
.set LOCALID_FOOTPRINTS_MAN, 3
.set LOCALID_RIVAL, 4

OldaleTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, OldaleTown_OnTransition
	.byte 0

OldaleTown_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	setflag FLAG_VISITED_OLDALE_TOWN
	call_if_unset FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_BlockWestEntrance
	call_if_unset FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_MoveMartEmployee
	call_if_set FLAG_UNUSED_0x028, OldaleTown_EventScript_SetOldaleState
	end

@ This script seems pointless because nothing uses VAR_OLDALE_TOWN_STATE
OldaleTown_EventScript_SetOldaleState::
	setvar VAR_OLDALE_TOWN_STATE, 1
	return

OldaleTown_EventScript_BlockWestEntrance::
	return

OldaleTown_EventScript_MoveMartEmployee::
	return

OldaleTown_EventScript_TownSign::
	msgbox OldaleTown_Text_TownSign, MSGBOX_SIGN
	end

OldaleTown_EventScript_Girl::
	msgbox OldaleTown_Text_SavingMyProgress, MSGBOX_NPC
	end

OldaleTown_EventScript_MartEmployee::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_POTION_OLDALE, OldaleTown_EventScript_ExplainPotion
	goto_if_set FLAG_TEMP_1, OldaleTown_EventScript_ExplainPotion
	setflag FLAG_TEMP_1
	playbgm MUS_FOLLOW_ME, FALSE
	msgbox OldaleTown_Text_IWorkAtPokemonMart, MSGBOX_DEFAULT
	closemessage
	switch VAR_FACING
	case DIR_SOUTH, OldaleTown_EventScript_GoToMartSouth
	case DIR_NORTH, OldaleTown_EventScript_GoToMartNorth
	case DIR_EAST, OldaleTown_EventScript_GoToMartEast
	end

OldaleTown_EventScript_GoToMartSouth::
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeSouth
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerSouth
	waitmovement 0
	goto OldaleTown_EventScript_ExplainPokemonMart
	end

OldaleTown_EventScript_GoToMartNorth::
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeNorth
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerNorth
	waitmovement 0
	goto OldaleTown_EventScript_ExplainPokemonMart
	end

OldaleTown_EventScript_GoToMartEast::
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerEast
	applymovement LOCALID_MART_EMPLOYEE, OldaleTown_Movement_EmployeeEast
	waitmovement 0
	goto OldaleTown_EventScript_ExplainPokemonMart
	end

OldaleTown_EventScript_ExplainPokemonMart::
	msgbox OldaleTown_Text_ThisIsAPokemonMart, MSGBOX_DEFAULT
	giveitem ITEM_POTION
	goto_if_eq VAR_RESULT, FALSE, OldaleTown_EventScript_BagIsFull
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
	setflag FLAG_RECEIVED_POTION_OLDALE
	fadedefaultbgm
	release
	end

OldaleTown_EventScript_ExplainPotion::
	msgbox OldaleTown_Text_PotionExplanation, MSGBOX_DEFAULT
	release
	end

OldaleTown_EventScript_BagIsFull::
	msgbox gText_TooBadBagIsFull, MSGBOX_DEFAULT
	fadedefaultbgm
	release
	end

OldaleTown_Movement_EmployeeEast:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_EmployeeSouth:
	walk_left
	walk_up
	walk_up
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_EmployeeNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_Unknown1:
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	delay_8
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_PlayerEast:
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_Movement_PlayerSouth:
	delay_16
	delay_16
	delay_16
	delay_16
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_Movement_PlayerNorth:
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_Movement_Unknown2:
	walk_left
	walk_up
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

OldaleTown_EventScript_FootprintsMan::
	lock
	faceplayer
	goto_if_set FLAG_ADVENTURE_STARTED, OldaleTown_EventScript_NotBlockingPath
	msgbox OldaleTown_Text_DiscoveredFootprints, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FOOTPRINTS_MAN, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

OldaleTown_EventScript_BlockedPath::
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_PlayerStepBack
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_BackUp
	waitmovement 0
	msgbox OldaleTown_Text_WaitDontComeInHere, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_FOOTPRINTS_MAN, OldaleTown_Movement_ReturnToOriginalPosition
	waitmovement 0
	releaseall
	end

OldaleTown_EventScript_NotBlockingPath::
	msgbox OldaleTown_Text_FinishedSketchingFootprints, MSGBOX_DEFAULT
	release
	end

OldaleTown_EventScript_Rival::
	lockall
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	setvar VAR_0x8009, 0
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_RivalTrigger1::
	lockall
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer1
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_RivalTrigger2::
	lockall
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_RivalTrigger3::
	lockall
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalApproachPlayer3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_0x8009, 1
	goto OldaleTown_EventScript_ShowRivalMessage
	end

OldaleTown_EventScript_ShowRivalMessage::
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, OldaleTown_EventScript_ShowMayMessage
	goto_if_eq VAR_RESULT, FEMALE, OldaleTown_EventScript_ShowBrendanMessage
	end

OldaleTown_EventScript_ShowMayMessage::
	msgbox OldaleTown_Text_MayLetsGoBack, MSGBOX_DEFAULT
	goto OldaleTown_EventScript_RivalFinish
	end

OldaleTown_EventScript_ShowBrendanMessage::
	msgbox OldaleTown_Text_BrendanLetsGoBack, MSGBOX_DEFAULT
	goto OldaleTown_EventScript_RivalFinish
	end

OldaleTown_EventScript_RivalFinish::
	closemessage
	call_if_eq VAR_0x8009, 0, OldaleTown_EventScript_DoExitMovement1
	call_if_eq VAR_0x8009, 1, OldaleTown_EventScript_DoExitMovement2
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
	waitmovement 0
	removeobject LOCALID_RIVAL
	setvar VAR_OLDALE_RIVAL_STATE, 2
	setflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	releaseall
	end

OldaleTown_EventScript_DoExitMovement1::
	goto_if_ne VAR_FACING, DIR_SOUTH, OldaleTown_EventScript_DoExitMovement2
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
	waitmovement 0
	return

OldaleTown_EventScript_DoExitMovement2::
	applymovement OBJ_EVENT_ID_PLAYER, OldaleTown_Movement_WatchRivalExit
	applymovement LOCALID_RIVAL, OldaleTown_Movement_RivalExit
	waitmovement 0
	return

OldaleTown_Movement_RivalApproachPlayer1:
	walk_left
	walk_left
	step_end

OldaleTown_Movement_RivalApproachPlayer2:
	walk_left
	step_end

OldaleTown_Movement_RivalApproachPlayer3:
	face_left
	step_end

OldaleTown_Movement_RivalExit:
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

OldaleTown_Movement_WatchRivalExit:
	delay_8
	delay_4
	walk_in_place_faster_down
	step_end

OldaleTown_Movement_PlayerStepBack:
	delay_8
	walk_right
	step_end

OldaleTown_Movement_BackUp:
	walk_fast_up
	walk_in_place_faster_left
	lock_facing_direction
	walk_right
	unlock_facing_direction
	step_end

OldaleTown_Movement_ReturnToOriginalPosition:
	walk_down
	walk_left
	step_end

OldaleTown_Text_SavingMyProgress:
	.string "I want to take a rest, so I'm saving my\n"
	.string "progress.$"

OldaleTown_Text_IWorkAtPokemonMart:
	.string "Hi!\n"
	.string "I work at a POKéMON MART.\p"
	.string "Can I get you to come with me?$"

OldaleTown_Text_ThisIsAPokemonMart:
	.string "This is a POKéMON MART.\n"
	.string "Just look for our blue roof.\p"
	.string "We sell a variety of goods including\n"
	.string "POKé BALLS for catching POKéMON.\p"
	.string "Here, I'd like you to have this as\n"
	.string "a promotional item.$"

OldaleTown_Text_PotionExplanation:
	.string "A POTION can be used anytime, so it's\n"
	.string "even more useful than a POKéMON CENTER\l"
	.string "in certain situations.$"

OldaleTown_Text_WaitDontComeInHere:
	.string "Aaaaah! Wait!\n"
	.string "Please don't come in here.\p"
	.string "I just discovered the footprints of\n"
	.string "a rare POKéMON!\p"
	.string "Wait until I finish sketching\n"
	.string "them, okay?$"

OldaleTown_Text_DiscoveredFootprints:
	.string "I just discovered the footprints of\n"
	.string "a rare POKéMON!\p"
	.string "Wait until I finish sketching\n"
	.string "them, okay?$"

OldaleTown_Text_FinishedSketchingFootprints:
	.string "I finished sketching the footprints of\n"
	.string "a rare POKéMON.\p"
	.string "But it turns out they were only my\n"
	.string "own footprints…$"

OldaleTown_Text_MayLetsGoBack:
	.string "MAY: {PLAYER}{KUN}!\n"
	.string "Over here!\l"
	.string "Let's hurry home!$"

OldaleTown_Text_BrendanLetsGoBack:
	.string "BRENDAN: I'm heading back to my dad's\n"
	.string "LAB now.\l"
	.string "{PLAYER}, you should hustle back, too.$"

OldaleTown_Text_TownSign:
	.string "OLDALE TOWN\n"
	.string "“Where things start off scarce.”$"

OldaleTown_EventScript_NewSign::
	lockall
	msgbox OldaleTown_EventScript_NewSign_Text_0
	releaseall
	return


OldaleTown_EventScript_LibrarySign::
	lockall
	msgbox OldaleTown_EventScript_LibrarySign_Text_0
	releaseall
	return


OldaleTown_EventScript_JoeySign::
	lockall
	msgbox OldaleTown_EventScript_JoeySign_Text_0
	releaseall
	return


OldaleTown_EventScript_OldWoman::
	lock
	faceplayer
	msgbox OldaleTown_EventScript_OldWoman_Text_0
	release
	return


OldaleTown_EventScript_LittleBoy::
	lock
	faceplayer
	msgbox OldaleTown_EventScript_LittleBoy_Text_0
	release
	return


OldaleTown_EventScript_ScholarBoy::
	lock
	faceplayer
	msgbox OldaleTown_EventScript_ScholarBoy_Text_0
	release
	return


OldaleTown_EventScript_Hiker::
	lock
	faceplayer
	msgbox OldaleTown_EventScript_Hiker_Text_0
	release
	return


OldaleTown_EventScript_CantPass::
	goto_if_unset FLAG_UNUSED_0x027, OldaleTown_EventScript_CantPass_2
OldaleTown_EventScript_CantPass_1:
	release
	return

OldaleTown_EventScript_CantPass_2:
	lockall
	applymovement 1, HikerDown
	waitmovement 0
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, PlayerUp
	waitmovement 0
	msgbox OldaleTown_EventScript_CantPass_Text_0
	applymovement OBJ_EVENT_ID_PLAYER, GoBack
	waitmovement 0
	goto OldaleTown_EventScript_CantPass_1


OldaleTown_EventScript_EnterTop::
	goto_if_unset FLAG_UNUSED_0x028, OldaleTown_EventScript_EnterTop_2
OldaleTown_EventScript_EnterTop_1:
	release
	return

OldaleTown_EventScript_EnterTop_2:
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, EnterTop
	waitmovement 0
	applymovement 5, AnthrotechWalkLeft
	waitmovement 0
	msgbox OldaleTown_EventScript_EnterTop_Text_0
	applymovement 5, PlayerUp
	delay 60
	applymovement 5, HikerDown
	msgbox OldaleTown_EventScript_EnterTop_Text_1
	applymovement 5, LookLeft
	waitmovement 0
	delay 35
	applymovement 5, Common_Movement_ExclamationMark
	applymovement 5, AnthroLookRight
	waitmovement 0
	msgbox OldaleTown_EventScript_EnterTop_Text_2
	applymovement 5, WalkToPlayer
	waitmovement 0
	msgbox OldaleTown_EventScript_EnterTop_Text_3
	applymovement 5, HikerDown
	waitmovement 0
	msgbox OldaleTown_EventScript_EnterTop_Text_4
	applymovement 5, AnthroLookRight
	msgbox OldaleTown_EventScript_EnterTop_Text_5
	applymovement 5, AnthroLeaves
	waitmovement 0
	removeobject 5
	setflag FLAG_UNUSED_0x028
	goto OldaleTown_EventScript_EnterTop_1


OldaleTown_EventScript_EnterMid::
	goto_if_unset FLAG_UNUSED_0x028, OldaleTown_EventScript_EnterMid_2
OldaleTown_EventScript_EnterMid_1:
	release
	return

OldaleTown_EventScript_EnterMid_2:
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, EnterMid
	waitmovement 0
	applymovement 5, AnthrotechWalkLeft
	waitmovement 0
	msgbox OldaleTown_EventScript_EnterTop_Text_0
	applymovement 5, PlayerUp
	delay 60
	applymovement 5, HikerDown
	msgbox OldaleTown_EventScript_EnterTop_Text_1
	applymovement 5, LookLeft
	waitmovement 0
	delay 35
	applymovement 5, Common_Movement_ExclamationMark
	applymovement 5, AnthroLookRight
	waitmovement 0
	msgbox OldaleTown_EventScript_EnterTop_Text_2
	applymovement 5, WalkToPlayer
	waitmovement 0
	msgbox OldaleTown_EventScript_EnterTop_Text_3
	applymovement 5, HikerDown
	waitmovement 0
	msgbox OldaleTown_EventScript_EnterTop_Text_4
	applymovement 5, AnthroLookRight
	msgbox OldaleTown_EventScript_EnterTop_Text_5
	applymovement 5, AnthroLeaves
	waitmovement 0
	removeobject 5
	setflag FLAG_UNUSED_0x028
	goto OldaleTown_EventScript_EnterMid_1


OldaleTown_EventScript_EnterBottom::
	goto_if_unset FLAG_UNUSED_0x028, OldaleTown_EventScript_EnterBottom_2
OldaleTown_EventScript_EnterBottom_1:
	release
	return

OldaleTown_EventScript_EnterBottom_2:
	lockall
	applymovement OBJ_EVENT_ID_PLAYER, EnterBottom
	waitmovement 0
	applymovement 5, AnthrotechWalkLeft
	waitmovement 0
	msgbox OldaleTown_EventScript_EnterTop_Text_0
	applymovement 5, PlayerUp
	delay 60
	applymovement 5, HikerDown
	msgbox OldaleTown_EventScript_EnterTop_Text_1
	applymovement 5, LookLeft
	waitmovement 0
	delay 35
	applymovement 5, Common_Movement_ExclamationMark
	applymovement 5, AnthroLookRight
	waitmovement 0
	msgbox OldaleTown_EventScript_EnterTop_Text_2
	applymovement 5, WalkToPlayer
	waitmovement 0
	msgbox OldaleTown_EventScript_EnterTop_Text_3
	applymovement 5, HikerDown
	waitmovement 0
	msgbox OldaleTown_EventScript_EnterTop_Text_4
	applymovement 5, AnthroLookRight
	msgbox OldaleTown_EventScript_EnterTop_Text_5
	applymovement 5, AnthroLeaves
	waitmovement 0
	removeobject 5
	setflag FLAG_UNUSED_0x028
	goto OldaleTown_EventScript_EnterBottom_1


HikerDown:
	face_down
	step_end

GoBack:
	walk_right
	step_end

PlayerUp:
	face_up
	step_end

EnterTop:
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

EnterMid:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

EnterBottom:
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

AnthrotechWalkLeft:
	walk_left
	step_end

LookLeft:
	face_left
	step_end

AnthroLookRight:
	face_right
	step_end

WalkToPlayer:
	walk_right
	walk_right
	walk_right
	step_end

AnthroLeaves:
	walk_left
	walk_left
	walk_left
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

OldaleTown_EventScript_NewSign_Text_0:
	.string "DESOLA TOWN\n"
	.string "“A sign of what's to come.”$"

OldaleTown_EventScript_LibrarySign_Text_0:
	.string "DESOLA TOWN Library: Where the past,\n"
	.string "present, and future of ECODIA is\l"
	.string "studied.$"

OldaleTown_EventScript_JoeySign_Text_0:
	.string "Joey's Sanctuary.\n"
	.string "Have you found a Rattata?$"

OldaleTown_EventScript_OldWoman_Text_0:
	.string "I used to live here, now my house is\n"
	.string "nothing but a pile of rubble.$"

OldaleTown_EventScript_LittleBoy_Text_0:
	.string "Mommy says DESOLA TOWN is one of the\n"
	.string "last safe places in ECODIA.\p"
	.string "Even TREEFALL FOREST is scary!$"

OldaleTown_EventScript_ScholarBoy_Text_0:
	.string "This house has been abandoned for a\n"
	.string "long time, much like the POKéMON MART.\p"
	.string "It's hard to imagine DESOLA TOWN will\n"
	.string "recover, but I have hope in\l"
	.string "Anthrotech!$"

OldaleTown_EventScript_Hiker_Text_0:
	.string "I don't know what is going on at the\n"
	.string "pass, but I got turned away.$"

OldaleTown_EventScript_CantPass_Text_0:
	.string "Watch out! The mountain pass is closed\n"
	.string "to travelers.\p"
	.string "Come back after the work crews disperse.$"

OldaleTown_EventScript_EnterTop_Text_0:
	.string "???: Hmmm...$"

OldaleTown_EventScript_EnterTop_Text_1:
	.string "???: I see...$"

OldaleTown_EventScript_EnterTop_Text_2:
	.string "???: Oh! Hello there!$"

OldaleTown_EventScript_EnterTop_Text_3:
	.string "???: Are you a resident of DESOLA TOWN?\p"
	.string "???: You're not? That's too bad. I was\n"
	.string "hoping to talk to a local and get their\l"
	.string "opinion on the state of the town.\p"
	.string "???: How rude, I didn't introduce\n"
	.string "myself! I am Mundungus, the founder\l"
	.string "and president of Anthrotech!\p"
	.string "MUNDUNGUS: I'm going around ECODIA,\n"
	.string "learning about the problems our cities\l"
	.string "face and how I can help solve them!$"

OldaleTown_EventScript_EnterTop_Text_4:
	.string "MUNDUNGUS: For example, DESOLA TOWN\n"
	.string "seems a little empty, but I'm certain\l"
	.string "Anthrotech can work to bring some\l"
	.string "economic revitalization! Perhaps\l"
	.string "reopening the POKéMON MART or\l"
	.string "constructing a resort for travelers?$"

OldaleTown_EventScript_EnterTop_Text_5:
	.string "MUNDUNGUS: In any case, what is your\n"
	.string "name?\p"
	.string "{PLAYER}? From ANTHROH TOWN? Why,\n"
	.string "you and I have the same roots!\p"
	.string "MUNDUNGUS: I would love to hear about\n"
	.string "your ideas on how to make ECODIA a\l"
	.string "more resilient and sustainable region,\l"
	.string "how about you come talk to me later, in\l"
	.string "TREEFALL TOWN?\p"
	.string "MUNDUNGUS: I'll see you soon,\n"
	.string "{PLAYER}!$"
