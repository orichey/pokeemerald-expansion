LittlerootTown_StartingHouse_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, StartingHouse_EventScript_MomDefault
	.byte 0


StartingHouse_EventScript_MomDefault::
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE
	goto_if_unset FLAG_UNUSED_0x025, StartingHouse_EventScript_MomDefault_1
	setobjectxyperm 1, 7, 5
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	return

StartingHouse_EventScript_MomDefault_1:
	setobjectxy 1, 6, 4
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


StartingHouse_EventScript_MomAskSpruce::
	lock
	faceplayer
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq StartingHouse_EventScript_MomAskSpruce_2
StartingHouse_EventScript_MomAskSpruce_1:
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq StartingHouse_EventScript_MomAskSpruce_5
StartingHouse_EventScript_MomAskSpruce_4:
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq StartingHouse_EventScript_MomAskSpruce_8
StartingHouse_EventScript_MomAskSpruce_7:
	waitmessage
	release
	end

StartingHouse_EventScript_MomAskSpruce_2:
	msgbox StartingHouse_EventScript_MomAskSpruce_Text_0
	goto StartingHouse_EventScript_MomAskSpruce_1

StartingHouse_EventScript_MomAskSpruce_5:
	msgbox StartingHouse_EventScript_MomAskSpruce_Text_1
	call Common_EventScript_OutOfCenterPartyHeal
	msgbox StartingHouse_EventScript_MomAskSpruce_Text_2
	goto StartingHouse_EventScript_MomAskSpruce_4

StartingHouse_EventScript_MomAskSpruce_8:
	msgbox StartingHouse_EventScript_MomAskSpruce_Text_3
	setvar VAR_UNUSED_0x40F7, 2
	goto StartingHouse_EventScript_MomAskSpruce_7


StartingHouse_EventScript_MomBeckons::
	goto_if_unset FLAG_UNUSED_0x025, StartingHouse_EventScript_MomBeckons_2
StartingHouse_EventScript_MomBeckons_1:
	release
	return

StartingHouse_EventScript_MomBeckons_2:
	lock
	applymovement 1, MomLook
	waitmovement 0
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox StartingHouse_EventScript_MomBeckons_Text_0
	closemessage
	applymovement 1, MomMove
	waitmovement 0
	delay 15
	applymovement OBJ_EVENT_ID_PLAYER, GoToTV
	waitmovement 0
	delay 45
	special TurnOnTVScreen
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
	msgbox StartingHouse_EventScript_MomBeckons_Text_1
	special TurnOffTVScreen
	fadedefaultbgm
	delay 120
	applymovement OBJ_EVENT_ID_PLAYER, LookToMom
	waitmovement 0
	msgbox StartingHouse_EventScript_MomBeckons_Text_2
	waitmovement 0
	closemessage
	delay 30
	applymovement 1, MomLookUp
	waitmovement 0
	delay 60
	msgbox StartingHouse_EventScript_MomBeckons_Text_3
	closemessage
	delay 60
	applymovement 1, MomLook
	waitmovement 0
	msgbox StartingHouse_EventScript_MomBeckons_Text_4
	setflag FLAG_UNUSED_0x025
	setflag FLAG_SYS_B_DASH
	goto StartingHouse_EventScript_MomBeckons_1


StartingHouse_EventScript_MomBeckonsFromLeft::
	goto_if_unset FLAG_UNUSED_0x025, StartingHouse_EventScript_MomBeckonsFromLeft_2
StartingHouse_EventScript_MomBeckonsFromLeft_1:
	release
	return

StartingHouse_EventScript_MomBeckonsFromLeft_2:
	lock
	applymovement 1, MomLook
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, LookRight
	applymovement 1, Common_Movement_ExclamationMark
	waitmovement 0
	msgbox StartingHouse_EventScript_MomBeckons_Text_0
	closemessage
	applymovement 1, MomMove
	waitmovement 0
	delay 15
	applymovement OBJ_EVENT_ID_PLAYER, GoToTVFromLeft
	waitmovement 0
	delay 45
	special TurnOnTVScreen
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
	msgbox StartingHouse_EventScript_MomBeckons_Text_1
	special TurnOffTVScreen
	fadedefaultbgm
	delay 120
	applymovement OBJ_EVENT_ID_PLAYER, LookToMom
	waitmovement 0
	msgbox StartingHouse_EventScript_MomBeckons_Text_2
	waitmovement 0
	closemessage
	delay 30
	applymovement 1, MomLookUp
	waitmovement 0
	delay 60
	msgbox StartingHouse_EventScript_MomBeckons_Text_3
	closemessage
	delay 60
	applymovement 1, MomLook
	waitmovement 0
	msgbox StartingHouse_EventScript_MomBeckons_Text_4
	setflag FLAG_UNUSED_0x025
	setflag FLAG_SYS_B_DASH
	goto StartingHouse_EventScript_MomBeckonsFromLeft_1


MomLook:
	face_left
	step_end

MomMove:
	walk_right
	face_left
	step_end

GoToTV:
	walk_right
	walk_down
	walk_right
	walk_right
	face_up
	step_end

GoToTVFromLeft:
	walk_right
	walk_right
	walk_right
	walk_down
	walk_right
	walk_right
	face_up
	step_end

LookRight:
	face_right
	step_end

LookToMom:
	face_right
	step_end

MomLookUp:
	face_up
	step_end

StartingHouse_EventScript_MomAskSpruce_Text_0:
	.string "Mom: Did you talk to Professor Spruce?$"

StartingHouse_EventScript_MomAskSpruce_Text_1:
	.string "Mom: Hi, honey! You look tired.\n"
	.string "Why not take a quick rest?$"

StartingHouse_EventScript_MomAskSpruce_Text_2:
	.string "Be safe out there!$"

StartingHouse_EventScript_MomAskSpruce_Text_3:
	.string "Mom: So Professor Spruce wants you to\n"
	.string "explore Ecodia for him?\p"
	.string "Mom: That sounds like quite a task.\n"
	.string "But I know you can do it, sweetie!\l"
	.string "Be safe, and come home any time!$"

StartingHouse_EventScript_MomBeckons_Text_0:
	.string "Mom: Oh, {PLAYER}! You're awake!\n"
	.string "I was just about to watch the news.\p"
	.string "Come quick!$"

StartingHouse_EventScript_MomBeckons_Text_1:
	.string "BREAKING NEWS! The impacts of climate\n"
	.string "change continue to batter Ecodia!\p"
	.string "Heat waves, forest fires, deluges, and\n"
	.string "floods are all roaring ferociously!\p"
	.string "When will it come to an end?$"

StartingHouse_EventScript_MomBeckons_Text_2:
	.string "Mom: I can't believe this is happening\n"
	.string "to our new home. To think, after\l"
	.string "escaping the calamities in Hoenn, we\l"
	.string "would find something even worse.$"

StartingHouse_EventScript_MomBeckons_Text_3:
	.string "Mom: ...$"

StartingHouse_EventScript_MomBeckons_Text_4:
	.string "Say, why don't you talk to Professor\n"
	.string "Spruce? He might have an explanation\l"
	.string "for all of this!$"
