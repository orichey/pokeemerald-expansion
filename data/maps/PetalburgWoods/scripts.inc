# 1 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_GRUNT, 3
# 2 "data/maps/PetalburgWoods/scripts.pory"
.set LOCALID_DEVON_EMPLOYEE, 4
# 3 "data/maps/PetalburgWoods/scripts.pory"

# 4 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_MapScripts::
# 5 "data/maps/PetalburgWoods/scripts.pory"
	.byte 0
# 6 "data/maps/PetalburgWoods/scripts.pory"

# 7 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherLeft::
# 8 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 9 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 10 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft
# 11 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 12 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 13 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 14 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 15 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 16 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 17 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 18 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 19 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherLeft
# 20 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 21 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 22 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 23 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 24 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 25 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft
# 26 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 27 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 28 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 29 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachPlayer
# 30 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 31 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 32 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 33 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 34 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 35 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 36 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 37 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitLeft
# 38 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 39 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 40 "data/maps/PetalburgWoods/scripts.pory"
	end
# 41 "data/maps/PetalburgWoods/scripts.pory"

# 42 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherRight::
# 43 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 44 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherIntro
# 45 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherApproachPlayerRight
# 46 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 47 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterLeft
# 48 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 49 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HaveYouSeenShroomish, MSGBOX_DEFAULT
# 50 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 51 "data/maps/PetalburgWoods/scripts.pory"
	playbgm MUS_ENCOUNTER_AQUA, FALSE
# 52 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaEntrance
# 53 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 54 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWasGoingToAmbushYou, MSGBOX_DEFAULT
# 55 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 56 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaApproachResearcherRight
# 57 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 58 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, Common_Movement_WalkInPlaceFasterUp
# 59 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 60 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HandOverThosePapers, MSGBOX_DEFAULT
# 61 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 62 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight
# 63 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 64 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouHaveToHelpMe, MSGBOX_DEFAULT
# 65 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterUp
# 66 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 67 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NoOneCrossesTeamAqua, MSGBOX_DEFAULT
# 68 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_no_intro TRAINER_GRUNT_PETALBURG_WOODS, PetalburgWoods_Text_YoureKiddingMe
# 69 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaBackOff
# 70 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 71 "data/maps/PetalburgWoods/scripts.pory"
	call PetalburgWoods_EventScript_DevonResearcherPostBattle
# 72 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, PetalburgWoods_Movement_WatchResearcherLeave
# 73 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherExitRight
# 74 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 75 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_RemoveDevonResearcher
# 76 "data/maps/PetalburgWoods/scripts.pory"
	end
# 77 "data/maps/PetalburgWoods/scripts.pory"

# 78 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherIntro::
# 79 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherLookAround
# 80 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 81 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_NotAOneToBeFound, MSGBOX_DEFAULT
# 82 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 83 "data/maps/PetalburgWoods/scripts.pory"
	return
# 84 "data/maps/PetalburgWoods/scripts.pory"

# 85 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherPostBattle::
# 86 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YouveGotSomeNerve, MSGBOX_DEFAULT
# 87 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 88 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_GRUNT, PetalburgWoods_Movement_AquaRunAway
# 89 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 90 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_GRUNT
# 91 "data/maps/PetalburgWoods/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkInPlaceFasterDown
# 92 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 93 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ThatWasAwfullyClose, MSGBOX_DEFAULT
# 94 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_GREAT_BALL
# 95 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_BagFull
# 96 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 97 "data/maps/PetalburgWoods/scripts.pory"
	end
# 98 "data/maps/PetalburgWoods/scripts.pory"

# 99 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_BagFull::
# 100 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_YoureLoadedWithItems, MSGBOX_DEFAULT
# 101 "data/maps/PetalburgWoods/scripts.pory"
	goto PetalburgWoods_EventScript_DevonResearcherFinish
# 102 "data/maps/PetalburgWoods/scripts.pory"
	end
# 103 "data/maps/PetalburgWoods/scripts.pory"

# 104 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_DevonResearcherFinish::
# 105 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro, MSGBOX_DEFAULT
# 106 "data/maps/PetalburgWoods/scripts.pory"
	applymovement LOCALID_DEVON_EMPLOYEE, PetalburgWoods_Movement_DevonResearcherStartExit
# 107 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 108 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ICantBeWastingTime, MSGBOX_DEFAULT
# 109 "data/maps/PetalburgWoods/scripts.pory"
	closemessage
# 110 "data/maps/PetalburgWoods/scripts.pory"
	return
# 111 "data/maps/PetalburgWoods/scripts.pory"

# 112 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RemoveDevonResearcher::
# 113 "data/maps/PetalburgWoods/scripts.pory"
	removeobject LOCALID_DEVON_EMPLOYEE
# 114 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_PETALBURG_WOODS_STATE, 1
# 115 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
# 116 "data/maps/PetalburgWoods/scripts.pory"
	end
# 117 "data/maps/PetalburgWoods/scripts.pory"

# 118 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherLookAround:
# 119 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 120 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 121 "data/maps/PetalburgWoods/scripts.pory"
	delay_4
# 122 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 123 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 124 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 125 "data/maps/PetalburgWoods/scripts.pory"
	face_left
# 126 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 127 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 128 "data/maps/PetalburgWoods/scripts.pory"
	face_down
# 129 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 130 "data/maps/PetalburgWoods/scripts.pory"
	face_right
# 131 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 132 "data/maps/PetalburgWoods/scripts.pory"
	delay_8
# 133 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 134 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 135 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 136 "data/maps/PetalburgWoods/scripts.pory"

# 137 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitLeft:
# 138 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 139 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 140 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 141 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 142 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 143 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 144 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 145 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 146 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 147 "data/maps/PetalburgWoods/scripts.pory"

# 148 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerLeft:
# 149 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 150 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 151 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 152 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 153 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 154 "data/maps/PetalburgWoods/scripts.pory"

# 155 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherApproachPlayerRight:
# 156 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 157 "data/maps/PetalburgWoods/scripts.pory"
	face_player
# 158 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 159 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 160 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 161 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_right
# 162 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 163 "data/maps/PetalburgWoods/scripts.pory"

# 164 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherExitRight:
# 165 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 166 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 167 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 168 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 169 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 170 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 171 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 172 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 173 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 174 "data/maps/PetalburgWoods/scripts.pory"

# 175 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_WatchResearcherLeave:
# 176 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 177 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 178 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 179 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 180 "data/maps/PetalburgWoods/scripts.pory"

# 181 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerLeft:
# 182 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 183 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 184 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 185 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_left
# 186 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 187 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 188 "data/maps/PetalburgWoods/scripts.pory"

# 189 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherFleeToPlayerRight:
# 190 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 191 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_right
# 192 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_up
# 193 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 194 "data/maps/PetalburgWoods/scripts.pory"

# 195 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_DevonResearcherStartExit:
# 196 "data/maps/PetalburgWoods/scripts.pory"
	walk_in_place_faster_down
# 197 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 198 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 199 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 200 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 201 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 202 "data/maps/PetalburgWoods/scripts.pory"
	face_up
# 203 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 204 "data/maps/PetalburgWoods/scripts.pory"

# 205 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherLeft:
# 206 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 207 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 208 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 209 "data/maps/PetalburgWoods/scripts.pory"

# 210 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaBackOff:
# 211 "data/maps/PetalburgWoods/scripts.pory"
	lock_facing_direction
# 212 "data/maps/PetalburgWoods/scripts.pory"
	walk_up
# 213 "data/maps/PetalburgWoods/scripts.pory"
	unlock_facing_direction
# 214 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 215 "data/maps/PetalburgWoods/scripts.pory"

# 216 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaRunAway:
# 217 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 218 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 219 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 220 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 221 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_up
# 222 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 223 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 224 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 225 "data/maps/PetalburgWoods/scripts.pory"

# 226 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachResearcherRight:
# 227 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 228 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 229 "data/maps/PetalburgWoods/scripts.pory"
	walk_fast_down
# 230 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 231 "data/maps/PetalburgWoods/scripts.pory"

# 232 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaEntrance:
# 233 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 234 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 235 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 236 "data/maps/PetalburgWoods/scripts.pory"
	delay_16
# 237 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 238 "data/maps/PetalburgWoods/scripts.pory"

# 239 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Movement_AquaApproachPlayer:
# 240 "data/maps/PetalburgWoods/scripts.pory"
	walk_down
# 241 "data/maps/PetalburgWoods/scripts.pory"
	step_end
# 242 "data/maps/PetalburgWoods/scripts.pory"

# 243 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy1::
# 244 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_StayOutOfTallGrass, MSGBOX_NPC
# 245 "data/maps/PetalburgWoods/scripts.pory"
	end
# 246 "data/maps/PetalburgWoods/scripts.pory"

# 247 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Boy2::
# 248 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_HiddenItemsExplanation, MSGBOX_NPC
# 249 "data/maps/PetalburgWoods/scripts.pory"
	end
# 250 "data/maps/PetalburgWoods/scripts.pory"

# 251 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Girl::
# 252 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 253 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 254 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_RECEIVED_MIRACLE_SEED, PetalburgWoods_EventScript_ExplainMiracleSeed
# 255 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TryUsingThisItem, MSGBOX_DEFAULT
# 256 "data/maps/PetalburgWoods/scripts.pory"
	giveitem ITEM_MIRACLE_SEED
# 257 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 258 "data/maps/PetalburgWoods/scripts.pory"
	setflag FLAG_RECEIVED_MIRACLE_SEED
# 259 "data/maps/PetalburgWoods/scripts.pory"
	release
# 260 "data/maps/PetalburgWoods/scripts.pory"
	end
# 261 "data/maps/PetalburgWoods/scripts.pory"

# 262 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_ExplainMiracleSeed::
# 263 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_MiracleSeedExplanation, MSGBOX_DEFAULT
# 264 "data/maps/PetalburgWoods/scripts.pory"
	release
# 265 "data/maps/PetalburgWoods/scripts.pory"
	end
# 266 "data/maps/PetalburgWoods/scripts.pory"

# 267 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign1::
# 268 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsExperience, MSGBOX_SIGN
# 269 "data/maps/PetalburgWoods/scripts.pory"
	end
# 270 "data/maps/PetalburgWoods/scripts.pory"

# 271 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Sign2::
# 272 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_TrainerTipsPP, MSGBOX_SIGN
# 273 "data/maps/PetalburgWoods/scripts.pory"
	end
# 274 "data/maps/PetalburgWoods/scripts.pory"

# 275 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_Lyle::
# 276 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_LYLE, PetalburgWoods_Text_GoBugPokemonTeam, PetalburgWoods_Text_ICouldntWin
# 277 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_ImOutOfPokeBalls, MSGBOX_AUTOCLOSE
# 278 "data/maps/PetalburgWoods/scripts.pory"
	end
# 279 "data/maps/PetalburgWoods/scripts.pory"

# 280 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_James::
# 281 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_JAMES_1, PetalburgWoods_Text_InstantlyPopularWithBugPokemon, PetalburgWoods_Text_CantBePopularIfILose, PetalburgWoods_EventScript_TryRegisterJames
# 282 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 283 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, PetalburgWoods_EventScript_JamesRematch
# 284 "data/maps/PetalburgWoods/scripts.pory"
	setvar VAR_0x8004, TRAINER_JAMES_1
# 285 "data/maps/PetalburgWoods/scripts.pory"
	specialvar VAR_RESULT, IsTrainerRegistered
# 286 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, PetalburgWoods_EventScript_TryRegisterJames2
# 287 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 288 "data/maps/PetalburgWoods/scripts.pory"
	release
# 289 "data/maps/PetalburgWoods/scripts.pory"
	end
# 290 "data/maps/PetalburgWoods/scripts.pory"

# 291 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames::
# 292 "data/maps/PetalburgWoods/scripts.pory"
	special PlayerFaceTrainerAfterBattle
# 293 "data/maps/PetalburgWoods/scripts.pory"
	waitmovement 0
# 294 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames
# 295 "data/maps/PetalburgWoods/scripts.pory"
	release
# 296 "data/maps/PetalburgWoods/scripts.pory"
	end
# 297 "data/maps/PetalburgWoods/scripts.pory"

# 298 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames::
# 299 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch1, MSGBOX_DEFAULT
# 300 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 301 "data/maps/PetalburgWoods/scripts.pory"
	release
# 302 "data/maps/PetalburgWoods/scripts.pory"
	end
# 303 "data/maps/PetalburgWoods/scripts.pory"

# 304 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_TryRegisterJames2::
# 305 "data/maps/PetalburgWoods/scripts.pory"
	goto_if_set FLAG_HAS_MATCH_CALL, PetalburgWoods_EventScript_RegisterJames2
# 306 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_PeopleRespectYou, MSGBOX_DEFAULT
# 307 "data/maps/PetalburgWoods/scripts.pory"
	release
# 308 "data/maps/PetalburgWoods/scripts.pory"
	end
# 309 "data/maps/PetalburgWoods/scripts.pory"

# 310 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_RegisterJames2::
# 311 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IWantRematch2, MSGBOX_DEFAULT
# 312 "data/maps/PetalburgWoods/scripts.pory"
	register_matchcall TRAINER_JAMES_1
# 313 "data/maps/PetalburgWoods/scripts.pory"
	release
# 314 "data/maps/PetalburgWoods/scripts.pory"
	end
# 315 "data/maps/PetalburgWoods/scripts.pory"

# 316 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_EventScript_JamesRematch::
# 317 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_rematch TRAINER_JAMES_1, PetalburgWoods_Text_MyPokemonHaveGrown, PetalburgWoods_Text_CantBePopularIfLose
# 318 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_IveBeenTrainingHard, MSGBOX_AUTOCLOSE
# 319 "data/maps/PetalburgWoods/scripts.pory"
	end
# 320 "data/maps/PetalburgWoods/scripts.pory"

# 321 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NotAOneToBeFound:
# 322 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hmmm…\n"
# 323 "data/maps/PetalburgWoods/scripts.pory"
	.string "Not a one to be found…$"
# 324 "data/maps/PetalburgWoods/scripts.pory"

# 325 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HaveYouSeenShroomish:
# 326 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hello, have you seen any Pokémon\n"
# 327 "data/maps/PetalburgWoods/scripts.pory"
	.string "called SHROOMISH around here?\p"
# 328 "data/maps/PetalburgWoods/scripts.pory"
	.string "I really love that Pokémon.$"
# 329 "data/maps/PetalburgWoods/scripts.pory"

# 330 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWasGoingToAmbushYou:
# 331 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was going to ambush you, but you\n"
# 332 "data/maps/PetalburgWoods/scripts.pory"
	.string "had to dawdle in PETALBURG WOODS\l"
# 333 "data/maps/PetalburgWoods/scripts.pory"
	.string "forever, didn't you?\p"
# 334 "data/maps/PetalburgWoods/scripts.pory"
	.string "I got sick of waiting, so here I am!$"
# 335 "data/maps/PetalburgWoods/scripts.pory"

# 336 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HandOverThosePapers:
# 337 "data/maps/PetalburgWoods/scripts.pory"
	.string "You! DEVON RESEARCHER!\p"
# 338 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hand over those papers!$"
# 339 "data/maps/PetalburgWoods/scripts.pory"

# 340 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouHaveToHelpMe:
# 341 "data/maps/PetalburgWoods/scripts.pory"
	.string "Aiyeeeh!\p"
# 342 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're a Pokémon TRAINER, aren't you?\n"
# 343 "data/maps/PetalburgWoods/scripts.pory"
	.string "You've got to help me, please!$"
# 344 "data/maps/PetalburgWoods/scripts.pory"

# 345 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_NoOneCrossesTeamAqua:
# 346 "data/maps/PetalburgWoods/scripts.pory"
	.string "Hunh? What do you think you're doing?\n"
# 347 "data/maps/PetalburgWoods/scripts.pory"
	.string "What, you're going to protect him?\p"
# 348 "data/maps/PetalburgWoods/scripts.pory"
	.string "No one who crosses TEAM AQUA\n"
# 349 "data/maps/PetalburgWoods/scripts.pory"
	.string "gets any mercy, not even a kid!\p"
# 350 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me!$"
# 351 "data/maps/PetalburgWoods/scripts.pory"

# 352 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureKiddingMe:
# 353 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're kidding me! You're tough!$"
# 354 "data/maps/PetalburgWoods/scripts.pory"

# 355 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YouveGotSomeNerve:
# 356 "data/maps/PetalburgWoods/scripts.pory"
	.string "Grrr… You've got some nerve\n"
# 357 "data/maps/PetalburgWoods/scripts.pory"
	.string "meddling with TEAM AQUA!\l"
# 358 "data/maps/PetalburgWoods/scripts.pory"
	.string "Come on and battle me again!\p"
# 359 "data/maps/PetalburgWoods/scripts.pory"
	.string "I wish I could say that, but I'm out of\n"
# 360 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon…\p"
# 361 "data/maps/PetalburgWoods/scripts.pory"
	.string "And, hey, we of TEAM AQUA are also\n"
# 362 "data/maps/PetalburgWoods/scripts.pory"
	.string "after something in RUSTBORO.\p"
# 363 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll let you go today!$"
# 364 "data/maps/PetalburgWoods/scripts.pory"

# 365 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ThatWasAwfullyClose:
# 366 "data/maps/PetalburgWoods/scripts.pory"
	.string "Whew…\n"
# 367 "data/maps/PetalburgWoods/scripts.pory"
	.string "That was awfully close!\p"
# 368 "data/maps/PetalburgWoods/scripts.pory"
	.string "Thanks to you, he didn't rob me of\n"
# 369 "data/maps/PetalburgWoods/scripts.pory"
	.string "these important papers.\p"
# 370 "data/maps/PetalburgWoods/scripts.pory"
	.string "I know, I'll give you a GREAT BALL as\n"
# 371 "data/maps/PetalburgWoods/scripts.pory"
	.string "my thanks!$"
# 372 "data/maps/PetalburgWoods/scripts.pory"

# 373 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TeamAquaAfterSomethingInRustboro:
# 374 "data/maps/PetalburgWoods/scripts.pory"
	.string "Didn't that TEAM AQUA thug say\n"
# 375 "data/maps/PetalburgWoods/scripts.pory"
	.string "they were after something in\l"
# 376 "data/maps/PetalburgWoods/scripts.pory"
	.string "RUSTBORO, too?$"
# 377 "data/maps/PetalburgWoods/scripts.pory"

# 378 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICantBeWastingTime:
# 379 "data/maps/PetalburgWoods/scripts.pory"
	.string "Uh-oh! It's a crisis!\n"
# 380 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be wasting time!$"
# 381 "data/maps/PetalburgWoods/scripts.pory"

# 382 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_YoureLoadedWithItems:
# 383 "data/maps/PetalburgWoods/scripts.pory"
	.string "You're loaded with items.\n"
# 384 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't give you this GREAT BALL.$"
# 385 "data/maps/PetalburgWoods/scripts.pory"

# 386 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_GoBugPokemonTeam:
# 387 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a whole bunch of Pokémon!\p"
# 388 "data/maps/PetalburgWoods/scripts.pory"
	.string "Go, go, go!\n"
# 389 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG Pokémon team!$"
# 390 "data/maps/PetalburgWoods/scripts.pory"

# 391 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ICouldntWin:
# 392 "data/maps/PetalburgWoods/scripts.pory"
	.string "I have all these Pokémon,\n"
# 393 "data/maps/PetalburgWoods/scripts.pory"
	.string "but I couldn't win…$"
# 394 "data/maps/PetalburgWoods/scripts.pory"

# 395 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_ImOutOfPokeBalls:
# 396 "data/maps/PetalburgWoods/scripts.pory"
	.string "I caught a bunch of Pokémon.\n"
# 397 "data/maps/PetalburgWoods/scripts.pory"
	.string "Now I'm out of POKé BALLS.$"
# 398 "data/maps/PetalburgWoods/scripts.pory"

# 399 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_InstantlyPopularWithBugPokemon:
# 400 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you take BUG Pokémon to school,\n"
# 401 "data/maps/PetalburgWoods/scripts.pory"
	.string "you get to be instantly popular!$"
# 402 "data/maps/PetalburgWoods/scripts.pory"

# 403 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfILose:
# 404 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 405 "data/maps/PetalburgWoods/scripts.pory"

# 406 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_PeopleRespectYou:
# 407 "data/maps/PetalburgWoods/scripts.pory"
	.string "If you have a big BUG Pokémon,\n"
# 408 "data/maps/PetalburgWoods/scripts.pory"
	.string "people respect you for it.$"
# 409 "data/maps/PetalburgWoods/scripts.pory"

# 410 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch1:
# 411 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG\n"
# 412 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon grow up!\p"
# 413 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 414 "data/maps/PetalburgWoods/scripts.pory"

# 415 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IWantRematch2:
# 416 "data/maps/PetalburgWoods/scripts.pory"
	.string "I want a rematch when my BUG \n"
# 417 "data/maps/PetalburgWoods/scripts.pory"
	.string "Pokémon grow up!\p"
# 418 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm registering you in my POKéNAV!$"
# 419 "data/maps/PetalburgWoods/scripts.pory"

# 420 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MyPokemonHaveGrown:
# 421 "data/maps/PetalburgWoods/scripts.pory"
	.string "My BUG Pokémon have grown.\n"
# 422 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'll be popular again.$"
# 423 "data/maps/PetalburgWoods/scripts.pory"

# 424 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_CantBePopularIfLose:
# 425 "data/maps/PetalburgWoods/scripts.pory"
	.string "I can't be popular if I lose.$"
# 426 "data/maps/PetalburgWoods/scripts.pory"

# 427 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_IveBeenTrainingHard:
# 428 "data/maps/PetalburgWoods/scripts.pory"
	.string "You get to be popular if you have\n"
# 429 "data/maps/PetalburgWoods/scripts.pory"
	.string "strong Pokémon, right?\l"
# 430 "data/maps/PetalburgWoods/scripts.pory"
	.string "So, I've been training hard.$"
# 431 "data/maps/PetalburgWoods/scripts.pory"

# 432 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_StayOutOfTallGrass:
# 433 "data/maps/PetalburgWoods/scripts.pory"
	.string "Yo, there!\n"
# 434 "data/maps/PetalburgWoods/scripts.pory"
	.string "Your Pokémon doing okay?\p"
# 435 "data/maps/PetalburgWoods/scripts.pory"
	.string "If your Pokémon are weak and you want\n"
# 436 "data/maps/PetalburgWoods/scripts.pory"
	.string "to avoid battles, you should stay out\l"
# 437 "data/maps/PetalburgWoods/scripts.pory"
	.string "of tall grass.$"
# 438 "data/maps/PetalburgWoods/scripts.pory"

# 439 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_HiddenItemsExplanation:
# 440 "data/maps/PetalburgWoods/scripts.pory"
	.string "Sometimes, there are things on the\n"
# 441 "data/maps/PetalburgWoods/scripts.pory"
	.string "ground even if you can't see them.\p"
# 442 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's why I always check where I'm\n"
# 443 "data/maps/PetalburgWoods/scripts.pory"
	.string "walking.$"
# 444 "data/maps/PetalburgWoods/scripts.pory"

# 445 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TryUsingThisItem:
# 446 "data/maps/PetalburgWoods/scripts.pory"
	.string "Oh, neat!\n"
# 447 "data/maps/PetalburgWoods/scripts.pory"
	.string "That's the BADGE from RUSTBORO GYM!\p"
# 448 "data/maps/PetalburgWoods/scripts.pory"
	.string "You must be a TRAINER.\n"
# 449 "data/maps/PetalburgWoods/scripts.pory"
	.string "You should try using this item.$"
# 450 "data/maps/PetalburgWoods/scripts.pory"

# 451 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_MiracleSeedExplanation:
# 452 "data/maps/PetalburgWoods/scripts.pory"
	.string "It's a MIRACLE SEED.\n"
# 453 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a Pokémon holds that item, its\l"
# 454 "data/maps/PetalburgWoods/scripts.pory"
	.string "GRASS-type moves become stronger.\p"
# 455 "data/maps/PetalburgWoods/scripts.pory"
	.string "Besides MIRACLE SEED, I think there are\n"
# 456 "data/maps/PetalburgWoods/scripts.pory"
	.string "other convenient items for Pokémon\l"
# 457 "data/maps/PetalburgWoods/scripts.pory"
	.string "to hold.$"
# 458 "data/maps/PetalburgWoods/scripts.pory"

# 459 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsExperience:
# 460 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 461 "data/maps/PetalburgWoods/scripts.pory"
	.string "Any Pokémon that appears even once\n"
# 462 "data/maps/PetalburgWoods/scripts.pory"
	.string "in a battle is awarded EXP Points.\p"
# 463 "data/maps/PetalburgWoods/scripts.pory"
	.string "To raise a weak Pokémon, put it at the\n"
# 464 "data/maps/PetalburgWoods/scripts.pory"
	.string "left of the team list.\p"
# 465 "data/maps/PetalburgWoods/scripts.pory"
	.string "As soon as a battle starts, switch it\n"
# 466 "data/maps/PetalburgWoods/scripts.pory"
	.string "out. It will earn EXP Points without\l"
# 467 "data/maps/PetalburgWoods/scripts.pory"
	.string "being exposed to any harm.$"
# 468 "data/maps/PetalburgWoods/scripts.pory"

# 469 "data/maps/PetalburgWoods/scripts.pory"
PetalburgWoods_Text_TrainerTipsPP:
# 470 "data/maps/PetalburgWoods/scripts.pory"
	.string "TRAINER TIPS\p"
# 471 "data/maps/PetalburgWoods/scripts.pory"
	.string "In addition to Hit Points (HP), Pokémon\n"
# 472 "data/maps/PetalburgWoods/scripts.pory"
	.string "have Power Points (PP) that are used to\l"
# 473 "data/maps/PetalburgWoods/scripts.pory"
	.string "make moves during battle.\p"
# 474 "data/maps/PetalburgWoods/scripts.pory"
	.string "If a Pokémon runs out of PP, it must be\n"
# 475 "data/maps/PetalburgWoods/scripts.pory"
	.string "taken to a Pokémon CENTER.$"

PetalburgWoods_EventScript_Camper::
# 480 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 481 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 482 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_Camper_Text_0
# 483 "data/maps/PetalburgWoods/scripts.pory"
	release
	return


PetalburgWoods_EventScript_Youngster::
# 487 "data/maps/PetalburgWoods/scripts.pory"
	lock
# 488 "data/maps/PetalburgWoods/scripts.pory"
	faceplayer
# 489 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_EventScript_Youngster_Text_0
# 490 "data/maps/PetalburgWoods/scripts.pory"
	release
	return


PetalburgWoods_EventScript_BugCatcherBattle::
# 494 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_BUGCATCHER_TIM, Tim_Intro, Tim_Outro
# 495 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PostBattle_Tim, MSGBOX_AUTOCLOSE
# 496 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	end


PetalburgWoods_EventScript_RangerBattle::
# 511 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_THALIA_5, Alan_Intro, Alan_Outro
# 512 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PostBattle_Alan, MSGBOX_AUTOCLOSE
# 513 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	end


PetalburgWoods_EventScript_ExpertBattle::
# 527 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_EXPERT_BARBARA, Barbara_Intro, Barbara_Outro
# 528 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PostBattle_Barbara, MSGBOX_AUTOCLOSE
# 529 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	end


PetalburgWoods_EventScript_KindlerBattle::
# 543 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_KINDLER_MORTIMER, Mortimer_Intro, Mortimer_Outro
# 544 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PostBattle_Mortimer, MSGBOX_AUTOCLOSE
# 545 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	end


PetalburgWoods_EventScript_ScientistBattle::
# 559 "data/maps/PetalburgWoods/scripts.pory"
	trainerbattle_single TRAINER_SCIENTIST_CARSON, Carson_Intro, Carson_Outro
# 560 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PostBattle_Carson, MSGBOX_AUTOCLOSE
# 561 "data/maps/PetalburgWoods/scripts.pory"
	waitmessage
	end


PetalburgWoods_Text_WarningSign::
# 575 "data/maps/PetalburgWoods/scripts.pory"
	lockall
# 576 "data/maps/PetalburgWoods/scripts.pory"
	msgbox PetalburgWoods_Text_WarningSign_Text_0
# 577 "data/maps/PetalburgWoods/scripts.pory"
	releaseall
	return


PetalburgWoods_EventScript_Camper_Text_0:
# 482 "data/maps/PetalburgWoods/scripts.pory"
	.string "I was hoping to set up a tent and camp\n"
	.string "for the night. Good thing there's so\l"
	.string "much clear space!$"

PetalburgWoods_EventScript_Youngster_Text_0:
# 489 "data/maps/PetalburgWoods/scripts.pory"
	.string "So many trees have been chopped down\n"
	.string "here. Just look at all these stumps!$"

PetalburgWoods_Text_WarningSign_Text_0:
# 576 "data/maps/PetalburgWoods/scripts.pory"
	.string "Treefall Woods: Watch out for\n"
	.string "abandoned machinery!$"

Tim_Intro::
# 500 "data/maps/PetalburgWoods/scripts.pory"
	.string "After people cut down trees, bugs and\n"
	.string "mushrooms started to move in.\p"
	.string "Check out some of mine!$"

Tim_Outro::
# 503 "data/maps/PetalburgWoods/scripts.pory"
	.string "Think of the bugs!$"

PostBattle_Tim::
# 506 "data/maps/PetalburgWoods/scripts.pory"
	.string "Even though many other Pokémon were\n"
	.string "driven away, a few species remain.\p"
	.string "This forest is not nearly as lively as it\n"
	.string "once was.$"

Alan_Intro::
# 516 "data/maps/PetalburgWoods/scripts.pory"
	.string "I'm here to study how cutting down\n"
	.string "trees impacts the hydrologic cycle. Will\l"
	.string "you help my research?$"

Alan_Outro::
# 519 "data/maps/PetalburgWoods/scripts.pory"
	.string "Washed away!$"

PostBattle_Alan::
# 522 "data/maps/PetalburgWoods/scripts.pory"
	.string "Parts of Ecodia are experiencing\n"
	.string "severe flooding. It seems planting\l"
	.string "trees may help mitigate the effects of\l"
	.string "rainfall.$"

Barbara_Intro::
# 532 "data/maps/PetalburgWoods/scripts.pory"
	.string "I used to play here as a child. Where\n"
	.string "have all of the trees gone?$"

Barbara_Outro::
# 535 "data/maps/PetalburgWoods/scripts.pory"
	.string "So it wasn't you who cut them down?$"

PostBattle_Barbara::
# 538 "data/maps/PetalburgWoods/scripts.pory"
	.string "When I find who defiled my beloved\n"
	.string "forest, they'll suffer!$"

Mortimer_Intro::
# 548 "data/maps/PetalburgWoods/scripts.pory"
	.string "My fire Pokémon will help me scorch the\n"
	.string "remnants of this forest!$"

Mortimer_Outro::
# 551 "data/maps/PetalburgWoods/scripts.pory"
	.string "You have only slowed my burn!$"

PostBattle_Mortimer::
# 554 "data/maps/PetalburgWoods/scripts.pory"
	.string "I guess there isn't much left to burn,\n"
	.string "huh?$"

Carson_Intro::
# 564 "data/maps/PetalburgWoods/scripts.pory"
	.string "With these tools I have collected, I can\n"
	.string "maximize my economic production!$"

Carson_Outro::
# 567 "data/maps/PetalburgWoods/scripts.pory"
	.string "You can defeat my Pokémon, but not my\n"
	.string "machines!$"

PostBattle_Carson::
# 570 "data/maps/PetalburgWoods/scripts.pory"
	.string "How much do you think this lumber is\n"
	.string "worth?$"
