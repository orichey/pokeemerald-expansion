# 1 "data/maps/PetalburgCity_Gym/scripts.pory"

# 2 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_MapScripts::
# 3 "data/maps/PetalburgCity_Gym/scripts.pory"
	map_script MAP_SCRIPT_ON_TRANSITION, PetalburgCity_Gym_OnTransition
# 4 "data/maps/PetalburgCity_Gym/scripts.pory"
	.byte 0
# 5 "data/maps/PetalburgCity_Gym/scripts.pory"

# 6 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_OnTransition:
# 7 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetFlashLevel
# 8 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 9 "data/maps/PetalburgCity_Gym/scripts.pory"

# 10 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetFlashLevel::
# 11 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_defeated TRAINER_BRAWLY_1, PetalburgCity_Gym_EventScript_SetLightsOn
# 12 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_CountTrainersDefeated
# 13 "data/maps/PetalburgCity_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 14 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 0, PetalburgCity_Gym_EventScript_SetFlashLevel6
# 15 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, PetalburgCity_Gym_EventScript_SetFlashLevel4
# 16 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, PetalburgCity_Gym_EventScript_SetFlashLevel2
# 17 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, PetalburgCity_Gym_EventScript_SetLightsOn
# 18 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_SetLightsOn
# 19 "data/maps/PetalburgCity_Gym/scripts.pory"

# 20 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetLightsOn::
# 21 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflashlevel 0
# 22 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 23 "data/maps/PetalburgCity_Gym/scripts.pory"

# 24 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Brightest
# 25 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetFlashLevel1::
# 26 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflashlevel 1
# 27 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 28 "data/maps/PetalburgCity_Gym/scripts.pory"

# 29 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetFlashLevel2::
# 30 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflashlevel 2
# 31 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 32 "data/maps/PetalburgCity_Gym/scripts.pory"

# 33 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetFlashLevel3::
# 34 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflashlevel 3
# 35 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 36 "data/maps/PetalburgCity_Gym/scripts.pory"

# 37 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetFlashLevel4::
# 38 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflashlevel 4
# 39 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 40 "data/maps/PetalburgCity_Gym/scripts.pory"

# 41 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetFlashLevel5::
# 42 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflashlevel 5
# 43 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 44 "data/maps/PetalburgCity_Gym/scripts.pory"

# 45 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetFlashLevel6::
# 46 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflashlevel 6
# 47 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 48 "data/maps/PetalburgCity_Gym/scripts.pory"

# 49 "data/maps/PetalburgCity_Gym/scripts.pory"
@ Darkest
# 50 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_SetFlashLevel7::
# 51 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflashlevel 7
# 52 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 53 "data/maps/PetalburgCity_Gym/scripts.pory"

# 54 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BrightenRoom::
# 55 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_CountTrainersDefeated
# 56 "data/maps/PetalburgCity_Gym/scripts.pory"
	nop1
# 57 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, VAR_0x8001, PetalburgCity_Gym_EventScript_NoLightChange
# 58 "data/maps/PetalburgCity_Gym/scripts.pory"
	copyvar VAR_0x8001, VAR_0x8000
# 59 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 1, PetalburgCity_Gym_EventScript_AnimateFlash1Trainer
# 60 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 2, PetalburgCity_Gym_EventScript_AnimateFlash2Trainers
# 61 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, PetalburgCity_Gym_EventScript_AnimateFlash3Trainers
# 62 "data/maps/PetalburgCity_Gym/scripts.pory"

# 63 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_NoLightChange::
# 64 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 65 "data/maps/PetalburgCity_Gym/scripts.pory"

# 66 "data/maps/PetalburgCity_Gym/scripts.pory"
@ NOTE: A little confusingly, a larger animateflash param value is a smaller flash radius
# 67 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AnimateFlash1Trainer::
# 68 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_SWITCH
# 69 "data/maps/PetalburgCity_Gym/scripts.pory"
	animateflash 4
# 70 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetFlashLevel
# 71 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 72 "data/maps/PetalburgCity_Gym/scripts.pory"

# 73 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AnimateFlash2Trainers::
# 74 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_SWITCH
# 75 "data/maps/PetalburgCity_Gym/scripts.pory"
	animateflash 2
# 76 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetFlashLevel
# 77 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 78 "data/maps/PetalburgCity_Gym/scripts.pory"

# 79 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AnimateFlash3Trainers::
# 80 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_SWITCH
# 81 "data/maps/PetalburgCity_Gym/scripts.pory"
	animateflash 0
# 82 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetFlashLevel
# 83 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 84 "data/maps/PetalburgCity_Gym/scripts.pory"

# 85 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_AnimateFlashFullBrightness::
# 86 "data/maps/PetalburgCity_Gym/scripts.pory"
	playse SE_SWITCH
# 87 "data/maps/PetalburgCity_Gym/scripts.pory"
	animateflash 0
# 88 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_SetFlashLevel
# 89 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 90 "data/maps/PetalburgCity_Gym/scripts.pory"

# 91 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CountTrainersDefeated::
# 92 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8000, 0
# 93 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_TAKAO, PetalburgCity_Gym_EventScript_CheckJocelyn
# 94 "data/maps/PetalburgCity_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 95 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckJocelyn::
# 96 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_JOCELYN, PetalburgCity_Gym_EventScript_CheckLaura
# 97 "data/maps/PetalburgCity_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 98 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_CheckLaura::
# 99 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_not_defeated TRAINER_LAURA, PetalburgCity_Gym_EventScript_StopCountingTrainers
# 100 "data/maps/PetalburgCity_Gym/scripts.pory"
	addvar VAR_0x8000, 1
# 101 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_StopCountingTrainers::
# 102 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 103 "data/maps/PetalburgCity_Gym/scripts.pory"

# 104 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Brawly::
# 105 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_0x8000, 3, PetalburgCity_Gym_EventScript_BrawlyBattle
# 106 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_BrawlyNoBattle
# 107 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 108 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 109 "data/maps/PetalburgCity_Gym/scripts.pory"

# 110 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BrawlyNoBattle::
# 111 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 112 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 113 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BrawlyCantBattle, MSGBOX_DEFAULT
# 114 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 115 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 116 "data/maps/PetalburgCity_Gym/scripts.pory"

# 117 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BrawlyCantBattle:
# 118 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "PAUL: Hey there! I'm Paul, the leader\n"
# 119 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "of this gym!\p"
# 120 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "As I'm sure you have gathered, I am\n"
# 121 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "still in the process of converting\l"
# 122 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "this old warehouse into a nursery.\p"
# 123 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Can you make sure my employees get\n"
# 124 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "the lights turned on?$"
# 125 "data/maps/PetalburgCity_Gym/scripts.pory"

# 126 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BrawlyBattle::
# 127 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_BRAWLY_1, PetalburgCity_Gym_Text_BrawlyIntro, PetalburgCity_Gym_Text_BrawlyDefeat, PetalburgCity_Gym_EventScript_BrawlyDefeated, NO_MUSIC
# 128 "data/maps/PetalburgCity_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 129 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgCity_Gym_EventScript_BrawlyRematch
# 130 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_BULK_UP, PetalburgCity_Gym_EventScript_GiveBulkUp2
# 131 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BrawlyPostBattle, MSGBOX_DEFAULT
# 132 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 133 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 134 "data/maps/PetalburgCity_Gym/scripts.pory"

# 135 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BrawlyDefeated::
# 136 "data/maps/PetalburgCity_Gym/scripts.pory"
	message PetalburgCity_Gym_Text_ReceivedKnuckleBadge
# 137 "data/maps/PetalburgCity_Gym/scripts.pory"
	waitmessage
# 138 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_PlayGymBadgeFanfare
# 139 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_KnuckleBadgeInfoTakeThis, MSGBOX_DEFAULT
# 140 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_DEFEATED_PETALBURG_GYM
# 141 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_BADGE01_GET
# 142 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_PETALBURG_CITY_STATE, 1
# 143 "data/maps/PetalburgCity_Gym/scripts.pory"
	addvar VAR_PETALBURG_GYM_STATE, 1
# 144 "data/maps/PetalburgCity_Gym/scripts.pory"
	call_if_eq VAR_PETALBURG_GYM_STATE, 6, Common_EventScript_ReadyPetalburgGymForBattle
# 145 "data/maps/PetalburgCity_Gym/scripts.pory"
	setvar VAR_0x8008, 2
# 146 "data/maps/PetalburgCity_Gym/scripts.pory"
	call Common_EventScript_SetGymTrainers
# 147 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_GiveBulkUp
# 148 "data/maps/PetalburgCity_Gym/scripts.pory"
	closemessage
# 149 "data/maps/PetalburgCity_Gym/scripts.pory"
	delay 30
# 150 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 151 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 152 "data/maps/PetalburgCity_Gym/scripts.pory"

# 153 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveBulkUp::
# 154 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_STEEL_WING
# 155 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_BagIsFull
# 156 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 157 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 158 "data/maps/PetalburgCity_Gym/scripts.pory"
	return
# 159 "data/maps/PetalburgCity_Gym/scripts.pory"

# 160 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GiveBulkUp2:
# 161 "data/maps/PetalburgCity_Gym/scripts.pory"
	giveitem ITEM_TM_STEEL_WING
# 162 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, 0, Common_EventScript_ShowBagIsFull
# 163 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_ExplainBulkUp, MSGBOX_DEFAULT
# 164 "data/maps/PetalburgCity_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_BULK_UP
# 165 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 166 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 167 "data/maps/PetalburgCity_Gym/scripts.pory"

# 168 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_BrawlyRematch::
# 169 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_BRAWLY_1, PetalburgCity_Gym_Text_BrawlyPreRematch, PetalburgCity_Gym_Text_BrawlyRematchDefeat, PetalburgCity_Gym_Text_BrawlyRematchNeedTwoMons
# 170 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_BrawlyPostRematch, MSGBOX_AUTOCLOSE
# 171 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 172 "data/maps/PetalburgCity_Gym/scripts.pory"

# 173 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Takao::
# 174 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_TAKAO, PetalburgCity_Gym_Text_TakaoIntro, PetalburgCity_Gym_Text_TakaoDefeat, PetalburgCity_Gym_EventScript_TakaoBrightenRoom
# 175 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_TakaoPostBattle, MSGBOX_AUTOCLOSE
# 176 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 177 "data/maps/PetalburgCity_Gym/scripts.pory"

# 178 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_TakaoBrightenRoom::
# 179 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_TakaoImmediatePostBattle, MSGBOX_DEFAULT
# 180 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_BrightenRoom
# 181 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 182 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 183 "data/maps/PetalburgCity_Gym/scripts.pory"

# 184 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_TakaoImmediatePostBattle:
# 185 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Maybe you are worthy of Paul.\n"
# 186 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Let me help light the way!$"
# 187 "data/maps/PetalburgCity_Gym/scripts.pory"

# 188 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Jocelyn::
# 189 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOCELYN, PetalburgCity_Gym_Text_JocelynIntro, PetalburgCity_Gym_Text_JocelynDefeat, PetalburgCity_Gym_EventScript_JocelynBrightenRoom
# 190 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JocelynPostBattle, MSGBOX_AUTOCLOSE
# 191 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 192 "data/maps/PetalburgCity_Gym/scripts.pory"

# 193 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_JocelynBrightenRoom::
# 194 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_JocelynImmediatePostBattle, MSGBOX_DEFAULT
# 195 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_BrightenRoom
# 196 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 197 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 198 "data/maps/PetalburgCity_Gym/scripts.pory"

# 199 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JocelynImmediatePostBattle:
# 200 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh, here's my switch!\n"
# 201 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This should help!$"
# 202 "data/maps/PetalburgCity_Gym/scripts.pory"

# 203 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_Laura::
# 204 "data/maps/PetalburgCity_Gym/scripts.pory"
	trainerbattle_single TRAINER_LAURA, PetalburgCity_Gym_Text_LauraIntro, PetalburgCity_Gym_Text_LauraDefeat, PetalburgCity_Gym_EventScript_LauraBrightenRoom
# 205 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LauraPostBattle, MSGBOX_AUTOCLOSE
# 206 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 207 "data/maps/PetalburgCity_Gym/scripts.pory"

# 208 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LauraBrightenRoom::
# 209 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_LauraImmediatePostBattle, MSGBOX_DEFAULT
# 210 "data/maps/PetalburgCity_Gym/scripts.pory"
	call PetalburgCity_Gym_EventScript_BrightenRoom
# 211 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 212 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 213 "data/maps/PetalburgCity_Gym/scripts.pory"

# 214 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LauraImmediatePostBattle:
# 215 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I much prefer cutting trees to\n"
# 216 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "growing them. I guess I should listen\l"
# 217 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "to Paul and make it brighter in here,\l"
# 218 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "though.$"
# 219 "data/maps/PetalburgCity_Gym/scripts.pory"

# 220 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuide::
# 221 "data/maps/PetalburgCity_Gym/scripts.pory"
	lock
# 222 "data/maps/PetalburgCity_Gym/scripts.pory"
	faceplayer
# 223 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_PETALBURG_GYM, PetalburgCity_Gym_EventScript_GymGuidePostVictory
# 224 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 225 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 226 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 227 "data/maps/PetalburgCity_Gym/scripts.pory"

# 228 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymGuidePostVictory::
# 229 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 230 "data/maps/PetalburgCity_Gym/scripts.pory"
	release
# 231 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 232 "data/maps/PetalburgCity_Gym/scripts.pory"

# 233 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_LeftGymStatue::
# 234 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 235 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 236 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 237 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 238 "data/maps/PetalburgCity_Gym/scripts.pory"

# 239 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_RightGymStatue::
# 240 "data/maps/PetalburgCity_Gym/scripts.pory"
	lockall
# 241 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto_if_set FLAG_BADGE01_GET, PetalburgCity_Gym_EventScript_GymStatueCertified
# 242 "data/maps/PetalburgCity_Gym/scripts.pory"
	goto PetalburgCity_Gym_EventScript_GymStatue
# 243 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 244 "data/maps/PetalburgCity_Gym/scripts.pory"

# 245 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatueCertified::
# 246 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 247 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 248 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 249 "data/maps/PetalburgCity_Gym/scripts.pory"

# 250 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_EventScript_GymStatue::
# 251 "data/maps/PetalburgCity_Gym/scripts.pory"
	msgbox PetalburgCity_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 252 "data/maps/PetalburgCity_Gym/scripts.pory"
	releaseall
# 253 "data/maps/PetalburgCity_Gym/scripts.pory"
	end
# 254 "data/maps/PetalburgCity_Gym/scripts.pory"

# 255 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuideAdvice:
# 256 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Yo! Do I see before me a new\n"
# 257 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "champ in the making?\p"
# 258 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}, is it?\p"
# 259 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Mundungus told me about you, he\n"
# 260 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "thought you might challenge the\l"
# 261 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon League!\p"
# 262 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I see he was right!\p"
# 263 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Looks like the Treefall City gym\n"
# 264 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "will be your first challenge.\p"
# 265 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "This gym used to be a warehouse,\n"
# 266 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "storing the tools and machinery\l"
# 267 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "used to chop down Treefall Woods!\p"
# 268 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It has been turned into a nursery,\n"
# 269 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "but trainers here still use Steel\l"
# 270 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Pokémon. Watch out for their edge!\p"
# 271 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It seems as if Paul, the leader,\n"
# 272 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "is having trouble with growing\l"
# 273 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "his plants. Maybe you could help\l"
# 274 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "him with the lights?$"
# 275 "data/maps/PetalburgCity_Gym/scripts.pory"

# 276 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymGuidePostVictory:
# 277 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Yo! Champ in the making!\p"
# 278 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You dulled Paul's blade and\n"
# 279 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "brightened the lights!\p"
# 280 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "What will you do next?$"
# 281 "data/maps/PetalburgCity_Gym/scripts.pory"

# 282 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_TakaoIntro:
# 283 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I caught my Pokémon while\n"
# 284 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "cutting down Treefall Woods!$"
# 285 "data/maps/PetalburgCity_Gym/scripts.pory"

# 286 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_TakaoDefeat:
# 287 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You're tough!$"
# 288 "data/maps/PetalburgCity_Gym/scripts.pory"

# 289 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_TakaoPostBattle:
# 290 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "My tree-falling skills have not\n"
# 291 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "translated to Pokémon training\l"
# 292 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "skills.\p"
# 293 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Maybe they will help with my\n"
# 294 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "tree-planting skills?$"
# 295 "data/maps/PetalburgCity_Gym/scripts.pory"

# 296 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JocelynIntro:
# 297 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I can't find my light switch.\n"
# 298 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Could you give me a hand?$"
# 299 "data/maps/PetalburgCity_Gym/scripts.pory"

# 300 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JocelynDefeat:
# 301 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wow!\n"
# 302 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think you're ready for Paul!$"
# 303 "data/maps/PetalburgCity_Gym/scripts.pory"

# 304 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_JocelynPostBattle:
# 305 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Anthrotech has tasked us with\n"
# 306 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "studying the best trees to use to\l"
# 307 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "plant in Treefall Woods.\p"
# 308 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "They plan on using our findings\n"
# 309 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "to regrow it entirely!$"
# 310 "data/maps/PetalburgCity_Gym/scripts.pory"

# 311 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LauraIntro:
# 312 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I have made my living cutting\n"
# 313 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "down trees.\p"
# 314 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Why do I have to grow 'em now?$"
# 315 "data/maps/PetalburgCity_Gym/scripts.pory"

# 316 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LauraDefeat:
# 317 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Chopped down!$"
# 318 "data/maps/PetalburgCity_Gym/scripts.pory"

# 319 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_LauraPostBattle:
# 320 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I guess growing more trees means\n"
# 321 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "there will be more to cut down.\p"
# 322 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I think that's part of Paul and\n"
# 323 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Anthrotech's plan.$"
# 324 "data/maps/PetalburgCity_Gym/scripts.pory"

# 325 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BrawlyIntro:
# 326 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Hey, thanks for getting the\n"
# 327 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "lights on in here! I'm still\l"
# 328 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "ironing out the kinks of this\l"
# 329 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "nursery thing, I'd much rather\l"
# 330 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "be swinging my axe.\p"
# 331 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Anyways, I'm Paul!\n"
# 332 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Lumberjack, er, arborist, of\l"
# 333 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Treefall City!\p"
# 334 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I take it you want to challenge\n"
# 335 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "me? Let's see what you're made of!$"
# 336 "data/maps/PetalburgCity_Gym/scripts.pory"

# 337 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BrawlyDefeat:
# 338 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Stunning!\n"
# 339 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I've rusted away!\p"
# 340 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's been a long time since\n"
# 341 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "anyone has withstood my might,\l"
# 342 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "take this Gym Badge!$"
# 343 "data/maps/PetalburgCity_Gym/scripts.pory"

# 344 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ReceivedKnuckleBadge:
# 345 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER} received the Axe Badge\n"
# 346 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "from Paul.$"
# 347 "data/maps/PetalburgCity_Gym/scripts.pory"

# 348 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_KnuckleBadgeInfoTakeThis:
# 349 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "The Axe Badge makes all Pokémon\n"
# 350 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "have a stronger attack, as if they\l"
# 351 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "were wielding a blade!\p"
# 352 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Here, take this TM, and see the\n"
# 353 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "power of an unrelenting attack!$"
# 354 "data/maps/PetalburgCity_Gym/scripts.pory"

# 355 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_ExplainBulkUp:
# 356 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "That TM contains Steel Wing.\p"
# 357 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Use it to soar above your rivals\n"
# 358 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "and strike them down!$"
# 359 "data/maps/PetalburgCity_Gym/scripts.pory"

# 360 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_RegisteredBrawly:
# 361 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Registered GYM LEADER BRAWLY\n"
# 362 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 363 "data/maps/PetalburgCity_Gym/scripts.pory"

# 364 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BrawlyPostBattle:
# 365 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Our world is going through a great\n"
# 366 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "many changes, {PLAYER}.\p"
# 367 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Brace yourself, and face it head on!$"
# 368 "data/maps/PetalburgCity_Gym/scripts.pory"

# 369 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatue:
# 370 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Treefall City Pokémon Gym$"
# 371 "data/maps/PetalburgCity_Gym/scripts.pory"

# 372 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_GymStatueCertified:
# 373 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Treefall City Pokémon Gym\p"
# 374 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Paul's Certified Trainers:\n"
# 375 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "{PLAYER}$"
# 376 "data/maps/PetalburgCity_Gym/scripts.pory"

# 377 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BrawlyPreRematch:
# 378 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 379 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 380 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 381 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 382 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Show me how much higher\n"
# 383 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "you've gone!$"
# 384 "data/maps/PetalburgCity_Gym/scripts.pory"

# 385 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BrawlyRematchDefeat:
# 386 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Wow!\n"
# 387 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Swamped again!$"
# 388 "data/maps/PetalburgCity_Gym/scripts.pory"

# 389 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BrawlyPostRematch:
# 390 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "BRAWLY: Battling is vast and it's deep.\n"
# 391 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "You can't see the bottom.\l"
# 392 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "It's just like the sea of HOENN!$"
# 393 "data/maps/PetalburgCity_Gym/scripts.pory"

# 394 "data/maps/PetalburgCity_Gym/scripts.pory"
PetalburgCity_Gym_Text_BrawlyRematchNeedTwoMons:
# 395 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "BRAWLY: A wave may draw back, but it\n"
# 396 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "always returns to the shore.\p"
# 397 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "A giant wave of a talent like you…\n"
# 398 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I knew you would return!\p"
# 399 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "Oh? You only have one POKéMON\n"
# 400 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "that can battle.\p"
# 401 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "I'm sorry, but I'd like you to come back\n"
# 402 "data/maps/PetalburgCity_Gym/scripts.pory"
	.string "with at least two POKéMON.$"
