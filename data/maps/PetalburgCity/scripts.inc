.set LOCALID_WALLY, 2
.set LOCALID_JSOGIRL, 3
.set LOCALID_JSOBOY, 4
.set LOCALID_Mundungus, 5
.set LOCALID_GYM_BOY, 8
.set LOCALID_SCOTT, 9

PetalburgCity_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_OnTransition
	map_script MAP_SCRIPT_ON_FRAME_TABLE, PetalburgCity_OnFrame
	.byte 0

PetalburgCity_OnTransition:
	setflag FLAG_VISITED_PETALBURG_CITY
	call_if_eq VAR_PETALBURG_CITY_STATE, 0, PetalburgCity_EventScript_MoveGymBoyToWestEntrance
	call_if_eq VAR_PETALBURG_CITY_STATE, 1, PetalburgCity_EventScript_SetAnthroLocation
	call_if_eq VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_DisableMapNameAndMusic
	call_if_eq VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_DisableMapNameAndMusic
	call_if_eq VAR_PETALBURG_GYM_STATE, 8, PetalburgCity_EventScript_SetGymDoorsUnlocked
	end

PetalburgCity_EventScript_SetAnthroLocation::
	setobjectxyperm LOCALID_Mundungus, 25, 8
	setobjectmovementtype LOCALID_Mundungus, MOVEMENT_TYPE_FACE_UP
	return

PetalburgCity_EventScript_MoveGymBoyToWestEntrance::
	return

PetalburgCity_EventScript_DisableMapNameAndMusic::
	setflag FLAG_HIDE_MAP_NAME_POPUP
	savebgm MUS_FOLLOW_ME
	return

PetalburgCity_EventScript_SetGymDoorsUnlocked::
	setvar VAR_PETALBURG_GYM_STATE, 7
	return

PetalburgCity_OnFrame:
	map_script_2 VAR_PETALBURG_CITY_STATE, 1, PetalburgCity_EventScript_JSOFight
	map_script_2 VAR_PETALBURG_CITY_STATE, 2, PetalburgCity_EventScript_WallyTutorial
	map_script_2 VAR_PETALBURG_CITY_STATE, 4, PetalburgCity_EventScript_WalkToWallyHouse
	.2byte 0

PetalburgCity_EventScript_WallyTutorial::
	lockall
	special SavePlayerParty
	special LoadWallyZigzagoon
	applymovement LOCALID_WALLY, PetalburgCity_Movement_WallyTutorialWally
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WallyTutorialPlayer
	waitmovement 0
	msgbox Route102_Text_WatchMeCatchPokemon, MSGBOX_DEFAULT
	special StartWallyTutorialBattle
	waitstate
	msgbox Route102_Text_WallyIDidIt, MSGBOX_DEFAULT
	applymovement LOCALID_WALLY, Common_Movement_WalkInPlaceFasterLeft, MAP_PETALBURG_CITY
	waitmovement LOCALID_WALLY, MAP_PETALBURG_CITY
	msgbox Route102_Text_LetsGoBack, MSGBOX_DEFAULT
	closemessage
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	setvar VAR_PETALBURG_CITY_STATE, 0
	fadedefaultbgm
	clearflag FLAG_DONT_TRANSITION_MUSIC
	special LoadPlayerParty
	setvar VAR_PETALBURG_GYM_STATE, 1
	warp MAP_PETALBURG_CITY_GYM, 4, 108
	waitstate
	releaseall
	end

PetalburgCity_EventScript_WalkToWallyHouse::
	lockall
	setflag FLAG_HIDE_MAP_NAME_POPUP
	applymovement LOCALID_Mundungus, PetalburgCity_Movement_WalkToWallyHouseWallysDad
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkToWallyHousePlayer
	waitmovement 0
	setvar VAR_0x8004, 7
	setvar VAR_0x8005, 5
	opendoor VAR_0x8004, VAR_0x8005
	waitdooranim
	applymovement LOCALID_Mundungus, PetalburgCity_Movement_WalkInsideHouseWallysDad
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_WalkInsideHousePlayer
	waitmovement 0
	setflag FLAG_HIDE_PETALBURG_CITY_WALLYS_DAD
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_PETALBURG_CITY
	closedoor VAR_0x8004, VAR_0x8005
	waitdooranim
	clearflag FLAG_HIDE_MAP_NAME_POPUP
	fadedefaultbgm
	clearflag FLAG_DONT_TRANSITION_MUSIC
	warp MAP_PETALBURG_CITY_WALLYS_HOUSE, 2, 4
	waitstate
	releaseall
	end

PetalburgCity_EventScript_Boy::
	lock
	faceplayer
	msgbox PetalburgCity_Text_WaterReflection, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_JSOGIRL, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end

PetalburgCity_EventScript_WallysMom::
	msgbox PetalburgCity_Text_WhereIsWally, MSGBOX_NPC
	end

PetalburgCity_Movement_WalkToWallyHousePlayer:
	delay_8
	walk_down
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_WalkInsideHousePlayer:
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_WalkToWallyHouseWallysDad:
	delay_8
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_WalkInsideHouseWallysDad:
	walk_up
	set_invisible
	step_end

PetalburgCity_Movement_WallyTutorialPlayer:
	delay_8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_in_place_faster_right
	step_end

PetalburgCity_Movement_WallyTutorialWally:
	delay_8
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	delay_16
	walk_in_place_faster_up
	delay_16
	delay_16
	walk_in_place_faster_right
	step_end

PetalburgCity_EventScript_GymSign::
	msgbox PetalburgCity_Text_GymSign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_CitySign::
	msgbox PetalburgCity_Text_CitySign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_WallyHouseSign::
	msgbox PetalburgCity_Text_WallyHouseSign, MSGBOX_SIGN
	end

PetalburgCity_EventScript_ShowGymToPlayer0::
	lockall
	setvar VAR_0x8008, 0
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer1::
	lockall
	setvar VAR_0x8008, 1
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer2::
	lockall
	setvar VAR_0x8008, 2
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer3::
	lockall
	setvar VAR_0x8008, 3
	goto PetalburgCity_EventScript_ShowGymToPlayer
	end

PetalburgCity_EventScript_ShowGymToPlayer::
	applymovement LOCALID_GYM_BOY, Common_Movement_FacePlayer
	waitmovement 0
	playbgm MUS_FOLLOW_ME, FALSE
	playse SE_PIN
	applymovement LOCALID_GYM_BOY, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_GYM_BOY, Common_Movement_Delay48
	waitmovement 0
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_BoyApproachPlayer0
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_BoyApproachPlayer1
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_BoyApproachPlayer2
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_BoyApproachPlayer3
	msgbox PetalburgCity_Text_AreYouRookieTrainer, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_LeadPlayerToGym0
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_LeadPlayerToGym1
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_LeadPlayerToGym2
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_LeadPlayerToGym3
	msgbox PetalburgCity_Text_ThisIsPetalburgGym, MSGBOX_DEFAULT
	applymovement LOCALID_GYM_BOY, Common_Movement_WalkInPlaceFasterRight
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	msgbox PetalburgCity_Text_ThisIsGymSign, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkAway
	waitmovement 0
	fadedefaultbgm
	releaseall
	end

PetalburgCity_EventScript_BoyApproachPlayer0::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer0
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	return

PetalburgCity_EventScript_BoyApproachPlayer1::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer1
	waitmovement 0
	return

PetalburgCity_EventScript_BoyApproachPlayer2::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer2
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

PetalburgCity_EventScript_BoyApproachPlayer3::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyApproachPlayer3
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym0::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym0
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym0
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym1::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym1
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym1
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym2::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym2
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym2
	waitmovement 0
	return

PetalburgCity_EventScript_LeadPlayerToGym3::
	applymovement LOCALID_GYM_BOY, PetalburgCity_Movement_BoyWalkToGym3
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWalkToGym3
	waitmovement 0
	return

@ Unused
PetalburgCity_Movement_Delay48::
	delay_16
	delay_16
	delay_16
	step_end

PetalburgCity_Movement_BoyApproachPlayer0:
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyApproachPlayer1:
	walk_right
	walk_right
	step_end

PetalburgCity_Movement_BoyApproachPlayer2:
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_down
	step_end

PetalburgCity_Movement_BoyApproachPlayer3:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_in_place_faster_down
	step_end

PetalburgCity_Movement_BoyWalkToGym0:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyWalkToGym1:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyWalkToGym2:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyWalkToGym3:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	walk_right
	walk_in_place_faster_up
	step_end

PetalburgCity_Movement_BoyWalkAway:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWalkToGym0:
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym1:
	delay_16
	delay_16
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym2:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	step_end

PetalburgCity_Movement_PlayerWalkToGym3:
	walk_up
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_up
	walk_up
	step_end

PetalburgCity_EventScript_Scott0::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 0
	setobjectxy LOCALID_SCOTT, 13, 10
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott1::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 1
	setobjectxy LOCALID_SCOTT, 13, 11
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott2::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 2
	setobjectxy LOCALID_SCOTT, 13, 12
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott3::
	lockall
	addobject LOCALID_SCOTT
	setvar VAR_0x8008, 3
	setobjectxy LOCALID_SCOTT, 13, 13
	goto PetalburgCity_EventScript_Scott
	end

PetalburgCity_EventScript_Scott::
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottStartWalkLeft
	waitmovement 0
	playse SE_PIN
	applymovement LOCALID_SCOTT, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_SCOTT, Common_Movement_Delay48
	waitmovement 0
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottApproachPlayer
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	setvar VAR_SCOTT_STATE, 1
	msgbox PetalburgCity_Text_AreYouATrainer, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterRight
	waitmovement 0
	delay 30
	msgbox PetalburgCity_Text_WellMaybeNot, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_SCOTT, Common_Movement_WalkInPlaceFasterLeft
	waitmovement 0
	delay 30
	msgbox PetalburgCity_Text_ImLookingForTalentedTrainers, MSGBOX_DEFAULT
	closemessage
	call_if_eq VAR_0x8008, 0, PetalburgCity_EventScript_ScottExit0
	call_if_eq VAR_0x8008, 1, PetalburgCity_EventScript_ScottExit1
	call_if_eq VAR_0x8008, 2, PetalburgCity_EventScript_ScottExit2
	call_if_eq VAR_0x8008, 3, PetalburgCity_EventScript_ScottExit3
	setvar VAR_SCOTT_PETALBURG_ENCOUNTER, 1
	removeobject LOCALID_SCOTT
	releaseall
	end

PetalburgCity_EventScript_ScottExit0::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit0
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit0
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit1::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit1
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit1
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit2::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit2
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit2
	waitmovement 0
	return

PetalburgCity_EventScript_ScottExit3::
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgCity_Movement_PlayerWatchScottExit3
	applymovement LOCALID_SCOTT, PetalburgCity_Movement_ScottExit3
	waitmovement 0
	return

PetalburgCity_Movement_ScottStartWalkLeft:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_ScottApproachPlayer:
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_ScottExit0:
	walk_down
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit0:
	delay_16
	walk_in_place_faster_down
	delay_16
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_Movement_ScottExit1:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit1:
	delay_16
	walk_in_place_faster_down
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_Movement_ScottExit2:
	walk_down
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit2:
	delay_16
	walk_in_place_faster_down
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_Movement_ScottExit3:
	walk_up
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	walk_left
	step_end

PetalburgCity_Movement_PlayerWatchScottExit3:
	delay_16
	walk_in_place_faster_up
	delay_16
	delay_8
	walk_in_place_faster_left
	step_end

PetalburgCity_Text_WhereIsWally:
	.string "Where has our WALLY gone?\p"
	.string "We have to leave for VERDANTURF TOWN\n"
	.string "very soon…$"

PetalburgCity_Text_AreYouRookieTrainer:
	.string "They first check what kind of GYM\n"
	.string "is in the town.$"

PetalburgCity_Text_ThisIsPetalburgGym:
	.string "See? This is PETALBURG CITY's GYM.$"

PetalburgCity_Text_ThisIsGymSign:
	.string "This is the GYM's sign. Look for it\n"
	.string "whenever you're looking for a GYM.$"

PetalburgCity_Text_WaterReflection:
	.string "My face is reflected in the water.\p"
	.string "It's a shining grin full of hope…\p"
	.string "Or it could be a look of somber silence\n"
	.string "struggling with fear…\p"
	.string "What do you see reflected in your face?$"

PetalburgCity_Text_GymSign:
	.string "PETALBURG CITY POKéMON GYM\n"
	.string "LEADER: NORMAN\l"
	.string "“A man in pursuit of power!”$"

PetalburgCity_Text_CitySign:
	.string "PETALBURG CITY\n"
	.string "“Where people mingle with nature.”$"

PetalburgCity_Text_WallyHouseSign:
	.string "WALLY'S HOUSE$"

PetalburgCity_Text_AreYouATrainer:
	.string "Excuse me!\p"
	.string "Let me guess, from the way you're\n"
	.string "dressed, are you a POKéMON TRAINER?$"

PetalburgCity_Text_WellMaybeNot:
	.string "… … … … … …\p"
	.string "Well, maybe not.\n"
	.string "Your clothes aren't all that dirty.\p"
	.string "You're either a rookie TRAINER,\n"
	.string "or maybe you're just an ordinary kid.$"

PetalburgCity_Text_ImLookingForTalentedTrainers:
	.string "I'm roaming the land in search of\n"
	.string "talented TRAINERS.\p"
	.string "I'm sorry to have taken your time.$"

PetalburgCity_EventScript_GrassSign::
	lockall
	msgbox PetalburgCity_EventScript_GrassSign_Text_0
	releaseall
	return


PetalburgCity_EventScript_JSOBoy::
	goto_if_unset FLAG_BADGE01_GET, PetalburgCity_EventScript_JSOBoy_1
	return

PetalburgCity_EventScript_JSOBoy_1:
	lock
	faceplayer
	msgbox PetalburgCity_EventScript_JSOBoy_Text_0
	release
	return


PetalburgCity_EventScript_JSOGirl::
	goto_if_unset FLAG_BADGE01_GET, PetalburgCity_EventScript_JSOGirl_1
	return

PetalburgCity_EventScript_JSOGirl_1:
	lock
	faceplayer
	msgbox PetalburgCity_EventScript_JSOGirl_Text_0
	release
	return


PetalburgCity_EventScript_Gentleman::
	lock
	faceplayer
	msgbox PetalburgCity_EventScript_Gentleman_Text_0
	release
	return


PetalburgCity_EventScript_GymBoy::
	lock
	faceplayer
	msgbox PetalburgCity_EventScript_GymBoy_Text_0
	release
	return


PetalburgCity_EventScript_Woman::
	lock
	faceplayer
	msgbox PetalburgCity_EventScript_Woman_Text_0
	release
	return


PetalburgCity_EventScript_Boy2::
	lock
	faceplayer
	msgbox PetalburgCity_EventScript_Boy2_Text_0
	release
	return


PetalburgCity_EventScript_Man::
	lock
	faceplayer
	msgbox PetalburgCity_EventScript_Man_Text_0
	release
	return


PetalburgCity_EventScript_LittleGirl::
	lock
	faceplayer
	msgbox PetalburgCity_EventScript_LittleGirl_Text_0
	closemessage
	applymovement 10, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	return


PetalburgCity_EventScript_ScytherTrainer::
	lock
	faceplayer
	msgbox PetalburgCity_EventScript_ScytherTrainer_Text_0
	closemessage
	applymovement 12, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	return


PetalburgCity_EventScript_Scyther::
	lock
	faceplayer
	playmoncry SPECIES_SCYTHER, CRY_MODE_NORMAL
	waitmoncry
	msgbox PetalburgCity_EventScript_Scyther_Text_0
	applymovement 13, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


PetalburgCity_EventScript_Oddish::
	lock
	faceplayer
	playmoncry SPECIES_ODDISH, CRY_MODE_NORMAL
	waitmoncry
	msgbox PetalburgCity_EventScript_Oddish_Text_0
	applymovement 13, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


PetalburgCity_EventScript_Budew::
	lock
	faceplayer
	playmoncry SPECIES_BUDEW, CRY_MODE_NORMAL
	waitmoncry
	msgbox PetalburgCity_EventScript_Budew_Text_0
	applymovement 13, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


PetalburgCity_EventScript_JSOBoyBlock1::
	goto_if_unset FLAG_BADGE01_GET, PetalburgCity_EventScript_JSOBoyBlock1_1
	return

PetalburgCity_EventScript_JSOBoyBlock1_1:
	lock
	faceplayer
	msgbox PetalburgCity_EventScript_JSOBoyBlock1_Text_0
	closemessage
	applymovement 6, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	return


PetalburgCity_EventScript_JSOBoyBlock2::
	goto_if_unset FLAG_BADGE01_GET, PetalburgCity_EventScript_JSOBoyBlock2_1
	return

PetalburgCity_EventScript_JSOBoyBlock2_1:
	lock
	faceplayer
	msgbox PetalburgCity_EventScript_JSOBoyBlock2_Text_0
	closemessage
	applymovement 7, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	return


PetalburgCity_EventScript_JSOFight::
	lockall
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	playbgm MUS_DP_ENCOUNTER_SUSPICIOUS, FALSE
	applymovement OBJ_EVENT_ID_PLAYER, LookRight
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
	waitmovement 0
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, CameraRightSeven
	delay 15
	waitmovement 0
	applymovement LOCALID_Mundungus, WalkInPlaceUp
	waitmovement 0
	msgbox PetalburgCity_EventScript_JSOFight_Text_0
	applymovement LOCALID_JSOGIRL, WalkInPlaceDown
	waitmovement 0
	msgbox PetalburgCity_EventScript_JSOFight_Text_1
	applymovement LOCALID_Mundungus, LookLeft
	waitmovement 0
	applymovement LOCALID_Mundungus, Common_Movement_ExclamationMark
	waitmovement 0
	delay 15
	msgbox PetalburgCity_EventScript_JSOFight_Text_2
	closemessage
	applymovement OBJ_EVENT_ID_CAMERA, CameraLeftSeven
	waitmovement 0
	special RemoveCameraObject
	applymovement OBJ_EVENT_ID_PLAYER, WalkToDung
	waitmovement 0
	msgbox PetalburgCity_EventScript_JSOFight_Text_3
	applymovement OBJ_EVENT_ID_PLAYER, LookUp
	waitmovement 0
	delay 60
	trainerbattle_no_intro TRAINER_GRUNT_SEAFLOOR_CAVERN_1, Jeremy_Outro
	setvar VAR_PETALBURG_CITY_STATE, 3
	delay 15
	applymovement LOCALID_JSOGIRL, LookLeft
	applymovement LOCALID_JSOBOY, WalkInPlaceRight
	msgbox PetalburgCity_EventScript_JSOFight_Text_4
	closemessage
	applymovement LOCALID_JSOGIRL, Common_Movement_FaceDown
	applymovement LOCALID_JSOBOY, Common_Movement_FaceDown
	waitmovement 0
	delay 15
	applymovement LOCALID_JSOBOY, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox PetalburgCity_EventScript_JSOFight_Text_5
	closemessage
	delay 15
	fadescreen FADE_TO_BLACK
	removeobject 3
	waitmovement 0
	removeobject 4
	waitmovement 0
	removeobject 6
	waitmovement 0
	removeobject 7
	waitmovement 0
	setflag FLAG_UNUSED_0x02A
	setvar VAR_PETALBURG_CITY_STATE, 3
	playse SE_EXIT
	delay 60
	fadescreen FADE_FROM_BLACK
	applymovement OBJ_EVENT_ID_PLAYER, LookRight
	applymovement LOCALID_Mundungus, LookLeft
	applymovement LOCALID_Mundungus, WalkInPlaceLeft
	msgbox PetalburgCity_EventScript_JSOFight_Text_6
	applymovement LOCALID_Mundungus, LookDown
	delay 30
	msgbox PetalburgCity_EventScript_JSOFight_Text_7
	applymovement LOCALID_Mundungus, LookLeft
	msgbox PetalburgCity_EventScript_JSOFight_Text_8
	applymovement LOCALID_Mundungus, WalkUpTwo
	waitmovement 0
	setobjectxyperm LOCALID_Mundungus, 0, 20
	removeobject LOCALID_Mundungus
	applymovement OBJ_EVENT_ID_PLAYER, PlayerUpTwo
	waitmovement 0
	warp MAP_PETALBURG_CITY_MUNDUNGUS_HOUSE, 9, 8
	releaseall
	end


PetalburgCity_EventScript_JSOBoyFight::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_1, Jeremy_Intro, Jeremy_Outro, PetalburgCity_EventScript_JSOLeave
	msgbox PostBattle_Jeremy, MSGBOX_AUTOCLOSE
	waitmessage
	end


PetalburgCity_EventScript_JSOLeave::
	return


WalkToDung:
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

LookUp:
	face_up
	step_end

LookDown:
	face_down
	step_end

WalkInPlaceUp:
	walk_in_place_up
	step_end

WalkInPlaceDown:
	walk_in_place_down
	step_end

WalkInPlaceRight:
	walk_in_place_right
	step_end

WalkInPlaceLeft:
	walk_in_place_left
	step_end

WalkUp:
	walk_up
	step_end

PlayerUpTwo:
	walk_right
	walk_up
	walk_up
	step_end

CameraRightSeven:
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	walk_fast_right
	step_end

CameraLeftSeven:
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	step_end

WalkUpTwo:
	walk_up
	walk_up
	step_end

PetalburgCity_EventScript_GrassSign_Text_0:
	.string "These trees are the last remnants of\n"
	.string "the natural landscape in Treefall City.\p"
	.string "Please treat them with respect.$"

PetalburgCity_EventScript_JSOBoy_Text_0:
	.string "Have you seen Mundungus? We found his\n"
	.string "house, and we'd like a word.$"

PetalburgCity_EventScript_JSOGirl_Text_0:
	.string "Anthrotech is ruining Ecodia! We won't\n"
	.string "stand for it!$"

PetalburgCity_EventScript_Gentleman_Text_0:
	.string "I remember when Treefall City was just\n"
	.string "a small town. Thanks to the lumber\l"
	.string "industry, we quickly grew.\p"
	.string "Much of Ecodia was built with trees we\n"
	.string "exported.$"

PetalburgCity_EventScript_GymBoy_Text_0:
	.string "Apparently Treefall City is going to\n"
	.string "start planting trees, instead of\l"
	.string "cutting them down.\p"
	.string "Maybe we should be called Treeplant\n"
	.string "City!$"

PetalburgCity_EventScript_Woman_Text_0:
	.string "I'm all for nature and everything, but\n"
	.string "won't our local economy be impacted by\l"
	.string "halting lumber exports?\p"
	.string "Doesn't anyone care about us?$"

PetalburgCity_EventScript_Boy2_Text_0:
	.string "I've practiced cutting down trees my\n"
	.string "whole life.\p"
	.string "It's all been a waste!$"

PetalburgCity_EventScript_Man_Text_0:
	.string "It's nice to feel important. I'm glad\n"
	.string "Treefall City has such a strong\l"
	.string "Anthrotech presence!$"

PetalburgCity_EventScript_LittleGirl_Text_0:
	.string "I love seeing the little Grass Pokémon\n"
	.string "running around behind the fence!\p"
	.string "I wish there were more...$"

PetalburgCity_EventScript_ScytherTrainer_Text_0:
	.string "My Scyther helped produce great\n"
	.string "quantities of lumber, thanks in part to\l"
	.string "the Cut HM!\p"
	.string "I know Anthrotech has a tool that\n"
	.string "allows any Pokémon to use any HM, but\l"
	.string "it just seemed right to teach Scyther\l"
	.string "Cut.\p"
	.string "I got the HM from someone in town!$"

PetalburgCity_EventScript_Scyther_Text_0:
	.string "The Scyther looks anxious!$"

PetalburgCity_EventScript_Oddish_Text_0:
	.string "Oddish wants to play!$"

PetalburgCity_EventScript_Budew_Text_0:
	.string "Budew seems content.$"

PetalburgCity_EventScript_JSOBoyBlock1_Text_0:
	.string "We aren't leaving until we speak with\n"
	.string "Mundungus.$"

PetalburgCity_EventScript_JSOBoyBlock2_Text_0:
	.string "Anthrotech is the cause of everything\n"
	.string "that is wrong in Ecodia.$"

PetalburgCity_EventScript_JSOFight_Text_0:
	.string "Mundungus: You can't stop me from\n"
	.string "entering my own home!$"

PetalburgCity_EventScript_JSOFight_Text_1:
	.string "???: And you can't expect to restore\n"
	.string "Treefall Woods by planting the same\l"
	.string "trees over and over!\p"
	.string "When will you realize what you are truly\n"
	.string "doing to Ecodia?$"

PetalburgCity_EventScript_JSOFight_Text_2:
	.string "Mundungus: Oh, {PLAYER}! Will you\n"
	.string "come give me a hand?$"

PetalburgCity_EventScript_JSOFight_Text_3:
	.string "Mundungus: If you earned an Axe Badge,\n"
	.string "then I'm certain you can defeat these\l"
	.string "rapscallions and let me back in my\l"
	.string "home!$"

PetalburgCity_EventScript_JSOFight_Text_4:
	.string "I suppose not battling all-out is one\n"
	.string "of the principles of non-violent\l"
	.string "resistance.\p"
	.string "We'd better get out of here before\n"
	.string "anything worse happens.$"

PetalburgCity_EventScript_JSOFight_Text_5:
	.string "We'll be seeing you again, {PLAYER}.$"

PetalburgCity_EventScript_JSOFight_Text_6:
	.string "Mundungus: Thank you, {PLAYER}.\p"
	.string "I am still not quite sure who those\n"
	.string "people dressed in orange are, but they\l"
	.string "were quite the nuisance. I haven't the\l"
	.string "faintest clue what they were talking\l"
	.string "about, Anthrotech is dedicated to\l"
	.string "improving the lives of those living in\l"
	.string "Ecodia!$"

PetalburgCity_EventScript_JSOFight_Text_7:
	.string "Mundungus: There are some who wish to\n"
	.string "get in our way, in the way of progress.\l"
	.string "I do not understand their motives.$"

PetalburgCity_EventScript_JSOFight_Text_8:
	.string "Mundungus: Anyhow, that roadblock\n"
	.string "appears to be in the past. Why don't\l"
	.string "you come inside, I have something to\l"
	.string "give you.$"

Jeremy_Intro::
	.string "Well, here we go!$"

Jeremy_Outro::
	.string "...$"

PostBattle_Jeremy::
	.string "...$"
