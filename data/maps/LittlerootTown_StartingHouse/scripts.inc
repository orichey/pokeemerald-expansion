LittlerootTown_StartingHouse_MapScripts::
# 2 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, StartingHouse_EventScript_MomDefault
	.byte 0


StartingHouse_EventScript_MomDefault::
# 6 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	setrespawn HEAL_LOCATION_LITTLEROOT_TOWN_BRENDANS_HOUSE
# 7 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x025, StartingHouse_EventScript_MomDefault_1
# 13 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	setobjectxyperm 1, 7, 5
# 14 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_RIGHT
	return

StartingHouse_EventScript_MomDefault_1:
# 8 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	setobjectxy 1, 6, 4
# 9 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	setobjectmovementtype 1, MOVEMENT_TYPE_FACE_UP
	return


StartingHouse_EventScript_MomAskSpruce::
# 20 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	lock
# 21 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	faceplayer
# 22 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	compare VAR_UNUSED_0x40F7, 0
	goto_if_eq StartingHouse_EventScript_MomAskSpruce_2
StartingHouse_EventScript_MomAskSpruce_1:
# 25 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	compare VAR_UNUSED_0x40F7, 2
	goto_if_eq StartingHouse_EventScript_MomAskSpruce_5
StartingHouse_EventScript_MomAskSpruce_4:
# 31 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	compare VAR_UNUSED_0x40F7, 1
	goto_if_eq StartingHouse_EventScript_MomAskSpruce_8
StartingHouse_EventScript_MomAskSpruce_7:
# 39 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	waitmessage
# 40 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	release
	end

StartingHouse_EventScript_MomAskSpruce_2:
# 23 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	msgbox StartingHouse_EventScript_MomAskSpruce_Text_0
	goto StartingHouse_EventScript_MomAskSpruce_1

StartingHouse_EventScript_MomAskSpruce_5:
# 26 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	msgbox StartingHouse_EventScript_MomAskSpruce_Text_1
# 28 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	call Common_EventScript_OutOfCenterPartyHeal
# 29 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	msgbox StartingHouse_EventScript_MomAskSpruce_Text_2
	goto StartingHouse_EventScript_MomAskSpruce_4

StartingHouse_EventScript_MomAskSpruce_8:
# 32 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	msgbox StartingHouse_EventScript_MomAskSpruce_Text_3
# 37 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	setvar VAR_UNUSED_0x40F7, 2
	goto StartingHouse_EventScript_MomAskSpruce_7


StartingHouse_EventScript_MomBeckons::
# 45 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x025, StartingHouse_EventScript_MomBeckons_2
StartingHouse_EventScript_MomBeckons_1:
# 92 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	release
	return

StartingHouse_EventScript_MomBeckons_2:
# 46 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	lock
# 47 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	applymovement 1, MomLook
# 48 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	waitmovement 0
# 49 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 50 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	waitmovement 0
# 51 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	msgbox StartingHouse_EventScript_MomBeckons_Text_0
# 54 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	closemessage
# 55 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	applymovement 1, MomMove
# 56 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	waitmovement 0
# 57 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	delay 15
# 58 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GoToTV
# 59 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	waitmovement 0
# 60 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	delay 45
# 61 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	special TurnOnTVScreen
# 62 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 63 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	msgbox StartingHouse_EventScript_MomBeckons_Text_1
# 68 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	special TurnOffTVScreen
# 69 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	fadedefaultbgm
# 70 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	delay 120
# 71 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookToMom
# 72 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	waitmovement 0
# 73 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	msgbox StartingHouse_EventScript_MomBeckons_Text_2
# 77 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	waitmovement 0
# 78 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	closemessage
# 79 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	delay 30
# 80 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	applymovement 1, MomLookUp
# 81 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	waitmovement 0
# 82 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	delay 60
# 83 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	msgbox StartingHouse_EventScript_MomBeckons_Text_3
# 84 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	closemessage
# 85 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	delay 60
# 86 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	applymovement 1, MomLook
# 87 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	waitmovement 0
# 88 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	msgbox StartingHouse_EventScript_MomBeckons_Text_4
# 89 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 90 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	setflag FLAG_SYS_B_DASH
	goto StartingHouse_EventScript_MomBeckons_1


StartingHouse_EventScript_MomBeckonsFromLeft::
# 96 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	goto_if_unset FLAG_UNUSED_0x025, StartingHouse_EventScript_MomBeckonsFromLeft_2
StartingHouse_EventScript_MomBeckonsFromLeft_1:
# 144 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	release
	return

StartingHouse_EventScript_MomBeckonsFromLeft_2:
# 97 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	lock
# 98 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	applymovement 1, MomLook
# 99 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	waitmovement 0
# 100 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookRight
# 101 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 102 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	waitmovement 0
# 103 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	msgbox StartingHouse_EventScript_MomBeckons_Text_0
# 106 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	closemessage
# 107 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	applymovement 1, MomMove
# 108 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	waitmovement 0
# 109 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	delay 15
# 110 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, GoToTVFromLeft
# 111 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	waitmovement 0
# 112 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	delay 45
# 113 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	special TurnOnTVScreen
# 114 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	playbgm MUS_ENCOUNTER_INTERVIEWER, FALSE
# 115 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	msgbox StartingHouse_EventScript_MomBeckons_Text_1
# 120 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	special TurnOffTVScreen
# 121 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	fadedefaultbgm
# 122 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	delay 120
# 123 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, LookToMom
# 124 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	waitmovement 0
# 125 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	msgbox StartingHouse_EventScript_MomBeckons_Text_2
# 129 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	waitmovement 0
# 130 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	closemessage
# 131 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	delay 30
# 132 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	applymovement 1, MomLookUp
# 133 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	waitmovement 0
# 134 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	delay 60
# 135 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	msgbox StartingHouse_EventScript_MomBeckons_Text_3
# 136 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	closemessage
# 137 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	delay 60
# 138 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	applymovement 1, MomLook
# 139 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	waitmovement 0
# 140 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	msgbox StartingHouse_EventScript_MomBeckons_Text_4
# 141 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	setflag FLAG_UNUSED_0x025
# 142 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	setflag FLAG_SYS_B_DASH
	goto StartingHouse_EventScript_MomBeckonsFromLeft_1


# 149 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
MomLook:
# 150 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	face_left
	step_end

# 153 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
MomMove:
# 154 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	walk_right
# 155 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	face_left
	step_end

# 158 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
GoToTV:
# 159 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	walk_right
# 160 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	walk_down
# 161 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	walk_right
# 161 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	walk_right
# 162 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	face_up
	step_end

# 165 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
GoToTVFromLeft:
# 166 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	walk_right
# 166 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	walk_right
# 166 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	walk_right
# 167 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	walk_down
# 168 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	walk_right
# 168 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	walk_right
# 169 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	face_up
	step_end

# 172 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
LookRight:
# 173 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	face_right
	step_end

# 176 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
LookToMom:
# 177 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	face_right
	step_end

# 180 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
MomLookUp:
# 181 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	face_up
	step_end

StartingHouse_EventScript_MomAskSpruce_Text_0:
# 23 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	.string "Mom: Did you talk to Professor Spruce?$"

StartingHouse_EventScript_MomAskSpruce_Text_1:
# 26 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	.string "Mom: Hi, honey! You look tired.\n"
	.string "Why not take a quick rest?$"

StartingHouse_EventScript_MomAskSpruce_Text_2:
# 29 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	.string "Be safe out there!$"

StartingHouse_EventScript_MomAskSpruce_Text_3:
# 32 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	.string "Mom: So Professor Spruce wants you to\n"
	.string "explore Ecodia for him?\p"
	.string "Mom: That sounds like quite a task.\n"
	.string "But I know you can do it, sweetie!\l"
	.string "Be safe, and come home any time!$"

StartingHouse_EventScript_MomBeckons_Text_0:
# 51 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	.string "Mom: Oh, {PLAYER}! You're awake!\n"
	.string "I was just about to watch the news.\p"
	.string "Come quick!$"

StartingHouse_EventScript_MomBeckons_Text_1:
# 63 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	.string "BREAKING NEWS! The impacts of climate\n"
	.string "change continue to batter Ecodia!\p"
	.string "Heat waves, forest fires, deluges, and\n"
	.string "floods are all roaring ferociously!\p"
	.string "When will it come to an end?$"

StartingHouse_EventScript_MomBeckons_Text_2:
# 73 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	.string "Mom: I can't believe this is happening\n"
	.string "to our new home. To think, after\l"
	.string "escaping the calamities in Hoenn, we\l"
	.string "would find something even worse.$"

StartingHouse_EventScript_MomBeckons_Text_3:
# 83 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	.string "Mom: ...$"

StartingHouse_EventScript_MomBeckons_Text_4:
# 88 "data/maps/LittlerootTown_StartingHouse/scripts.pory"
	.string "Say, why don't you talk to Professor\n"
	.string "Spruce? He might have an explanation\l"
	.string "for all of this!$"
