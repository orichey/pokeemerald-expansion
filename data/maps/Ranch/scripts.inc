# 1 "data/maps/Ranch/scripts.pory"

# 2 "data/maps/Ranch/scripts.pory"
Ranch_MapScripts::
# 3 "data/maps/Ranch/scripts.pory"
    map_script MAP_SCRIPT_ON_TRANSITION, Ranch_OnTransition
# 4 "data/maps/Ranch/scripts.pory"
	.byte 0
# 5 "data/maps/Ranch/scripts.pory"

# 6 "data/maps/Ranch/scripts.pory"
Ranch_OnTransition:
# 7 "data/maps/Ranch/scripts.pory"
	call_if_set FLAG_FARMER_SPEECH, Ranch_EventScript_RelocateEveryone
# 8 "data/maps/Ranch/scripts.pory"
    call_if_set FLAG_TORCHIC_RESCUE, Ranch_EventScript_SetUpFirstBattle
# 9 "data/maps/Ranch/scripts.pory"
    call_if_set FLAG_PROTEST_WIN_1, Ranch_EventScript_ProtestWin1
# 10 "data/maps/Ranch/scripts.pory"
    call_if_set FLAG_FARMER_WIN_1, Ranch_EventScript_FarmerWin1
# 11 "data/maps/Ranch/scripts.pory"
    call_if_set FLAG_PROTEST_WIN_2, Ranch_EventScript_ProtestWin2
# 12 "data/maps/Ranch/scripts.pory"
    call_if_set FLAG_FARMER_WIN_2, Ranch_EventScript_FarmerWin2
# 13 "data/maps/Ranch/scripts.pory"
    call_if_set FLAG_PROTEST_WIN_3, Ranch_EventScript_ProtestWin3
# 14 "data/maps/Ranch/scripts.pory"
    call_if_set FLAG_FARMER_WIN_3, Ranch_EventScript_FarmerWin3
# 15 "data/maps/Ranch/scripts.pory"
    call_if_set FLAG_PROTEST_WIN_4, Ranch_EventScript_ProtestWin4
# 16 "data/maps/Ranch/scripts.pory"
    call_if_set FLAG_FARMER_WIN_4, Ranch_EventScript_FarmerWin4
# 17 "data/maps/Ranch/scripts.pory"
    call_if_set FLAG_PROTEST_WIN_5, Ranch_EventScript_ProtestWin5
# 18 "data/maps/Ranch/scripts.pory"
    call_if_set FLAG_FARMER_WIN_5, Ranch_EventScript_FarmerWin5
# 19 "data/maps/Ranch/scripts.pory"
    call_if_set FLAG_PROTEST_WIN_6, Ranch_EventScript_ProtestWin6
# 20 "data/maps/Ranch/scripts.pory"
    call_if_set FLAG_FARMER_WIN_6, Ranch_EventScript_FarmerWin6
# 21 "data/maps/Ranch/scripts.pory"
    call_if_set FLAG_PROTEST_WIN_7, Ranch_EventScript_ProtestWin7
# 22 "data/maps/Ranch/scripts.pory"
    call_if_set FLAG_FARMER_WIN_7, Ranch_EventScript_FarmerWin7
# 23 "data/maps/Ranch/scripts.pory"
	end

Ranch_EventScript_ProtestWin1::
# 26 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 29, 18, 66
# 27 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 29, MOVEMENT_TYPE_WANDER_AROUND
# 28 "data/maps/Ranch/scripts.pory"
	addobject 29
	return


Ranch_EventScript_FarmerWin1::
# 32 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 30, 19, 66
# 33 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 30, MOVEMENT_TYPE_WANDER_AROUND
# 34 "data/maps/Ranch/scripts.pory"
	addobject 30
	return


Ranch_EventScript_ProtestWin2::
# 38 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 35, 57, 59
# 39 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 35, MOVEMENT_TYPE_WANDER_AROUND
# 40 "data/maps/Ranch/scripts.pory"
	addobject 35
	return


Ranch_EventScript_FarmerWin2::
# 44 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 34, 56, 59
# 45 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 34, MOVEMENT_TYPE_WANDER_AROUND
# 46 "data/maps/Ranch/scripts.pory"
	addobject 34
	return


Ranch_EventScript_ProtestWin3::
# 50 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 18, 36, 50
# 51 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 18, MOVEMENT_TYPE_WANDER_AROUND
# 52 "data/maps/Ranch/scripts.pory"
	addobject 18
	return


Ranch_EventScript_FarmerWin3::
# 56 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 17, 36, 49
# 57 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 17, MOVEMENT_TYPE_WANDER_AROUND
# 58 "data/maps/Ranch/scripts.pory"
	addobject 17
	return


Ranch_EventScript_ProtestWin4::
# 62 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 20, 66, 38
# 63 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 20, MOVEMENT_TYPE_WANDER_AROUND
# 64 "data/maps/Ranch/scripts.pory"
	addobject 20
	return


Ranch_EventScript_FarmerWin4::
# 68 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 19, 66, 37
# 69 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 19, MOVEMENT_TYPE_WANDER_AROUND
# 70 "data/maps/Ranch/scripts.pory"
	addobject 19
	return


Ranch_EventScript_ProtestWin5::
# 74 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 41, 67, 31
# 75 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 41, MOVEMENT_TYPE_WANDER_AROUND
# 76 "data/maps/Ranch/scripts.pory"
	addobject 41
	return


Ranch_EventScript_FarmerWin5::
# 80 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 40, 68, 31
# 81 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 40, MOVEMENT_TYPE_WANDER_AROUND
# 82 "data/maps/Ranch/scripts.pory"
	addobject 40
	return


Ranch_EventScript_ProtestWin6::
# 86 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 26, 58, 18
# 87 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 26, MOVEMENT_TYPE_WANDER_AROUND
# 88 "data/maps/Ranch/scripts.pory"
	addobject 26
	return


Ranch_EventScript_FarmerWin6::
# 92 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 25, 59, 18
# 93 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 25, MOVEMENT_TYPE_WANDER_AROUND
# 94 "data/maps/Ranch/scripts.pory"
	addobject 25
	return


Ranch_EventScript_ProtestWin7::
# 98 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 28, 27, 48
# 99 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 28, MOVEMENT_TYPE_WANDER_AROUND
# 100 "data/maps/Ranch/scripts.pory"
	addobject 28
	return


Ranch_EventScript_FarmerWin7::
# 104 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 27, 26, 48
# 105 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 27, MOVEMENT_TYPE_WANDER_AROUND
# 106 "data/maps/Ranch/scripts.pory"
	addobject 27
	return


Ranch_EventScript_EnterTop::
# 110 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_ABSOL_ENTER, Ranch_EventScript_EnterTop_2
Ranch_EventScript_EnterTop_1:
# 161 "data/maps/Ranch/scripts.pory"
	release
	return

Ranch_EventScript_EnterTop_2:
# 111 "data/maps/Ranch/scripts.pory"
	lockall
# 112 "data/maps/Ranch/scripts.pory"
	applymovement 1, AbsolDownTop
# 113 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 114 "data/maps/Ranch/scripts.pory"
	delay 120
# 115 "data/maps/Ranch/scripts.pory"
	playmoncry SPECIES_ABSOL, CRY_MODE_NORMAL
# 116 "data/maps/Ranch/scripts.pory"
	waitmoncry
# 117 "data/maps/Ranch/scripts.pory"
	delay 60
# 118 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 119 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 120 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 121 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 122 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 123 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 124 "data/maps/Ranch/scripts.pory"
	delay 30
# 125 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_EnterTop_Text_0
# 126 "data/maps/Ranch/scripts.pory"
	closemessage
# 127 "data/maps/Ranch/scripts.pory"
	delay 30
# 128 "data/maps/Ranch/scripts.pory"
	applymovement 1, AbsolJump
# 129 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 130 "data/maps/Ranch/scripts.pory"
	waitse
# 131 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 132 "data/maps/Ranch/scripts.pory"
	waitse
# 133 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 134 "data/maps/Ranch/scripts.pory"
	delay 30
# 135 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_EnterTop_Text_1
# 136 "data/maps/Ranch/scripts.pory"
	closemessage
# 137 "data/maps/Ranch/scripts.pory"
	delay 15
# 138 "data/maps/Ranch/scripts.pory"
	givemon SPECIES_ABSOL, 20, 0, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_DOUBLE_TEAM, MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_DETECT
# 139 "data/maps/Ranch/scripts.pory"
	applymovement 1, AbsolJump
# 140 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 141 "data/maps/Ranch/scripts.pory"
	waitse
# 142 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 143 "data/maps/Ranch/scripts.pory"
	waitse
# 144 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 145 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 146 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 147 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 148 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 149 "data/maps/Ranch/scripts.pory"
	delay 10
# 150 "data/maps/Ranch/scripts.pory"
	removeobject 1
# 151 "data/maps/Ranch/scripts.pory"
	delay 5
# 152 "data/maps/Ranch/scripts.pory"
	playse SE_BALL
# 153 "data/maps/Ranch/scripts.pory"
	waitse
# 154 "data/maps/Ranch/scripts.pory"
	setflag FLAG_ABSOL_ENTER
# 155 "data/maps/Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 156 "data/maps/Ranch/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 157 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_MORALITY_SYSTEM, 10
# 158 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_STATE, 1
# 159 "data/maps/Ranch/scripts.pory"
	callnative UpdateFollowingPokemon
	goto Ranch_EventScript_EnterTop_1


Ranch_EventScript_EnterTopMiddle::
# 165 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_ABSOL_ENTER, Ranch_EventScript_EnterTopMiddle_2
Ranch_EventScript_EnterTopMiddle_1:
# 216 "data/maps/Ranch/scripts.pory"
	release
	return

Ranch_EventScript_EnterTopMiddle_2:
# 166 "data/maps/Ranch/scripts.pory"
	lockall
# 167 "data/maps/Ranch/scripts.pory"
	applymovement 1, AbsolDownTopMiddle
# 168 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 169 "data/maps/Ranch/scripts.pory"
	delay 120
# 170 "data/maps/Ranch/scripts.pory"
	playmoncry SPECIES_ABSOL, CRY_MODE_NORMAL
# 171 "data/maps/Ranch/scripts.pory"
	waitmoncry
# 172 "data/maps/Ranch/scripts.pory"
	delay 60
# 173 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 174 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 175 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 176 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 177 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 178 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 179 "data/maps/Ranch/scripts.pory"
	delay 30
# 180 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_EnterTop_Text_0
# 181 "data/maps/Ranch/scripts.pory"
	closemessage
# 182 "data/maps/Ranch/scripts.pory"
	delay 30
# 183 "data/maps/Ranch/scripts.pory"
	applymovement 1, AbsolJump
# 184 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 185 "data/maps/Ranch/scripts.pory"
	waitse
# 186 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 187 "data/maps/Ranch/scripts.pory"
	waitse
# 188 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 189 "data/maps/Ranch/scripts.pory"
	delay 30
# 190 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_EnterTop_Text_1
# 191 "data/maps/Ranch/scripts.pory"
	closemessage
# 192 "data/maps/Ranch/scripts.pory"
	delay 15
# 193 "data/maps/Ranch/scripts.pory"
	givemon SPECIES_ABSOL, 20, 0, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_DOUBLE_TEAM, MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_DETECT
# 194 "data/maps/Ranch/scripts.pory"
	applymovement 1, AbsolJump
# 195 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 196 "data/maps/Ranch/scripts.pory"
	waitse
# 197 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 198 "data/maps/Ranch/scripts.pory"
	waitse
# 199 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 200 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 201 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 202 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 203 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 204 "data/maps/Ranch/scripts.pory"
	delay 10
# 205 "data/maps/Ranch/scripts.pory"
	removeobject 1
# 206 "data/maps/Ranch/scripts.pory"
	delay 5
# 207 "data/maps/Ranch/scripts.pory"
	playse SE_BALL
# 208 "data/maps/Ranch/scripts.pory"
	waitse
# 209 "data/maps/Ranch/scripts.pory"
	setflag FLAG_ABSOL_ENTER
# 210 "data/maps/Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 211 "data/maps/Ranch/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 212 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_MORALITY_SYSTEM, 10
# 213 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_STATE, 0
# 214 "data/maps/Ranch/scripts.pory"
	callnative UpdateFollowingPokemon
	goto Ranch_EventScript_EnterTopMiddle_1


Ranch_EventScript_EnterBottomMiddle::
# 220 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_ABSOL_ENTER, Ranch_EventScript_EnterBottomMiddle_2
Ranch_EventScript_EnterBottomMiddle_1:
# 275 "data/maps/Ranch/scripts.pory"
	release
	return

Ranch_EventScript_EnterBottomMiddle_2:
# 221 "data/maps/Ranch/scripts.pory"
	lockall
# 222 "data/maps/Ranch/scripts.pory"
	addobject 1
# 223 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 224 "data/maps/Ranch/scripts.pory"
	setobjectxy 1, 66, 66
# 225 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 226 "data/maps/Ranch/scripts.pory"
	applymovement 1, AbsolDownTop
# 227 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 228 "data/maps/Ranch/scripts.pory"
	delay 120
# 229 "data/maps/Ranch/scripts.pory"
	playmoncry SPECIES_ABSOL, CRY_MODE_NORMAL
# 230 "data/maps/Ranch/scripts.pory"
	waitmoncry
# 231 "data/maps/Ranch/scripts.pory"
	delay 60
# 232 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 233 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 234 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 235 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 236 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 237 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 238 "data/maps/Ranch/scripts.pory"
	delay 30
# 239 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_EnterTop_Text_0
# 240 "data/maps/Ranch/scripts.pory"
	closemessage
# 241 "data/maps/Ranch/scripts.pory"
	delay 30
# 242 "data/maps/Ranch/scripts.pory"
	applymovement 1, AbsolJump
# 243 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 244 "data/maps/Ranch/scripts.pory"
	waitse
# 245 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 246 "data/maps/Ranch/scripts.pory"
	waitse
# 247 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 248 "data/maps/Ranch/scripts.pory"
	delay 30
# 249 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_EnterTop_Text_1
# 250 "data/maps/Ranch/scripts.pory"
	closemessage
# 251 "data/maps/Ranch/scripts.pory"
	delay 15
# 252 "data/maps/Ranch/scripts.pory"
	givemon SPECIES_ABSOL, 20, 0, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_DOUBLE_TEAM, MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_DETECT
# 253 "data/maps/Ranch/scripts.pory"
	applymovement 1, AbsolJump
# 254 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 255 "data/maps/Ranch/scripts.pory"
	waitse
# 256 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 257 "data/maps/Ranch/scripts.pory"
	waitse
# 258 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 259 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 260 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 261 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 262 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 263 "data/maps/Ranch/scripts.pory"
	delay 10
# 264 "data/maps/Ranch/scripts.pory"
	removeobject 1
# 265 "data/maps/Ranch/scripts.pory"
	delay 5
# 266 "data/maps/Ranch/scripts.pory"
	playse SE_BALL
# 267 "data/maps/Ranch/scripts.pory"
	waitse
# 268 "data/maps/Ranch/scripts.pory"
	setflag FLAG_ABSOL_ENTER
# 269 "data/maps/Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 270 "data/maps/Ranch/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 271 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_MORALITY_SYSTEM, 10
# 272 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_STATE, 1
# 273 "data/maps/Ranch/scripts.pory"
	callnative UpdateFollowingPokemon
	goto Ranch_EventScript_EnterBottomMiddle_1


Ranch_EventScript_EnterBottom::
# 279 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_ABSOL_ENTER, Ranch_EventScript_EnterBottom_2
Ranch_EventScript_EnterBottom_1:
# 334 "data/maps/Ranch/scripts.pory"
	release
	return

Ranch_EventScript_EnterBottom_2:
# 280 "data/maps/Ranch/scripts.pory"
	lockall
# 281 "data/maps/Ranch/scripts.pory"
	addobject 1
# 282 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 283 "data/maps/Ranch/scripts.pory"
	setobjectxy 1, 66, 67
# 284 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 285 "data/maps/Ranch/scripts.pory"
	applymovement 1, AbsolDownTop
# 286 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 287 "data/maps/Ranch/scripts.pory"
	delay 120
# 288 "data/maps/Ranch/scripts.pory"
	playmoncry SPECIES_ABSOL, CRY_MODE_NORMAL
# 289 "data/maps/Ranch/scripts.pory"
	waitmoncry
# 290 "data/maps/Ranch/scripts.pory"
	delay 60
# 291 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 292 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 293 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkUp
# 294 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 295 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 296 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 297 "data/maps/Ranch/scripts.pory"
	delay 30
# 298 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_EnterTop_Text_0
# 299 "data/maps/Ranch/scripts.pory"
	closemessage
# 300 "data/maps/Ranch/scripts.pory"
	delay 30
# 301 "data/maps/Ranch/scripts.pory"
	applymovement 1, AbsolJump
# 302 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 303 "data/maps/Ranch/scripts.pory"
	waitse
# 304 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 305 "data/maps/Ranch/scripts.pory"
	waitse
# 306 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 307 "data/maps/Ranch/scripts.pory"
	delay 30
# 308 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_EnterTop_Text_1
# 309 "data/maps/Ranch/scripts.pory"
	closemessage
# 310 "data/maps/Ranch/scripts.pory"
	delay 15
# 311 "data/maps/Ranch/scripts.pory"
	givemon SPECIES_ABSOL, 20, 0, ITEM_POKE_BALL, NATURE_ADAMANT, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_DOUBLE_TEAM, MOVE_SWORDS_DANCE, MOVE_KNOCK_OFF, MOVE_DETECT
# 312 "data/maps/Ranch/scripts.pory"
	applymovement 1, AbsolJump
# 313 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 314 "data/maps/Ranch/scripts.pory"
	waitse
# 315 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 316 "data/maps/Ranch/scripts.pory"
	waitse
# 317 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 318 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 319 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 320 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkRight
# 321 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 322 "data/maps/Ranch/scripts.pory"
	delay 10
# 323 "data/maps/Ranch/scripts.pory"
	removeobject 1
# 324 "data/maps/Ranch/scripts.pory"
	delay 5
# 325 "data/maps/Ranch/scripts.pory"
	playse SE_BALL
# 326 "data/maps/Ranch/scripts.pory"
	waitse
# 327 "data/maps/Ranch/scripts.pory"
	setflag FLAG_ABSOL_ENTER
# 328 "data/maps/Ranch/scripts.pory"
	setflag FLAG_SYS_POKEMON_GET
# 329 "data/maps/Ranch/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 330 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_MORALITY_SYSTEM, 10
# 331 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_STATE, 1
# 332 "data/maps/Ranch/scripts.pory"
	callnative UpdateFollowingPokemon
	goto Ranch_EventScript_EnterBottom_1


# 337 "data/maps/Ranch/scripts.pory"
AbsolDownTop:
# 338 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 338 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 338 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 339 "data/maps/Ranch/scripts.pory"
	jump_2_down
# 340 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 340 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 340 "data/maps/Ranch/scripts.pory"
	walk_fast_down
	step_end

# 343 "data/maps/Ranch/scripts.pory"
AbsolDownTopMiddle:
# 344 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 344 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 344 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 345 "data/maps/Ranch/scripts.pory"
	jump_2_down
# 346 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 346 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 346 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 346 "data/maps/Ranch/scripts.pory"
	walk_fast_down
	step_end

# 349 "data/maps/Ranch/scripts.pory"
AbsolDownBottomMiddle:
# 350 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 350 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 350 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 351 "data/maps/Ranch/scripts.pory"
	jump_2_down
# 352 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 352 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 352 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 352 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 352 "data/maps/Ranch/scripts.pory"
	walk_fast_down
	step_end

# 355 "data/maps/Ranch/scripts.pory"
AbsolDownBottom:
# 356 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 356 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 356 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 357 "data/maps/Ranch/scripts.pory"
	jump_2_down
# 358 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 358 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 358 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 358 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 358 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 358 "data/maps/Ranch/scripts.pory"
	walk_fast_down
	step_end

# 361 "data/maps/Ranch/scripts.pory"
AbsolJump:
# 362 "data/maps/Ranch/scripts.pory"
	jump_in_place_right
# 362 "data/maps/Ranch/scripts.pory"
	jump_in_place_right
	step_end

Ranch_EventScript_ThirstyBoy::
# 366 "data/maps/Ranch/scripts.pory"
	lock
# 367 "data/maps/Ranch/scripts.pory"
	faceplayer
# 368 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_ThirstyBoy_Text_0
# 369 "data/maps/Ranch/scripts.pory"
	closemessage
# 370 "data/maps/Ranch/scripts.pory"
	applymovement 5, Common_Movement_FaceOriginalDirection
# 371 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 372 "data/maps/Ranch/scripts.pory"
	release
	end


Ranch_EventScript_FarmerSpeechTop::
# 377 "data/maps/Ranch/scripts.pory"
	lockall
# 378 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 379 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 380 "data/maps/Ranch/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 381 "data/maps/Ranch/scripts.pory"
	special SpawnCameraObject
# 382 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToFarmerFirst
# 383 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 384 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 385 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 386 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_0
# 387 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 388 "data/maps/Ranch/scripts.pory"
	closemessage
# 389 "data/maps/Ranch/scripts.pory"
	delay 10
# 390 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 391 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 392 "data/maps/Ranch/scripts.pory"
	delay 10
# 393 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_FaceUp
# 394 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 395 "data/maps/Ranch/scripts.pory"
	delay 10
# 396 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_FaceUp
# 397 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 398 "data/maps/Ranch/scripts.pory"
	delay 30
# 399 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 400 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 401 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_1
# 402 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 403 "data/maps/Ranch/scripts.pory"
	closemessage
# 404 "data/maps/Ranch/scripts.pory"
	delay 30
# 405 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 406 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 407 "data/maps/Ranch/scripts.pory"
	delay 30
# 408 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_2
# 409 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 410 "data/maps/Ranch/scripts.pory"
	closemessage
# 411 "data/maps/Ranch/scripts.pory"
	delay 30
# 412 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 413 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 414 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_3
# 415 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 416 "data/maps/Ranch/scripts.pory"
	closemessage
# 417 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 418 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 419 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 420 "data/maps/Ranch/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 421 "data/maps/Ranch/scripts.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 422 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 423 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 424 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 425 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_FaceDown
# 426 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 427 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 428 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 429 "data/maps/Ranch/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 430 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 431 "data/maps/Ranch/scripts.pory"
	applymovement 15, Common_Movement_FaceLeft
# 432 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 433 "data/maps/Ranch/scripts.pory"
	playse SE_PIN
# 434 "data/maps/Ranch/scripts.pory"
	waitse
# 435 "data/maps/Ranch/scripts.pory"
	delay 120
# 436 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_FaceUp
# 437 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_FaceUp
# 438 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 439 "data/maps/Ranch/scripts.pory"
	applymovement 12, Common_Movement_FaceUp
# 440 "data/maps/Ranch/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 441 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 442 "data/maps/Ranch/scripts.pory"
	delay 60
# 443 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 444 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 445 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_4
# 446 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 447 "data/maps/Ranch/scripts.pory"
	closemessage
# 448 "data/maps/Ranch/scripts.pory"
	delay 30
# 449 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 450 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 451 "data/maps/Ranch/scripts.pory"
	delay 30
# 452 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_5
# 453 "data/maps/Ranch/scripts.pory"
	closemessage
# 454 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 455 "data/maps/Ranch/scripts.pory"
	delay 60
# 456 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 457 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_6
# 458 "data/maps/Ranch/scripts.pory"
	closemessage
# 459 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 460 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 461 "data/maps/Ranch/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 462 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 463 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_FaceRight
# 464 "data/maps/Ranch/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 465 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 466 "data/maps/Ranch/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 467 "data/maps/Ranch/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 468 "data/maps/Ranch/scripts.pory"
	applymovement 14, Common_Movement_FaceRight
# 469 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 470 "data/maps/Ranch/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 471 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 472 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceRight
# 473 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 474 "data/maps/Ranch/scripts.pory"
	delay 30
# 475 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 476 "data/maps/Ranch/scripts.pory"
	addobject 39
# 477 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 478 "data/maps/Ranch/scripts.pory"
	setobjectxy 39, 56, 67
# 479 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 480 "data/maps/Ranch/scripts.pory"
	applymovement 39, GentlemanToScene
# 481 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToGentleman
# 482 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 483 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_7
# 484 "data/maps/Ranch/scripts.pory"
	closemessage
# 485 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 486 "data/maps/Ranch/scripts.pory"
	delay 60
# 487 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 488 "data/maps/Ranch/scripts.pory"
	setobjectxy 36, 52, 74
# 489 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 490 "data/maps/Ranch/scripts.pory"
	setobjectxy 37, 53, 74
# 491 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 492 "data/maps/Ranch/scripts.pory"
	setobjectxy 38, 54, 74
# 493 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 494 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_8
# 495 "data/maps/Ranch/scripts.pory"
	closemessage
# 496 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 497 "data/maps/Ranch/scripts.pory"
	applymovement 36, ConfrontGentleman1
# 498 "data/maps/Ranch/scripts.pory"
	applymovement 37, ConfrontGentleman1
# 499 "data/maps/Ranch/scripts.pory"
	applymovement 38, ConfrontGentleman2
# 500 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 501 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_FaceDown
# 502 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_ExclamationMark
# 503 "data/maps/Ranch/scripts.pory"
	delay 15
# 504 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 505 "data/maps/Ranch/scripts.pory"
	applymovement 37, Common_Movement_WalkInPlaceFasterUp
# 506 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 507 "data/maps/Ranch/scripts.pory"
	delay 15
# 508 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_9
# 509 "data/maps/Ranch/scripts.pory"
	closemessage
# 510 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 511 "data/maps/Ranch/scripts.pory"
	delay 30
# 512 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_FaceLeft
# 513 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 514 "data/maps/Ranch/scripts.pory"
	delay 60
# 515 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_FaceDown
# 516 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 517 "data/maps/Ranch/scripts.pory"
	delay 90
# 518 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_WalkInPlaceDown
# 519 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 520 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_10
# 521 "data/maps/Ranch/scripts.pory"
	closemessage
# 522 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 523 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_FaceLeft
# 524 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ToAbsolTop
# 525 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 526 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_11
# 527 "data/maps/Ranch/scripts.pory"
	closemessage
# 528 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 529 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, FromAbsolTop
# 530 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 531 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_WalkInPlaceDown
# 532 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 533 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_12
# 534 "data/maps/Ranch/scripts.pory"
	closemessage
# 535 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 536 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_FaceLeft
# 537 "data/maps/Ranch/scripts.pory"
	delay 60
# 538 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_13
# 539 "data/maps/Ranch/scripts.pory"
	closemessage
# 540 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 541 "data/maps/Ranch/scripts.pory"
	delay 30
# 542 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 543 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 544 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ToPlayerTop
# 545 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 546 "data/maps/Ranch/scripts.pory"
	delay 90
# 547 "data/maps/Ranch/scripts.pory"
	special RemoveCameraObject
# 548 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 549 "data/maps/Ranch/scripts.pory"
	removeobject 36
# 550 "data/maps/Ranch/scripts.pory"
	removeobject 37
# 551 "data/maps/Ranch/scripts.pory"
	removeobject 38
# 552 "data/maps/Ranch/scripts.pory"
	removeobject 32
# 553 "data/maps/Ranch/scripts.pory"
	removeobject 33
# 554 "data/maps/Ranch/scripts.pory"
	removeobject 34
# 555 "data/maps/Ranch/scripts.pory"
	removeobject 35
# 556 "data/maps/Ranch/scripts.pory"
	removeobject 39
# 557 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 558 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_FaceOriginalDirection
# 559 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_FaceOriginalDirection
# 560 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 561 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_FaceOriginalDirection
# 562 "data/maps/Ranch/scripts.pory"
	applymovement 12, Common_Movement_FaceOriginalDirection
# 563 "data/maps/Ranch/scripts.pory"
	applymovement 15, Common_Movement_FaceOriginalDirection
# 564 "data/maps/Ranch/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 565 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 39, 58, 68
# 566 "data/maps/Ranch/scripts.pory"
	addobject 39
# 567 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 568 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER_SPEECH
# 569 "data/maps/Ranch/scripts.pory"
	setrespawn HEAL_LOCATION_RANCH
# 570 "data/maps/Ranch/scripts.pory"
	releaseall
	end


Ranch_EventScript_FarmerSpeechMiddle::
# 576 "data/maps/Ranch/scripts.pory"
	lockall
# 577 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 578 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 579 "data/maps/Ranch/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 580 "data/maps/Ranch/scripts.pory"
	special SpawnCameraObject
# 581 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToFarmerFirstMiddle
# 582 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 583 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 584 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 585 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_0
# 586 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 587 "data/maps/Ranch/scripts.pory"
	closemessage
# 588 "data/maps/Ranch/scripts.pory"
	delay 10
# 589 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 590 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 591 "data/maps/Ranch/scripts.pory"
	delay 10
# 592 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_FaceUp
# 593 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 594 "data/maps/Ranch/scripts.pory"
	delay 10
# 595 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_FaceUp
# 596 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 597 "data/maps/Ranch/scripts.pory"
	delay 30
# 598 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 599 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 600 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_1
# 601 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 602 "data/maps/Ranch/scripts.pory"
	closemessage
# 603 "data/maps/Ranch/scripts.pory"
	delay 30
# 604 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 605 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 606 "data/maps/Ranch/scripts.pory"
	delay 30
# 607 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_2
# 608 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 609 "data/maps/Ranch/scripts.pory"
	closemessage
# 610 "data/maps/Ranch/scripts.pory"
	delay 30
# 611 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 612 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 613 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_3
# 614 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 615 "data/maps/Ranch/scripts.pory"
	closemessage
# 616 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 617 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 618 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 619 "data/maps/Ranch/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 620 "data/maps/Ranch/scripts.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 621 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 622 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 623 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 624 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_FaceDown
# 625 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 626 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 627 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 628 "data/maps/Ranch/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 629 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 630 "data/maps/Ranch/scripts.pory"
	applymovement 15, Common_Movement_FaceLeft
# 631 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 632 "data/maps/Ranch/scripts.pory"
	playse SE_PIN
# 633 "data/maps/Ranch/scripts.pory"
	waitse
# 634 "data/maps/Ranch/scripts.pory"
	delay 120
# 635 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_FaceUp
# 636 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_FaceUp
# 637 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 638 "data/maps/Ranch/scripts.pory"
	applymovement 12, Common_Movement_FaceUp
# 639 "data/maps/Ranch/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 640 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 641 "data/maps/Ranch/scripts.pory"
	delay 60
# 642 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 643 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 644 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_4
# 645 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 646 "data/maps/Ranch/scripts.pory"
	closemessage
# 647 "data/maps/Ranch/scripts.pory"
	delay 30
# 648 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 649 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 650 "data/maps/Ranch/scripts.pory"
	delay 30
# 651 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_5
# 652 "data/maps/Ranch/scripts.pory"
	closemessage
# 653 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 654 "data/maps/Ranch/scripts.pory"
	delay 60
# 655 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 656 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_6
# 657 "data/maps/Ranch/scripts.pory"
	closemessage
# 658 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 659 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 660 "data/maps/Ranch/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 661 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 662 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_FaceRight
# 663 "data/maps/Ranch/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 664 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 665 "data/maps/Ranch/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 666 "data/maps/Ranch/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 667 "data/maps/Ranch/scripts.pory"
	applymovement 14, Common_Movement_FaceRight
# 668 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 669 "data/maps/Ranch/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 670 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 671 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceRight
# 672 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 673 "data/maps/Ranch/scripts.pory"
	delay 30
# 674 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 675 "data/maps/Ranch/scripts.pory"
	addobject 39
# 676 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 677 "data/maps/Ranch/scripts.pory"
	setobjectxy 39, 56, 67
# 678 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 679 "data/maps/Ranch/scripts.pory"
	applymovement 39, GentlemanToScene
# 680 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToGentleman
# 681 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 682 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_7
# 683 "data/maps/Ranch/scripts.pory"
	closemessage
# 684 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 685 "data/maps/Ranch/scripts.pory"
	delay 60
# 686 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 687 "data/maps/Ranch/scripts.pory"
	setobjectxy 36, 52, 74
# 688 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 689 "data/maps/Ranch/scripts.pory"
	setobjectxy 37, 53, 74
# 690 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 691 "data/maps/Ranch/scripts.pory"
	setobjectxy 38, 54, 74
# 692 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 693 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_8
# 694 "data/maps/Ranch/scripts.pory"
	closemessage
# 695 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 696 "data/maps/Ranch/scripts.pory"
	applymovement 36, ConfrontGentleman1
# 697 "data/maps/Ranch/scripts.pory"
	applymovement 37, ConfrontGentleman1
# 698 "data/maps/Ranch/scripts.pory"
	applymovement 38, ConfrontGentleman2
# 699 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 700 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_FaceDown
# 701 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_ExclamationMark
# 702 "data/maps/Ranch/scripts.pory"
	delay 15
# 703 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 704 "data/maps/Ranch/scripts.pory"
	applymovement 37, Common_Movement_WalkInPlaceFasterUp
# 705 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 706 "data/maps/Ranch/scripts.pory"
	delay 15
# 707 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_9
# 708 "data/maps/Ranch/scripts.pory"
	closemessage
# 709 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 710 "data/maps/Ranch/scripts.pory"
	delay 30
# 711 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_FaceLeft
# 712 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 713 "data/maps/Ranch/scripts.pory"
	delay 60
# 714 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_FaceDown
# 715 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 716 "data/maps/Ranch/scripts.pory"
	delay 90
# 717 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_WalkInPlaceDown
# 718 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 719 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_10
# 720 "data/maps/Ranch/scripts.pory"
	closemessage
# 721 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 722 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_FaceLeft
# 723 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ToAbsolMiddle
# 724 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 725 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_11
# 726 "data/maps/Ranch/scripts.pory"
	closemessage
# 727 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 728 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, FromAbsolMiddle
# 729 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 730 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_WalkInPlaceDown
# 731 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 732 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_12
# 733 "data/maps/Ranch/scripts.pory"
	closemessage
# 734 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 735 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_FaceLeft
# 736 "data/maps/Ranch/scripts.pory"
	delay 60
# 737 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_13
# 738 "data/maps/Ranch/scripts.pory"
	closemessage
# 739 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 740 "data/maps/Ranch/scripts.pory"
	delay 30
# 741 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 742 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 743 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ToPlayerMiddle
# 744 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 745 "data/maps/Ranch/scripts.pory"
	delay 90
# 746 "data/maps/Ranch/scripts.pory"
	special RemoveCameraObject
# 747 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 748 "data/maps/Ranch/scripts.pory"
	removeobject 36
# 749 "data/maps/Ranch/scripts.pory"
	removeobject 37
# 750 "data/maps/Ranch/scripts.pory"
	removeobject 38
# 751 "data/maps/Ranch/scripts.pory"
	removeobject 32
# 752 "data/maps/Ranch/scripts.pory"
	removeobject 33
# 753 "data/maps/Ranch/scripts.pory"
	removeobject 34
# 754 "data/maps/Ranch/scripts.pory"
	removeobject 35
# 755 "data/maps/Ranch/scripts.pory"
	removeobject 39
# 756 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 757 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_FaceOriginalDirection
# 758 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_FaceOriginalDirection
# 759 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 760 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_FaceOriginalDirection
# 761 "data/maps/Ranch/scripts.pory"
	applymovement 12, Common_Movement_FaceOriginalDirection
# 762 "data/maps/Ranch/scripts.pory"
	applymovement 15, Common_Movement_FaceOriginalDirection
# 763 "data/maps/Ranch/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 764 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 39, 58, 68
# 765 "data/maps/Ranch/scripts.pory"
	addobject 39
# 766 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 767 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER_SPEECH
# 768 "data/maps/Ranch/scripts.pory"
	setrespawn HEAL_LOCATION_RANCH
# 769 "data/maps/Ranch/scripts.pory"
	releaseall
	end


Ranch_EventScript_FarmerSpeechBottom::
# 774 "data/maps/Ranch/scripts.pory"
	lockall
# 775 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
# 776 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 777 "data/maps/Ranch/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 778 "data/maps/Ranch/scripts.pory"
	special SpawnCameraObject
# 779 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToFarmerFirstBottom
# 780 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 781 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 782 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 783 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_0
# 784 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 785 "data/maps/Ranch/scripts.pory"
	closemessage
# 786 "data/maps/Ranch/scripts.pory"
	delay 10
# 787 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 788 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 789 "data/maps/Ranch/scripts.pory"
	delay 10
# 790 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_FaceUp
# 791 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 792 "data/maps/Ranch/scripts.pory"
	delay 10
# 793 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_FaceUp
# 794 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 795 "data/maps/Ranch/scripts.pory"
	delay 30
# 796 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 797 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 798 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_1
# 799 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 800 "data/maps/Ranch/scripts.pory"
	closemessage
# 801 "data/maps/Ranch/scripts.pory"
	delay 30
# 802 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 803 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 804 "data/maps/Ranch/scripts.pory"
	delay 30
# 805 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_2
# 806 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 807 "data/maps/Ranch/scripts.pory"
	closemessage
# 808 "data/maps/Ranch/scripts.pory"
	delay 30
# 809 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 810 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 811 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_3
# 812 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 813 "data/maps/Ranch/scripts.pory"
	closemessage
# 814 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_ExclamationMark
# 815 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_ExclamationMark
# 816 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_ExclamationMark
# 817 "data/maps/Ranch/scripts.pory"
	applymovement 12, Common_Movement_ExclamationMark
# 818 "data/maps/Ranch/scripts.pory"
	applymovement 15, Common_Movement_ExclamationMark
# 819 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 820 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_FaceLeft
# 821 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 822 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_FaceDown
# 823 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 824 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 825 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 826 "data/maps/Ranch/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 827 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 828 "data/maps/Ranch/scripts.pory"
	applymovement 15, Common_Movement_FaceLeft
# 829 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 830 "data/maps/Ranch/scripts.pory"
	playse SE_PIN
# 831 "data/maps/Ranch/scripts.pory"
	waitse
# 832 "data/maps/Ranch/scripts.pory"
	delay 120
# 833 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_FaceUp
# 834 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_FaceUp
# 835 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_FaceUp
# 836 "data/maps/Ranch/scripts.pory"
	applymovement 12, Common_Movement_FaceUp
# 837 "data/maps/Ranch/scripts.pory"
	applymovement 15, Common_Movement_FaceUp
# 838 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 839 "data/maps/Ranch/scripts.pory"
	delay 60
# 840 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceDown
# 841 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 842 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_4
# 843 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 844 "data/maps/Ranch/scripts.pory"
	closemessage
# 845 "data/maps/Ranch/scripts.pory"
	delay 30
# 846 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceLeft
# 847 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 848 "data/maps/Ranch/scripts.pory"
	delay 30
# 849 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_5
# 850 "data/maps/Ranch/scripts.pory"
	closemessage
# 851 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 852 "data/maps/Ranch/scripts.pory"
	delay 60
# 853 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 854 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_6
# 855 "data/maps/Ranch/scripts.pory"
	closemessage
# 856 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 857 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 858 "data/maps/Ranch/scripts.pory"
	applymovement 10, Common_Movement_FaceRight
# 859 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_FaceRight
# 860 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_FaceRight
# 861 "data/maps/Ranch/scripts.pory"
	applymovement 8, Common_Movement_FaceRight
# 862 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_FaceRight
# 863 "data/maps/Ranch/scripts.pory"
	applymovement 12, Common_Movement_FaceRight
# 864 "data/maps/Ranch/scripts.pory"
	applymovement 15, Common_Movement_FaceRight
# 865 "data/maps/Ranch/scripts.pory"
	applymovement 14, Common_Movement_FaceRight
# 866 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 867 "data/maps/Ranch/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 868 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 869 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceRight
# 870 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 871 "data/maps/Ranch/scripts.pory"
	delay 30
# 872 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 873 "data/maps/Ranch/scripts.pory"
	addobject 39
# 874 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 875 "data/maps/Ranch/scripts.pory"
	setobjectxy 39, 56, 67
# 876 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 877 "data/maps/Ranch/scripts.pory"
	applymovement 39, GentlemanToScene
# 878 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToGentleman
# 879 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 880 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_7
# 881 "data/maps/Ranch/scripts.pory"
	closemessage
# 882 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 883 "data/maps/Ranch/scripts.pory"
	delay 60
# 884 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 885 "data/maps/Ranch/scripts.pory"
	setobjectxy 36, 52, 74
# 886 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 887 "data/maps/Ranch/scripts.pory"
	setobjectxy 37, 53, 74
# 888 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 889 "data/maps/Ranch/scripts.pory"
	setobjectxy 38, 54, 74
# 890 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 891 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_8
# 892 "data/maps/Ranch/scripts.pory"
	closemessage
# 893 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 894 "data/maps/Ranch/scripts.pory"
	applymovement 36, ConfrontGentleman1
# 895 "data/maps/Ranch/scripts.pory"
	applymovement 37, ConfrontGentleman1
# 896 "data/maps/Ranch/scripts.pory"
	applymovement 38, ConfrontGentleman2
# 897 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 898 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_FaceDown
# 899 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_ExclamationMark
# 900 "data/maps/Ranch/scripts.pory"
	delay 15
# 901 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 902 "data/maps/Ranch/scripts.pory"
	applymovement 37, Common_Movement_WalkInPlaceFasterUp
# 903 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 904 "data/maps/Ranch/scripts.pory"
	delay 15
# 905 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_9
# 906 "data/maps/Ranch/scripts.pory"
	closemessage
# 907 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 908 "data/maps/Ranch/scripts.pory"
	delay 30
# 909 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_FaceLeft
# 910 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 911 "data/maps/Ranch/scripts.pory"
	delay 60
# 912 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_FaceDown
# 913 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 914 "data/maps/Ranch/scripts.pory"
	delay 90
# 915 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_WalkInPlaceDown
# 916 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 917 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_10
# 918 "data/maps/Ranch/scripts.pory"
	closemessage
# 919 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 920 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_FaceLeft
# 921 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ToAbsolBottom
# 922 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 923 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_11
# 924 "data/maps/Ranch/scripts.pory"
	closemessage
# 925 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 926 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, FromAbsolBottom
# 927 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 928 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_WalkInPlaceDown
# 929 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 930 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_12
# 931 "data/maps/Ranch/scripts.pory"
	closemessage
# 932 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 933 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_FaceLeft
# 934 "data/maps/Ranch/scripts.pory"
	delay 60
# 935 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerSpeechTop_Text_13
# 936 "data/maps/Ranch/scripts.pory"
	closemessage
# 937 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 938 "data/maps/Ranch/scripts.pory"
	delay 30
# 939 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 940 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 941 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, ToPlayerBottom
# 942 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 943 "data/maps/Ranch/scripts.pory"
	delay 90
# 944 "data/maps/Ranch/scripts.pory"
	special RemoveCameraObject
# 945 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 946 "data/maps/Ranch/scripts.pory"
	removeobject 36
# 947 "data/maps/Ranch/scripts.pory"
	removeobject 37
# 948 "data/maps/Ranch/scripts.pory"
	removeobject 38
# 949 "data/maps/Ranch/scripts.pory"
	removeobject 32
# 950 "data/maps/Ranch/scripts.pory"
	removeobject 33
# 951 "data/maps/Ranch/scripts.pory"
	removeobject 34
# 952 "data/maps/Ranch/scripts.pory"
	removeobject 35
# 953 "data/maps/Ranch/scripts.pory"
	removeobject 39
# 954 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 955 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_FaceOriginalDirection
# 956 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_FaceOriginalDirection
# 957 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 958 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_FaceOriginalDirection
# 959 "data/maps/Ranch/scripts.pory"
	applymovement 12, Common_Movement_FaceOriginalDirection
# 960 "data/maps/Ranch/scripts.pory"
	applymovement 15, Common_Movement_FaceOriginalDirection
# 961 "data/maps/Ranch/scripts.pory"
	applymovement 7, Common_Movement_FaceOriginalDirection
# 962 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 39, 58, 68
# 963 "data/maps/Ranch/scripts.pory"
	addobject 39
# 964 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 965 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER_SPEECH
# 966 "data/maps/Ranch/scripts.pory"
	setrespawn HEAL_LOCATION_RANCH
# 967 "data/maps/Ranch/scripts.pory"
	releaseall
	end


Ranch_EventScript_RelocateEveryone::
# 972 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 13, 53, 67
# 973 "data/maps/Ranch/scripts.pory"
	addobject 13
# 974 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 15, 49, 61
# 975 "data/maps/Ranch/scripts.pory"
	addobject 15
# 976 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 15, MOVEMENT_TYPE_WANDER_AROUND
# 977 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 14, 53, 64
# 978 "data/maps/Ranch/scripts.pory"
	addobject 14
# 979 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 12, MOVEMENT_TYPE_FACE_RIGHT
# 980 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 12, 44, 75
# 981 "data/maps/Ranch/scripts.pory"
	addobject 12
# 982 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 11, MOVEMENT_TYPE_RUN_IN_PLACE_LEFT
# 983 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 11, 45, 75
# 984 "data/maps/Ranch/scripts.pory"
	addobject 11
# 985 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 16, MOVEMENT_TYPE_WANDER_AROUND
# 986 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 16, 54, 73
# 987 "data/maps/Ranch/scripts.pory"
	addobject 16
# 988 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 9, MOVEMENT_TYPE_WANDER_AROUND
# 989 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 9, 55, 70
# 990 "data/maps/Ranch/scripts.pory"
	addobject 9
# 991 "data/maps/Ranch/scripts.pory"
	setflag FLAG_RELOCATE
	return


Ranch_EventScript_SetUpFirstBattle::
# 995 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 39, 58, 68
# 996 "data/maps/Ranch/scripts.pory"
	addobject 39
# 997 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 29, 18, 66
# 998 "data/maps/Ranch/scripts.pory"
	addobject 29
# 999 "data/maps/Ranch/scripts.pory"
	setobjectmovementtype 29, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 1000 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 30, 19, 66
# 1001 "data/maps/Ranch/scripts.pory"
	addobject 30
# 1002 "data/maps/Ranch/scripts.pory"
	setobjectmovementtype 30, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
# 1003 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 34, 56, 59
# 1004 "data/maps/Ranch/scripts.pory"
	addobject 34
# 1005 "data/maps/Ranch/scripts.pory"
	setobjectmovementtype 34, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
# 1006 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 35, 57, 59
# 1007 "data/maps/Ranch/scripts.pory"
	addobject 35
	return


Ranch_EventScript_FarmerBattle::
# 1011 "data/maps/Ranch/scripts.pory"
	lock
# 1012 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER1_BATTLE, Ranch_EventScript_FarmerBattle_2
# 1012 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER2_BATTLE, Ranch_EventScript_FarmerBattle_2
# 1012 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER3_BATTLE, Ranch_EventScript_FarmerBattle_2
# 1012 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER4_BATTLE, Ranch_EventScript_FarmerBattle_2
# 1012 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER5_BATTLE, Ranch_EventScript_FarmerBattle_2
# 1012 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER6_BATTLE, Ranch_EventScript_FarmerBattle_2
# 1012 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER7_BATTLE, Ranch_EventScript_FarmerBattle_2
Ranch_EventScript_FarmerBattle_1:
# 1046 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER1_BATTLE, Ranch_EventScript_FarmerBattle_19
Ranch_EventScript_FarmerBattle_16:
# 1051 "data/maps/Ranch/scripts.pory"
	releaseall
	end

Ranch_EventScript_FarmerBattle_2:
# 1013 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1014 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerBattle_Text_0
# 1015 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER1_BATTLE, Ranch_EventScript_FarmerBattle_32
# 1021 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER2_BATTLE, Ranch_EventScript_FarmerBattle_35
# 1027 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER3_BATTLE, Ranch_EventScript_FarmerBattle_38
# 1027 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER4_BATTLE, Ranch_EventScript_FarmerBattle_38
# 1033 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER5_BATTLE, Ranch_EventScript_FarmerBattle_43
# 1039 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER6_BATTLE, Ranch_EventScript_FarmerBattle_45
# 1039 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER7_BATTLE, Ranch_EventScript_FarmerBattle_45
	goto Ranch_EventScript_FarmerBattle_1

Ranch_EventScript_FarmerBattle_17:
# 1047 "data/maps/Ranch/scripts.pory"
	goto Ranch_EventScript_FinalEncounter
# 1048 "data/maps/Ranch/scripts.pory"
	releaseall
	end

Ranch_EventScript_FarmerBattle_18:
# 1046 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER3_BATTLE, Ranch_EventScript_FarmerBattle_23
	goto Ranch_EventScript_FarmerBattle_16

Ranch_EventScript_FarmerBattle_19:
# 1046 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER2_BATTLE, Ranch_EventScript_FarmerBattle_18
	goto Ranch_EventScript_FarmerBattle_16

Ranch_EventScript_FarmerBattle_22:
# 1046 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER5_BATTLE, Ranch_EventScript_FarmerBattle_27
	goto Ranch_EventScript_FarmerBattle_16

Ranch_EventScript_FarmerBattle_23:
# 1046 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER4_BATTLE, Ranch_EventScript_FarmerBattle_22
	goto Ranch_EventScript_FarmerBattle_16

Ranch_EventScript_FarmerBattle_26:
# 1046 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER7_BATTLE, Ranch_EventScript_FarmerBattle_17
	goto Ranch_EventScript_FarmerBattle_16

Ranch_EventScript_FarmerBattle_27:
# 1046 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER6_BATTLE, Ranch_EventScript_FarmerBattle_26
	goto Ranch_EventScript_FarmerBattle_16

Ranch_EventScript_FarmerBattle_32:
# 1016 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerBattle_Text_1
# 1017 "data/maps/Ranch/scripts.pory"
	closemessage
# 1018 "data/maps/Ranch/scripts.pory"
	releaseall
	end

Ranch_EventScript_FarmerBattle_35:
# 1022 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerBattle_Text_2
# 1023 "data/maps/Ranch/scripts.pory"
	closemessage
# 1024 "data/maps/Ranch/scripts.pory"
	releaseall
	end

Ranch_EventScript_FarmerBattle_38:
# 1028 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerBattle_Text_3
# 1029 "data/maps/Ranch/scripts.pory"
	closemessage
# 1030 "data/maps/Ranch/scripts.pory"
	releaseall
	end

Ranch_EventScript_FarmerBattle_43:
# 1034 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerBattle_Text_4
# 1035 "data/maps/Ranch/scripts.pory"
	closemessage
# 1036 "data/maps/Ranch/scripts.pory"
	releaseall
	end

Ranch_EventScript_FarmerBattle_45:
# 1040 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FarmerBattle_Text_5
# 1041 "data/maps/Ranch/scripts.pory"
	closemessage
# 1042 "data/maps/Ranch/scripts.pory"
	releaseall
	end


# 1056 "data/maps/Ranch/scripts.pory"
GentlemanToScene:
# 1057 "data/maps/Ranch/scripts.pory"
	walk_left
# 1057 "data/maps/Ranch/scripts.pory"
	walk_left
# 1057 "data/maps/Ranch/scripts.pory"
	walk_left
# 1057 "data/maps/Ranch/scripts.pory"
	walk_left
	step_end

# 1060 "data/maps/Ranch/scripts.pory"
CameraToGentleman:
# 1061 "data/maps/Ranch/scripts.pory"
	walk_diag_southeast
# 1062 "data/maps/Ranch/scripts.pory"
	walk_right
# 1062 "data/maps/Ranch/scripts.pory"
	walk_right
# 1062 "data/maps/Ranch/scripts.pory"
	walk_right
# 1062 "data/maps/Ranch/scripts.pory"
	walk_right
	step_end

# 1065 "data/maps/Ranch/scripts.pory"
ConfrontGentleman1:
# 1066 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 1066 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 1066 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 1066 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 1066 "data/maps/Ranch/scripts.pory"
	walk_fast_up
	step_end

# 1069 "data/maps/Ranch/scripts.pory"
ConfrontGentleman2:
# 1070 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 1070 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 1070 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 1070 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 1070 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 1070 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 1071 "data/maps/Ranch/scripts.pory"
	face_left
	step_end

# 1074 "data/maps/Ranch/scripts.pory"
ToAbsolTop:
# 1075 "data/maps/Ranch/scripts.pory"
	walk_left
# 1076 "data/maps/Ranch/scripts.pory"
	walk_diag_northwest
	step_end

# 1079 "data/maps/Ranch/scripts.pory"
FromAbsolTop:
# 1080 "data/maps/Ranch/scripts.pory"
	walk_diag_southeast
# 1081 "data/maps/Ranch/scripts.pory"
	walk_right
	step_end

# 1084 "data/maps/Ranch/scripts.pory"
ToPlayerTop:
# 1085 "data/maps/Ranch/scripts.pory"
	walk_left
# 1085 "data/maps/Ranch/scripts.pory"
	walk_left
# 1086 "data/maps/Ranch/scripts.pory"
	walk_diag_northwest
	step_end

# 1089 "data/maps/Ranch/scripts.pory"
ToAbsolMiddle:
# 1090 "data/maps/Ranch/scripts.pory"
	walk_left
# 1090 "data/maps/Ranch/scripts.pory"
	walk_left
	step_end

# 1093 "data/maps/Ranch/scripts.pory"
FromAbsolMiddle:
# 1094 "data/maps/Ranch/scripts.pory"
	walk_right
# 1094 "data/maps/Ranch/scripts.pory"
	walk_right
	step_end

# 1097 "data/maps/Ranch/scripts.pory"
ToPlayerMiddle:
# 1098 "data/maps/Ranch/scripts.pory"
	walk_left
# 1098 "data/maps/Ranch/scripts.pory"
	walk_left
# 1098 "data/maps/Ranch/scripts.pory"
	walk_left
	step_end

# 1101 "data/maps/Ranch/scripts.pory"
ToAbsolBottom:
# 1102 "data/maps/Ranch/scripts.pory"
	walk_diag_southwest
# 1103 "data/maps/Ranch/scripts.pory"
	walk_left
	step_end

# 1106 "data/maps/Ranch/scripts.pory"
FromAbsolBottom:
# 1107 "data/maps/Ranch/scripts.pory"
	walk_diag_northeast
# 1108 "data/maps/Ranch/scripts.pory"
	walk_right
	step_end

# 1111 "data/maps/Ranch/scripts.pory"
ToPlayerBottom:
# 1112 "data/maps/Ranch/scripts.pory"
	walk_diag_southwest
# 1113 "data/maps/Ranch/scripts.pory"
	walk_left
# 1113 "data/maps/Ranch/scripts.pory"
	walk_left
	step_end

# 1116 "data/maps/Ranch/scripts.pory"
CameraToFarmerFirst:
# 1117 "data/maps/Ranch/scripts.pory"
	walk_left
# 1117 "data/maps/Ranch/scripts.pory"
	walk_left
	step_end

# 1120 "data/maps/Ranch/scripts.pory"
CameraToFarmerFirstMiddle:
# 1121 "data/maps/Ranch/scripts.pory"
	walk_diag_northwest
# 1122 "data/maps/Ranch/scripts.pory"
	walk_left
	step_end

# 1125 "data/maps/Ranch/scripts.pory"
CameraToFarmerFirstBottom:
# 1126 "data/maps/Ranch/scripts.pory"
	walk_diag_northwest
# 1126 "data/maps/Ranch/scripts.pory"
	walk_diag_northwest
	step_end

Ranch_EventScript_Man1::
# 1130 "data/maps/Ranch/scripts.pory"
	lock
# 1131 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1132 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER_SPEECH, Ranch_EventScript_Man1_2
Ranch_EventScript_Man1_1:
# 1135 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER_SPEECH, Ranch_EventScript_Man1_5
Ranch_EventScript_Man1_4:
# 1138 "data/maps/Ranch/scripts.pory"
	closemessage
# 1139 "data/maps/Ranch/scripts.pory"
	applymovement 12, Common_Movement_FaceOriginalDirection
# 1140 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1141 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_Man1_2:
# 1133 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_Man1_Text_0
	goto Ranch_EventScript_Man1_1

Ranch_EventScript_Man1_5:
# 1136 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_Man1_Text_1
	goto Ranch_EventScript_Man1_4


Ranch_EventScript_OldWoman1::
# 1146 "data/maps/Ranch/scripts.pory"
	lock
# 1147 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1148 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER_SPEECH, Ranch_EventScript_OldWoman1_2
Ranch_EventScript_OldWoman1_1:
# 1151 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER_SPEECH, Ranch_EventScript_OldWoman1_5
Ranch_EventScript_OldWoman1_4:
# 1154 "data/maps/Ranch/scripts.pory"
	closemessage
# 1155 "data/maps/Ranch/scripts.pory"
	applymovement 15, Common_Movement_FaceOriginalDirection
# 1156 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1157 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_OldWoman1_2:
# 1149 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_OldWoman1_Text_0
	goto Ranch_EventScript_OldWoman1_1

Ranch_EventScript_OldWoman1_5:
# 1152 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_OldWoman1_Text_1
	goto Ranch_EventScript_OldWoman1_4


Ranch_EventScript_Woman1::
# 1162 "data/maps/Ranch/scripts.pory"
	lock
# 1163 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1164 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER_SPEECH, Ranch_EventScript_Woman1_2
Ranch_EventScript_Woman1_1:
# 1167 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER_SPEECH, Ranch_EventScript_Woman1_5
Ranch_EventScript_Woman1_4:
# 1170 "data/maps/Ranch/scripts.pory"
	closemessage
# 1171 "data/maps/Ranch/scripts.pory"
	applymovement 16, Common_Movement_FaceOriginalDirection
# 1172 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1173 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_Woman1_2:
# 1165 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_Woman1_Text_0
	goto Ranch_EventScript_Woman1_1

Ranch_EventScript_Woman1_5:
# 1168 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_Woman1_Text_1
	goto Ranch_EventScript_Woman1_4


Ranch_EventScript_Protestor1::
# 1178 "data/maps/Ranch/scripts.pory"
	lock
# 1179 "data/maps/Ranch/scripts.pory"
	applymovement 36, Common_Movement_WalkInPlaceLeft
# 1180 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1181 "data/maps/Ranch/scripts.pory"
	delay 15
# 1182 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_Protestor1_Text_0
# 1183 "data/maps/Ranch/scripts.pory"
	closemessage
# 1184 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1185 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1186 "data/maps/Ranch/scripts.pory"
	applymovement 36, Common_Movement_ExclamationMark
# 1187 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1188 "data/maps/Ranch/scripts.pory"
	playse SE_PIN
# 1189 "data/maps/Ranch/scripts.pory"
	waitse
# 1190 "data/maps/Ranch/scripts.pory"
	delay 15
# 1191 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_Protestor1_Text_1
# 1192 "data/maps/Ranch/scripts.pory"
	closemessage
# 1193 "data/maps/Ranch/scripts.pory"
	applymovement 36, Common_Movement_FaceOriginalDirection
# 1194 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1195 "data/maps/Ranch/scripts.pory"
	release
	end


Ranch_EventScript_Protestor2::
# 1200 "data/maps/Ranch/scripts.pory"
	lock
# 1201 "data/maps/Ranch/scripts.pory"
	applymovement 38, Common_Movement_WalkInPlaceUp
# 1202 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1203 "data/maps/Ranch/scripts.pory"
	delay 15
# 1204 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_Protestor2_Text_0
# 1205 "data/maps/Ranch/scripts.pory"
	closemessage
# 1206 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1207 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1208 "data/maps/Ranch/scripts.pory"
	applymovement 38, Common_Movement_ExclamationMark
# 1209 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1210 "data/maps/Ranch/scripts.pory"
	playse SE_PIN
# 1211 "data/maps/Ranch/scripts.pory"
	waitse
# 1212 "data/maps/Ranch/scripts.pory"
	delay 15
# 1213 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_Protestor2_Text_1
# 1214 "data/maps/Ranch/scripts.pory"
	closemessage
# 1215 "data/maps/Ranch/scripts.pory"
	applymovement 38, Common_Movement_FaceOriginalDirection
# 1216 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1217 "data/maps/Ranch/scripts.pory"
	release
	end


Ranch_EventScript_LittleBoy1::
# 1222 "data/maps/Ranch/scripts.pory"
	lock
# 1223 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1224 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_LittleBoy1_Text_0
# 1225 "data/maps/Ranch/scripts.pory"
	closemessage
# 1226 "data/maps/Ranch/scripts.pory"
	applymovement 11, Common_Movement_FaceOriginalDirection
# 1227 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1228 "data/maps/Ranch/scripts.pory"
	release
	end


Ranch_EventScript_LittleGirl1::
# 1233 "data/maps/Ranch/scripts.pory"
	lock
# 1234 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1235 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_LittleGirl1_Text_0
# 1236 "data/maps/Ranch/scripts.pory"
	closemessage
# 1237 "data/maps/Ranch/scripts.pory"
	applymovement 9, Common_Movement_FaceOriginalDirection
# 1238 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1239 "data/maps/Ranch/scripts.pory"
	release
	end


Ranch_EventScript_Nurse::
# 1244 "data/maps/Ranch/scripts.pory"
	lock
# 1245 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1246 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_RANCH_NURSE, Ranch_EventScript_Nurse_2
Ranch_EventScript_Nurse_1:
# 1259 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_RANCH_NURSE, Ranch_EventScript_Nurse_5
Ranch_EventScript_Nurse_4:
# 1275 "data/maps/Ranch/scripts.pory"
	applymovement 13, Common_Movement_FaceOriginalDirection
# 1276 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1277 "data/maps/Ranch/scripts.pory"
	callnative UpdateFollowingPokemon
# 1278 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_Nurse_2:
# 1247 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_Nurse_Text_0, MSGBOX_YESNO
# 1248 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ranch_EventScript_Nurse_7
# 1256 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_Nurse_Text_2
	goto Ranch_EventScript_Nurse_1

Ranch_EventScript_Nurse_5:
# 1260 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_Nurse_Text_3, MSGBOX_YESNO
# 1261 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Ranch_EventScript_Nurse_10
# 1270 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_Nurse_Text_2
# 1271 "data/maps/Ranch/scripts.pory"
	waitmessage
# 1272 "data/maps/Ranch/scripts.pory"
	setflag FLAG_RANCH_NURSE
	goto Ranch_EventScript_Nurse_4

Ranch_EventScript_Nurse_7:
# 1249 "data/maps/Ranch/scripts.pory"
	special HealPlayerParty
# 1250 "data/maps/Ranch/scripts.pory"
	playfanfare MUS_HEAL
# 1251 "data/maps/Ranch/scripts.pory"
	waitfanfare
# 1252 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_Nurse_Text_1
# 1253 "data/maps/Ranch/scripts.pory"
	waitmessage
	goto Ranch_EventScript_Nurse_1

Ranch_EventScript_Nurse_10:
# 1262 "data/maps/Ranch/scripts.pory"
	special HealPlayerParty
# 1263 "data/maps/Ranch/scripts.pory"
	playfanfare MUS_HEAL
# 1264 "data/maps/Ranch/scripts.pory"
	waitfanfare
# 1265 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_Nurse_Text_1
# 1266 "data/maps/Ranch/scripts.pory"
	waitmessage
# 1267 "data/maps/Ranch/scripts.pory"
	setflag FLAG_RANCH_NURSE
	goto Ranch_EventScript_Nurse_4


Ranch_EventScript_Gentleman::
# 1283 "data/maps/Ranch/scripts.pory"
	lock
# 1284 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1285 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_Gentleman_Text_0
# 1286 "data/maps/Ranch/scripts.pory"
	closemessage
# 1287 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_FaceOriginalDirection
# 1288 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1289 "data/maps/Ranch/scripts.pory"
	release
	end


Ranch_EventScript_LiberateBattleProtestor::
# 1294 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER1_BATTLE, Ranch_EventScript_LiberateBattleProtestor_2
Ranch_EventScript_LiberateBattleProtestor_1:
# 1401 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER1_BATTLE, Ranch_EventScript_LiberateBattleProtestor_5
Ranch_EventScript_LiberateBattleProtestor_4:
# 1408 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_LiberateBattleProtestor_2:
# 1295 "data/maps/Ranch/scripts.pory"
	lock
# 1296 "data/maps/Ranch/scripts.pory"
	applymovement 30, Common_Movement_WalkInPlaceFastLeft
# 1297 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1298 "data/maps/Ranch/scripts.pory"
	delay 15
# 1299 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_LiberateBattleProtestor_Text_0
# 1300 "data/maps/Ranch/scripts.pory"
	closemessage
# 1301 "data/maps/Ranch/scripts.pory"
	delay 15
# 1302 "data/maps/Ranch/scripts.pory"
	applymovement 29, Common_Movement_WalkInPlaceFastRight
# 1303 "data/maps/Ranch/scripts.pory"
	delay 15
# 1304 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_LiberateBattleProtestor_Text_1
# 1305 "data/maps/Ranch/scripts.pory"
	closemessage
# 1306 "data/maps/Ranch/scripts.pory"
	delay 15
# 1307 "data/maps/Ranch/scripts.pory"
	applymovement 30, Common_Movement_WalkInPlaceFastLeft
# 1308 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1309 "data/maps/Ranch/scripts.pory"
	delay 15
# 1310 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_LiberateBattleProtestor_Text_2
# 1311 "data/maps/Ranch/scripts.pory"
	closemessage
# 1312 "data/maps/Ranch/scripts.pory"
	delay 15
# 1313 "data/maps/Ranch/scripts.pory"
	applymovement 29, Common_Movement_WalkInPlaceFastRight
# 1314 "data/maps/Ranch/scripts.pory"
	delay 15
# 1315 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_LiberateBattleProtestor_Text_3
# 1316 "data/maps/Ranch/scripts.pory"
	closemessage
# 1317 "data/maps/Ranch/scripts.pory"
	delay 15
# 1318 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1319 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_LiberateBattleProtestor_Text_4
# 1320 "data/maps/Ranch/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Ranch_EventScript_LiberateBattleProtestor_Text_5, Ranch_EventScript_LiberateBattleProtestor_Text_6
# 1321 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_8
Ranch_EventScript_LiberateBattleProtestor_7:
# 1360 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_10
	goto Ranch_EventScript_LiberateBattleProtestor_1

Ranch_EventScript_LiberateBattleProtestor_5:
# 1402 "data/maps/Ranch/scripts.pory"
	lock
# 1403 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1404 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1405 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_LiberateBattleProtestor_Text_13
# 1406 "data/maps/Ranch/scripts.pory"
	closemessage
	goto Ranch_EventScript_LiberateBattleProtestor_4

Ranch_EventScript_LiberateBattleProtestor_8:
# 1322 "data/maps/Ranch/scripts.pory"
	applymovement 29, Common_Movement_LockFacingDirection
# 1323 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1324 "data/maps/Ranch/scripts.pory"
	applymovement 30, FarmerFreakOut
# 1325 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 1326 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1327 "data/maps/Ranch/scripts.pory"
	delay 15
# 1328 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_LiberateBattleProtestor_Text_7
# 1329 "data/maps/Ranch/scripts.pory"
	closemessage
# 1330 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1331 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 17
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_14
Ranch_EventScript_LiberateBattleProtestor_12:
# 1336 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_24
Ranch_EventScript_LiberateBattleProtestor_22:
# 1341 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_34
Ranch_EventScript_LiberateBattleProtestor_32:
# 1346 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_44
Ranch_EventScript_LiberateBattleProtestor_42:
# 1349 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_54
Ranch_EventScript_LiberateBattleProtestor_52:
# 1352 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_64
Ranch_EventScript_LiberateBattleProtestor_62:
# 1355 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1356 "data/maps/Ranch/scripts.pory"
	applymovement 29, Common_Movement_FaceRight
# 1357 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1358 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Ranch_EventScript_LiberateBattleProtestor_Text_8, Ranch_EventScript_LiberateBattleProtestor_Text_9, Ranch_EventScript_FirstFarmerLeave
	goto Ranch_EventScript_LiberateBattleProtestor_7

Ranch_EventScript_LiberateBattleProtestor_10:
# 1361 "data/maps/Ranch/scripts.pory"
	applymovement 30, Common_Movement_LockFacingDirection
# 1362 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1363 "data/maps/Ranch/scripts.pory"
	applymovement 29, FarmerFreakOut
# 1364 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 1365 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1366 "data/maps/Ranch/scripts.pory"
	delay 15
# 1367 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_LiberateBattleProtestor_Text_10
# 1368 "data/maps/Ranch/scripts.pory"
	closemessage
# 1369 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1370 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 17
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_19
Ranch_EventScript_LiberateBattleProtestor_17:
# 1373 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_29
Ranch_EventScript_LiberateBattleProtestor_27:
# 1376 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_39
Ranch_EventScript_LiberateBattleProtestor_37:
# 1379 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_49
Ranch_EventScript_LiberateBattleProtestor_47:
# 1384 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_59
Ranch_EventScript_LiberateBattleProtestor_57:
# 1389 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_69
Ranch_EventScript_LiberateBattleProtestor_67:
# 1394 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1395 "data/maps/Ranch/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 1396 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1397 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_ED, Ranch_EventScript_LiberateBattleProtestor_Text_11, Ranch_EventScript_LiberateBattleProtestor_Text_12, Ranch_EventScript_FirstProtesterLeave
	goto Ranch_EventScript_LiberateBattleProtestor_1

Ranch_EventScript_LiberateBattleProtestor_13:
# 1332 "data/maps/Ranch/scripts.pory"
	applymovement 30, FarmerToLeft
# 1333 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1334 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto Ranch_EventScript_LiberateBattleProtestor_12

Ranch_EventScript_LiberateBattleProtestor_14:
# 1331 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 66
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_13
	goto Ranch_EventScript_LiberateBattleProtestor_12

Ranch_EventScript_LiberateBattleProtestor_18:
# 1371 "data/maps/Ranch/scripts.pory"
	applymovement 29, Common_Movement_FacePlayer
	goto Ranch_EventScript_LiberateBattleProtestor_17

Ranch_EventScript_LiberateBattleProtestor_19:
# 1370 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 66
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_18
	goto Ranch_EventScript_LiberateBattleProtestor_17

Ranch_EventScript_LiberateBattleProtestor_23:
# 1337 "data/maps/Ranch/scripts.pory"
	applymovement 30, FarmerToTopLeft
# 1338 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1339 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Ranch_EventScript_LiberateBattleProtestor_22

Ranch_EventScript_LiberateBattleProtestor_24:
# 1336 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 65
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_23
	goto Ranch_EventScript_LiberateBattleProtestor_22

Ranch_EventScript_LiberateBattleProtestor_28:
# 1374 "data/maps/Ranch/scripts.pory"
	applymovement 29, Common_Movement_FacePlayer
	goto Ranch_EventScript_LiberateBattleProtestor_27

Ranch_EventScript_LiberateBattleProtestor_29:
# 1373 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 65
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_28
	goto Ranch_EventScript_LiberateBattleProtestor_27

Ranch_EventScript_LiberateBattleProtestor_33:
# 1342 "data/maps/Ranch/scripts.pory"
	applymovement 30, FarmerToBottomLeft
# 1343 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1344 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Ranch_EventScript_LiberateBattleProtestor_32

Ranch_EventScript_LiberateBattleProtestor_34:
# 1341 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 67
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_33
	goto Ranch_EventScript_LiberateBattleProtestor_32

Ranch_EventScript_LiberateBattleProtestor_38:
# 1377 "data/maps/Ranch/scripts.pory"
	applymovement 29, Common_Movement_FacePlayer
	goto Ranch_EventScript_LiberateBattleProtestor_37

Ranch_EventScript_LiberateBattleProtestor_39:
# 1376 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 67
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_38
	goto Ranch_EventScript_LiberateBattleProtestor_37

Ranch_EventScript_LiberateBattleProtestor_43:
# 1347 "data/maps/Ranch/scripts.pory"
	applymovement 30, Common_Movement_FacePlayer
	goto Ranch_EventScript_LiberateBattleProtestor_42

Ranch_EventScript_LiberateBattleProtestor_44:
# 1346 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 65
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_43
	goto Ranch_EventScript_LiberateBattleProtestor_42

Ranch_EventScript_LiberateBattleProtestor_48:
# 1380 "data/maps/Ranch/scripts.pory"
	applymovement 29, ProtestorToTopRight
# 1381 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1382 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Ranch_EventScript_LiberateBattleProtestor_47

Ranch_EventScript_LiberateBattleProtestor_49:
# 1379 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 65
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_48
	goto Ranch_EventScript_LiberateBattleProtestor_47

Ranch_EventScript_LiberateBattleProtestor_53:
# 1350 "data/maps/Ranch/scripts.pory"
	applymovement 30, Common_Movement_FacePlayer
	goto Ranch_EventScript_LiberateBattleProtestor_52

Ranch_EventScript_LiberateBattleProtestor_54:
# 1349 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 66
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_53
	goto Ranch_EventScript_LiberateBattleProtestor_52

Ranch_EventScript_LiberateBattleProtestor_58:
# 1385 "data/maps/Ranch/scripts.pory"
	applymovement 29, ProtestorToRight
# 1386 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1387 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto Ranch_EventScript_LiberateBattleProtestor_57

Ranch_EventScript_LiberateBattleProtestor_59:
# 1384 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 66
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_58
	goto Ranch_EventScript_LiberateBattleProtestor_57

Ranch_EventScript_LiberateBattleProtestor_63:
# 1353 "data/maps/Ranch/scripts.pory"
	applymovement 30, Common_Movement_FacePlayer
	goto Ranch_EventScript_LiberateBattleProtestor_62

Ranch_EventScript_LiberateBattleProtestor_64:
# 1352 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 67
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_63
	goto Ranch_EventScript_LiberateBattleProtestor_62

Ranch_EventScript_LiberateBattleProtestor_68:
# 1390 "data/maps/Ranch/scripts.pory"
	applymovement 29, ProtestorToBottomRight
# 1391 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1392 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Ranch_EventScript_LiberateBattleProtestor_67

Ranch_EventScript_LiberateBattleProtestor_69:
# 1389 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 67
	goto_if_eq Ranch_EventScript_LiberateBattleProtestor_68
	goto Ranch_EventScript_LiberateBattleProtestor_67


Ranch_EventScript_LiberateBattleFarmer::
# 1413 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER1_BATTLE, Ranch_EventScript_LiberateBattleFarmer_2
Ranch_EventScript_LiberateBattleFarmer_1:
# 1520 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER1_BATTLE, Ranch_EventScript_LiberateBattleFarmer_5
Ranch_EventScript_LiberateBattleFarmer_4:
# 1527 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_LiberateBattleFarmer_2:
# 1414 "data/maps/Ranch/scripts.pory"
	lock
# 1415 "data/maps/Ranch/scripts.pory"
	applymovement 30, Common_Movement_WalkInPlaceFastLeft
# 1416 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1417 "data/maps/Ranch/scripts.pory"
	delay 15
# 1418 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_LiberateBattleProtestor_Text_0
# 1419 "data/maps/Ranch/scripts.pory"
	closemessage
# 1420 "data/maps/Ranch/scripts.pory"
	delay 15
# 1421 "data/maps/Ranch/scripts.pory"
	applymovement 29, Common_Movement_WalkInPlaceFastRight
# 1422 "data/maps/Ranch/scripts.pory"
	delay 15
# 1423 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_LiberateBattleProtestor_Text_1
# 1424 "data/maps/Ranch/scripts.pory"
	closemessage
# 1425 "data/maps/Ranch/scripts.pory"
	delay 15
# 1426 "data/maps/Ranch/scripts.pory"
	applymovement 30, Common_Movement_WalkInPlaceFastLeft
# 1427 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1428 "data/maps/Ranch/scripts.pory"
	delay 15
# 1429 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_LiberateBattleProtestor_Text_2
# 1430 "data/maps/Ranch/scripts.pory"
	closemessage
# 1431 "data/maps/Ranch/scripts.pory"
	delay 15
# 1432 "data/maps/Ranch/scripts.pory"
	applymovement 29, Common_Movement_WalkInPlaceFastRight
# 1433 "data/maps/Ranch/scripts.pory"
	delay 15
# 1434 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_LiberateBattleProtestor_Text_3
# 1435 "data/maps/Ranch/scripts.pory"
	closemessage
# 1436 "data/maps/Ranch/scripts.pory"
	delay 15
# 1437 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1438 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_LiberateBattleProtestor_Text_4
# 1439 "data/maps/Ranch/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Ranch_EventScript_LiberateBattleProtestor_Text_5, Ranch_EventScript_LiberateBattleProtestor_Text_6
# 1440 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_8
Ranch_EventScript_LiberateBattleFarmer_7:
# 1479 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_10
	goto Ranch_EventScript_LiberateBattleFarmer_1

Ranch_EventScript_LiberateBattleFarmer_5:
# 1521 "data/maps/Ranch/scripts.pory"
	lock
# 1522 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1523 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1524 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_LiberateBattleFarmer_Text_0
# 1525 "data/maps/Ranch/scripts.pory"
	closemessage
	goto Ranch_EventScript_LiberateBattleFarmer_4

Ranch_EventScript_LiberateBattleFarmer_8:
# 1441 "data/maps/Ranch/scripts.pory"
	applymovement 29, Common_Movement_LockFacingDirection
# 1442 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1443 "data/maps/Ranch/scripts.pory"
	applymovement 30, FarmerFreakOut
# 1444 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 1445 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1446 "data/maps/Ranch/scripts.pory"
	delay 15
# 1447 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_LiberateBattleProtestor_Text_7
# 1448 "data/maps/Ranch/scripts.pory"
	closemessage
# 1449 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1450 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 17
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_14
Ranch_EventScript_LiberateBattleFarmer_12:
# 1455 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_24
Ranch_EventScript_LiberateBattleFarmer_22:
# 1460 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_34
Ranch_EventScript_LiberateBattleFarmer_32:
# 1465 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_44
Ranch_EventScript_LiberateBattleFarmer_42:
# 1468 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_54
Ranch_EventScript_LiberateBattleFarmer_52:
# 1471 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_64
Ranch_EventScript_LiberateBattleFarmer_62:
# 1474 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1475 "data/maps/Ranch/scripts.pory"
	applymovement 29, Common_Movement_FaceRight
# 1476 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1477 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_ALBERTO, Ranch_EventScript_LiberateBattleProtestor_Text_8, Ranch_EventScript_LiberateBattleProtestor_Text_9, Ranch_EventScript_FirstFarmerLeave
	goto Ranch_EventScript_LiberateBattleFarmer_7

Ranch_EventScript_LiberateBattleFarmer_10:
# 1480 "data/maps/Ranch/scripts.pory"
	applymovement 30, Common_Movement_LockFacingDirection
# 1481 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1482 "data/maps/Ranch/scripts.pory"
	applymovement 29, FarmerFreakOut
# 1483 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 1484 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1485 "data/maps/Ranch/scripts.pory"
	delay 15
# 1486 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_LiberateBattleProtestor_Text_10
# 1487 "data/maps/Ranch/scripts.pory"
	closemessage
# 1488 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1489 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 17
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_19
Ranch_EventScript_LiberateBattleFarmer_17:
# 1492 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_29
Ranch_EventScript_LiberateBattleFarmer_27:
# 1495 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 18
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_39
Ranch_EventScript_LiberateBattleFarmer_37:
# 1498 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_49
Ranch_EventScript_LiberateBattleFarmer_47:
# 1503 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 20
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_59
Ranch_EventScript_LiberateBattleFarmer_57:
# 1508 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 19
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_69
Ranch_EventScript_LiberateBattleFarmer_67:
# 1513 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1514 "data/maps/Ranch/scripts.pory"
	applymovement 30, Common_Movement_FaceLeft
# 1515 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1516 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_ED, Ranch_EventScript_LiberateBattleProtestor_Text_11, Ranch_EventScript_LiberateBattleProtestor_Text_12, Ranch_EventScript_FirstProtesterLeave
	goto Ranch_EventScript_LiberateBattleFarmer_1

Ranch_EventScript_LiberateBattleFarmer_13:
# 1451 "data/maps/Ranch/scripts.pory"
	applymovement 30, FarmerToLeft
# 1452 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1453 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto Ranch_EventScript_LiberateBattleFarmer_12

Ranch_EventScript_LiberateBattleFarmer_14:
# 1450 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 66
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_13
	goto Ranch_EventScript_LiberateBattleFarmer_12

Ranch_EventScript_LiberateBattleFarmer_18:
# 1490 "data/maps/Ranch/scripts.pory"
	applymovement 29, Common_Movement_FacePlayer
	goto Ranch_EventScript_LiberateBattleFarmer_17

Ranch_EventScript_LiberateBattleFarmer_19:
# 1489 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 66
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_18
	goto Ranch_EventScript_LiberateBattleFarmer_17

Ranch_EventScript_LiberateBattleFarmer_23:
# 1456 "data/maps/Ranch/scripts.pory"
	applymovement 30, FarmerToTopLeft
# 1457 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1458 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto Ranch_EventScript_LiberateBattleFarmer_22

Ranch_EventScript_LiberateBattleFarmer_24:
# 1455 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 65
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_23
	goto Ranch_EventScript_LiberateBattleFarmer_22

Ranch_EventScript_LiberateBattleFarmer_28:
# 1493 "data/maps/Ranch/scripts.pory"
	applymovement 29, Common_Movement_FacePlayer
	goto Ranch_EventScript_LiberateBattleFarmer_27

Ranch_EventScript_LiberateBattleFarmer_29:
# 1492 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 65
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_28
	goto Ranch_EventScript_LiberateBattleFarmer_27

Ranch_EventScript_LiberateBattleFarmer_33:
# 1461 "data/maps/Ranch/scripts.pory"
	applymovement 30, FarmerToBottomLeft
# 1462 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1463 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Ranch_EventScript_LiberateBattleFarmer_32

Ranch_EventScript_LiberateBattleFarmer_34:
# 1460 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 67
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_33
	goto Ranch_EventScript_LiberateBattleFarmer_32

Ranch_EventScript_LiberateBattleFarmer_38:
# 1496 "data/maps/Ranch/scripts.pory"
	applymovement 29, Common_Movement_FacePlayer
	goto Ranch_EventScript_LiberateBattleFarmer_37

Ranch_EventScript_LiberateBattleFarmer_39:
# 1495 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 67
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_38
	goto Ranch_EventScript_LiberateBattleFarmer_37

Ranch_EventScript_LiberateBattleFarmer_43:
# 1466 "data/maps/Ranch/scripts.pory"
	applymovement 30, Common_Movement_FacePlayer
	goto Ranch_EventScript_LiberateBattleFarmer_42

Ranch_EventScript_LiberateBattleFarmer_44:
# 1465 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 65
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_43
	goto Ranch_EventScript_LiberateBattleFarmer_42

Ranch_EventScript_LiberateBattleFarmer_48:
# 1499 "data/maps/Ranch/scripts.pory"
	applymovement 29, ProtestorToTopRight
# 1500 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1501 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Ranch_EventScript_LiberateBattleFarmer_47

Ranch_EventScript_LiberateBattleFarmer_49:
# 1498 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 65
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_48
	goto Ranch_EventScript_LiberateBattleFarmer_47

Ranch_EventScript_LiberateBattleFarmer_53:
# 1469 "data/maps/Ranch/scripts.pory"
	applymovement 30, Common_Movement_FacePlayer
	goto Ranch_EventScript_LiberateBattleFarmer_52

Ranch_EventScript_LiberateBattleFarmer_54:
# 1468 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 66
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_53
	goto Ranch_EventScript_LiberateBattleFarmer_52

Ranch_EventScript_LiberateBattleFarmer_58:
# 1504 "data/maps/Ranch/scripts.pory"
	applymovement 29, ProtestorToRight
# 1505 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1506 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto Ranch_EventScript_LiberateBattleFarmer_57

Ranch_EventScript_LiberateBattleFarmer_59:
# 1503 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 66
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_58
	goto Ranch_EventScript_LiberateBattleFarmer_57

Ranch_EventScript_LiberateBattleFarmer_63:
# 1472 "data/maps/Ranch/scripts.pory"
	applymovement 30, Common_Movement_FacePlayer
	goto Ranch_EventScript_LiberateBattleFarmer_62

Ranch_EventScript_LiberateBattleFarmer_64:
# 1471 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 67
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_63
	goto Ranch_EventScript_LiberateBattleFarmer_62

Ranch_EventScript_LiberateBattleFarmer_68:
# 1509 "data/maps/Ranch/scripts.pory"
	applymovement 29, ProtestorToBottomRight
# 1510 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1511 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Ranch_EventScript_LiberateBattleFarmer_67

Ranch_EventScript_LiberateBattleFarmer_69:
# 1508 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 67
	goto_if_eq Ranch_EventScript_LiberateBattleFarmer_68
	goto Ranch_EventScript_LiberateBattleFarmer_67


Ranch_EventScript_FirstFarmerLeave::
# 1532 "data/maps/Ranch/scripts.pory"
	lock
# 1533 "data/maps/Ranch/scripts.pory"
	delay 15
# 1534 "data/maps/Ranch/scripts.pory"
	applymovement 30, Common_Movement_FaceAwayPlayer
# 1535 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1536 "data/maps/Ranch/scripts.pory"
	delay 15
# 1537 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FirstFarmerLeave_Text_0
# 1538 "data/maps/Ranch/scripts.pory"
	closemessage
# 1539 "data/maps/Ranch/scripts.pory"
	delay 15
# 1540 "data/maps/Ranch/scripts.pory"
	applymovement 30, FarmerFreakOut
# 1541 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 1542 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1543 "data/maps/Ranch/scripts.pory"
	applymovement 30, Common_Movement_FacePlayer
# 1544 "data/maps/Ranch/scripts.pory"
	delay 15
# 1545 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FirstFarmerLeave_Text_1
# 1546 "data/maps/Ranch/scripts.pory"
	closemessage
# 1547 "data/maps/Ranch/scripts.pory"
	delay 15
# 1548 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1549 "data/maps/Ranch/scripts.pory"
	removeobject 30
# 1550 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 1551 "data/maps/Ranch/scripts.pory"
	waitse
# 1552 "data/maps/Ranch/scripts.pory"
	setflag FLAG_PROTEST_WIN_1
# 1553 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER1_BATTLE
# 1554 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER1_BATTLE, Ranch_EventScript_FirstFarmerLeave_4
Ranch_EventScript_FirstFarmerLeave_1:
# 1558 "data/maps/Ranch/scripts.pory"
	addvar VAR_RANCH_MORALITY_SYSTEM, 1
# 1559 "data/maps/Ranch/scripts.pory"
	applymovement 29, Common_Movement_UnlockFacingDirection
# 1560 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1561 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 29, MOVEMENT_TYPE_WANDER_AROUND
# 1562 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1563 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 29, 18, 66
# 1564 "data/maps/Ranch/scripts.pory"
	addobject 29
# 1565 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1566 "data/maps/Ranch/scripts.pory"
	delay 15
# 1567 "data/maps/Ranch/scripts.pory"
	removeobject 2
# 1568 "data/maps/Ranch/scripts.pory"
	removeobject 3
# 1569 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1570 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1571 "data/maps/Ranch/scripts.pory"
	goto Ranch_EventScript_ProtestWin1
# 1572 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_FirstFarmerLeave_2:
# 1555 "data/maps/Ranch/scripts.pory"
	setflag FLAG_READY_FINAL_RANCH_BATTLE
# 1556 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_STATE, 2
	goto Ranch_EventScript_FirstFarmerLeave_1

Ranch_EventScript_FirstFarmerLeave_3:
# 1554 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER3_BATTLE, Ranch_EventScript_FirstFarmerLeave_8
	goto Ranch_EventScript_FirstFarmerLeave_1

Ranch_EventScript_FirstFarmerLeave_4:
# 1554 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER2_BATTLE, Ranch_EventScript_FirstFarmerLeave_3
	goto Ranch_EventScript_FirstFarmerLeave_1

Ranch_EventScript_FirstFarmerLeave_7:
# 1554 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER5_BATTLE, Ranch_EventScript_FirstFarmerLeave_12
	goto Ranch_EventScript_FirstFarmerLeave_1

Ranch_EventScript_FirstFarmerLeave_8:
# 1554 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER4_BATTLE, Ranch_EventScript_FirstFarmerLeave_7
	goto Ranch_EventScript_FirstFarmerLeave_1

Ranch_EventScript_FirstFarmerLeave_11:
# 1554 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER7_BATTLE, Ranch_EventScript_FirstFarmerLeave_2
	goto Ranch_EventScript_FirstFarmerLeave_1

Ranch_EventScript_FirstFarmerLeave_12:
# 1554 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER6_BATTLE, Ranch_EventScript_FirstFarmerLeave_11
	goto Ranch_EventScript_FirstFarmerLeave_1


Ranch_EventScript_FirstProtesterLeave::
# 1577 "data/maps/Ranch/scripts.pory"
	lock
# 1578 "data/maps/Ranch/scripts.pory"
	delay 15
# 1579 "data/maps/Ranch/scripts.pory"
	applymovement 29, Common_Movement_FaceAwayPlayer
# 1580 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1581 "data/maps/Ranch/scripts.pory"
	delay 15
# 1582 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FirstProtesterLeave_Text_0
# 1583 "data/maps/Ranch/scripts.pory"
	closemessage
# 1584 "data/maps/Ranch/scripts.pory"
	delay 15
# 1585 "data/maps/Ranch/scripts.pory"
	applymovement 29, FarmerFreakOut
# 1586 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 1587 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1588 "data/maps/Ranch/scripts.pory"
	applymovement 29, Common_Movement_FacePlayer
# 1589 "data/maps/Ranch/scripts.pory"
	delay 15
# 1590 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FirstFarmerLeave_Text_1
# 1591 "data/maps/Ranch/scripts.pory"
	closemessage
# 1592 "data/maps/Ranch/scripts.pory"
	delay 15
# 1593 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1594 "data/maps/Ranch/scripts.pory"
	removeobject 29
# 1595 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 1596 "data/maps/Ranch/scripts.pory"
	waitse
# 1597 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER_WIN_1
# 1598 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER1_BATTLE
# 1599 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER1_BATTLE, Ranch_EventScript_FirstProtesterLeave_4
Ranch_EventScript_FirstProtesterLeave_1:
# 1603 "data/maps/Ranch/scripts.pory"
	subvar VAR_RANCH_MORALITY_SYSTEM, 1
# 1604 "data/maps/Ranch/scripts.pory"
	applymovement 30, Common_Movement_UnlockFacingDirection
# 1605 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1606 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 30, MOVEMENT_TYPE_WANDER_AROUND
# 1607 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1608 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 30, 19, 66
# 1609 "data/maps/Ranch/scripts.pory"
	addobject 30
# 1610 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1611 "data/maps/Ranch/scripts.pory"
	delay 15
# 1612 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1613 "data/maps/Ranch/scripts.pory"
	goto Ranch_EventScript_FarmerWin1
# 1614 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_FirstProtesterLeave_2:
# 1600 "data/maps/Ranch/scripts.pory"
	setflag FLAG_READY_FINAL_RANCH_BATTLE
# 1601 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_STATE, 2
	goto Ranch_EventScript_FirstProtesterLeave_1

Ranch_EventScript_FirstProtesterLeave_3:
# 1599 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER3_BATTLE, Ranch_EventScript_FirstProtesterLeave_8
	goto Ranch_EventScript_FirstProtesterLeave_1

Ranch_EventScript_FirstProtesterLeave_4:
# 1599 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER2_BATTLE, Ranch_EventScript_FirstProtesterLeave_3
	goto Ranch_EventScript_FirstProtesterLeave_1

Ranch_EventScript_FirstProtesterLeave_7:
# 1599 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER5_BATTLE, Ranch_EventScript_FirstProtesterLeave_12
	goto Ranch_EventScript_FirstProtesterLeave_1

Ranch_EventScript_FirstProtesterLeave_8:
# 1599 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER4_BATTLE, Ranch_EventScript_FirstProtesterLeave_7
	goto Ranch_EventScript_FirstProtesterLeave_1

Ranch_EventScript_FirstProtesterLeave_11:
# 1599 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER7_BATTLE, Ranch_EventScript_FirstProtesterLeave_2
	goto Ranch_EventScript_FirstProtesterLeave_1

Ranch_EventScript_FirstProtesterLeave_12:
# 1599 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER6_BATTLE, Ranch_EventScript_FirstProtesterLeave_11
	goto Ranch_EventScript_FirstProtesterLeave_1


# 1618 "data/maps/Ranch/scripts.pory"
FarmerFreakOut:
# 1619 "data/maps/Ranch/scripts.pory"
	jump_in_place_left
# 1620 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 1621 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_right
# 1622 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 1623 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_left
# 1623 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_left
# 1623 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_left
# 1624 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_right
	step_end

# 1627 "data/maps/Ranch/scripts.pory"
FarmerToLeft:
# 1628 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 1629 "data/maps/Ranch/scripts.pory"
	walk_fast_left
# 1629 "data/maps/Ranch/scripts.pory"
	walk_fast_left
# 1630 "data/maps/Ranch/scripts.pory"
	face_down
	step_end

# 1633 "data/maps/Ranch/scripts.pory"
FarmerToTopLeft:
# 1634 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 1635 "data/maps/Ranch/scripts.pory"
	face_left
	step_end

# 1638 "data/maps/Ranch/scripts.pory"
FarmerToBottomLeft:
# 1639 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 1640 "data/maps/Ranch/scripts.pory"
	face_left
	step_end

# 1643 "data/maps/Ranch/scripts.pory"
ProtestorToTopRight:
# 1644 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 1645 "data/maps/Ranch/scripts.pory"
	face_right
	step_end

# 1648 "data/maps/Ranch/scripts.pory"
ProtestorToBottomRight:
# 1649 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 1650 "data/maps/Ranch/scripts.pory"
	face_right
	step_end

# 1653 "data/maps/Ranch/scripts.pory"
ProtestorToRight:
# 1654 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 1655 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 1655 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 1656 "data/maps/Ranch/scripts.pory"
	face_down
	step_end

Ranch_EventScript_BlockingFarmer1::
# 1660 "data/maps/Ranch/scripts.pory"
	lock
# 1661 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1662 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_BlockingFarmer1_Text_0
# 1663 "data/maps/Ranch/scripts.pory"
	closemessage
# 1664 "data/maps/Ranch/scripts.pory"
	applymovement 32, Common_Movement_FaceOriginalDirection
# 1665 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1666 "data/maps/Ranch/scripts.pory"
	release
	end


Ranch_EventScript_BlockingFarmer2::
# 1671 "data/maps/Ranch/scripts.pory"
	lock
# 1672 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1673 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_BlockingFarmer2_Text_0
# 1674 "data/maps/Ranch/scripts.pory"
	closemessage
# 1675 "data/maps/Ranch/scripts.pory"
	applymovement 33, Common_Movement_FaceOriginalDirection
# 1676 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1677 "data/maps/Ranch/scripts.pory"
	release
	end


Ranch_EventScript_WellEncounterFarmer::
# 1682 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER2_BATTLE, Ranch_EventScript_WellEncounterFarmer_2
Ranch_EventScript_WellEncounterFarmer_1:
# 1758 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER2_BATTLE, Ranch_EventScript_WellEncounterFarmer_5
Ranch_EventScript_WellEncounterFarmer_4:
# 1765 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_WellEncounterFarmer_2:
# 1683 "data/maps/Ranch/scripts.pory"
	lock
# 1684 "data/maps/Ranch/scripts.pory"
	applymovement 35, Common_Movement_WalkInPlaceFastLeft
# 1685 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1686 "data/maps/Ranch/scripts.pory"
	delay 15
# 1687 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_WellEncounterFarmer_Text_0
# 1688 "data/maps/Ranch/scripts.pory"
	closemessage
# 1689 "data/maps/Ranch/scripts.pory"
	delay 15
# 1690 "data/maps/Ranch/scripts.pory"
	applymovement 34, Common_Movement_WalkInPlaceFastRight
# 1691 "data/maps/Ranch/scripts.pory"
	delay 15
# 1692 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_WellEncounterFarmer_Text_1
# 1693 "data/maps/Ranch/scripts.pory"
	closemessage
# 1694 "data/maps/Ranch/scripts.pory"
	delay 15
# 1695 "data/maps/Ranch/scripts.pory"
	applymovement 35, Common_Movement_WalkInPlaceFastLeft
# 1696 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1697 "data/maps/Ranch/scripts.pory"
	delay 15
# 1698 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_WellEncounterFarmer_Text_2
# 1699 "data/maps/Ranch/scripts.pory"
	closemessage
# 1700 "data/maps/Ranch/scripts.pory"
	delay 15
# 1701 "data/maps/Ranch/scripts.pory"
	applymovement 34, Common_Movement_WalkInPlaceFastRight
# 1702 "data/maps/Ranch/scripts.pory"
	delay 15
# 1703 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_WellEncounterFarmer_Text_3
# 1704 "data/maps/Ranch/scripts.pory"
	closemessage
# 1705 "data/maps/Ranch/scripts.pory"
	delay 15
# 1706 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1707 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_WellEncounterFarmer_Text_4
# 1708 "data/maps/Ranch/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Ranch_EventScript_WellEncounterFarmer_Text_5, Ranch_EventScript_WellEncounterFarmer_Text_6
# 1709 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Ranch_EventScript_WellEncounterFarmer_8
Ranch_EventScript_WellEncounterFarmer_7:
# 1732 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Ranch_EventScript_WellEncounterFarmer_10
	goto Ranch_EventScript_WellEncounterFarmer_1

Ranch_EventScript_WellEncounterFarmer_5:
# 1759 "data/maps/Ranch/scripts.pory"
	lock
# 1760 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1761 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1762 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_WellEncounterFarmer_Text_13
# 1763 "data/maps/Ranch/scripts.pory"
	closemessage
	goto Ranch_EventScript_WellEncounterFarmer_4

Ranch_EventScript_WellEncounterFarmer_8:
# 1710 "data/maps/Ranch/scripts.pory"
	applymovement 35, Common_Movement_LockFacingDirection
# 1711 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1712 "data/maps/Ranch/scripts.pory"
	applymovement 34, FarmerMadInPlaceRight
# 1713 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1714 "data/maps/Ranch/scripts.pory"
	delay 15
# 1715 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_WellEncounterFarmer_Text_7
# 1716 "data/maps/Ranch/scripts.pory"
	closemessage
# 1717 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1718 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq Ranch_EventScript_WellEncounterFarmer_14
Ranch_EventScript_WellEncounterFarmer_12:
# 1721 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 56
	goto_if_eq Ranch_EventScript_WellEncounterFarmer_24
Ranch_EventScript_WellEncounterFarmer_22:
# 1724 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 57
	goto_if_eq Ranch_EventScript_WellEncounterFarmer_34
Ranch_EventScript_WellEncounterFarmer_32:
# 1729 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1730 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, Ranch_EventScript_WellEncounterFarmer_Text_8, Ranch_EventScript_WellEncounterFarmer_Text_9, Ranch_EventScript_SecondFarmerLeave
	goto Ranch_EventScript_WellEncounterFarmer_7

Ranch_EventScript_WellEncounterFarmer_10:
# 1733 "data/maps/Ranch/scripts.pory"
	applymovement 34, Common_Movement_LockFacingDirection
# 1734 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1735 "data/maps/Ranch/scripts.pory"
	applymovement 35, ProtestorMadInPlaceLeft
# 1736 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1737 "data/maps/Ranch/scripts.pory"
	delay 15
# 1738 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_WellEncounterFarmer_Text_10
# 1739 "data/maps/Ranch/scripts.pory"
	closemessage
# 1740 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1741 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq Ranch_EventScript_WellEncounterFarmer_19
Ranch_EventScript_WellEncounterFarmer_17:
# 1746 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 56
	goto_if_eq Ranch_EventScript_WellEncounterFarmer_29
Ranch_EventScript_WellEncounterFarmer_27:
# 1751 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 57
	goto_if_eq Ranch_EventScript_WellEncounterFarmer_39
Ranch_EventScript_WellEncounterFarmer_37:
# 1754 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1755 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_DECLAN, Ranch_EventScript_WellEncounterFarmer_Text_11, Ranch_EventScript_WellEncounterFarmer_Text_12, Ranch_EventScript_SecondProtestorLeave
	goto Ranch_EventScript_WellEncounterFarmer_1

Ranch_EventScript_WellEncounterFarmer_13:
# 1719 "data/maps/Ranch/scripts.pory"
	applymovement 34, Common_Movement_FacePlayer
	goto Ranch_EventScript_WellEncounterFarmer_12

Ranch_EventScript_WellEncounterFarmer_14:
# 1718 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 59
	goto_if_eq Ranch_EventScript_WellEncounterFarmer_13
	goto Ranch_EventScript_WellEncounterFarmer_12

Ranch_EventScript_WellEncounterFarmer_18:
# 1742 "data/maps/Ranch/scripts.pory"
	applymovement 35, Protestor2ToLeft
# 1743 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1744 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto Ranch_EventScript_WellEncounterFarmer_17

Ranch_EventScript_WellEncounterFarmer_19:
# 1741 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 59
	goto_if_eq Ranch_EventScript_WellEncounterFarmer_18
	goto Ranch_EventScript_WellEncounterFarmer_17

Ranch_EventScript_WellEncounterFarmer_23:
# 1722 "data/maps/Ranch/scripts.pory"
	applymovement 34, Common_Movement_FacePlayer
	goto Ranch_EventScript_WellEncounterFarmer_22

Ranch_EventScript_WellEncounterFarmer_24:
# 1721 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 60
	goto_if_eq Ranch_EventScript_WellEncounterFarmer_23
	goto Ranch_EventScript_WellEncounterFarmer_22

Ranch_EventScript_WellEncounterFarmer_28:
# 1747 "data/maps/Ranch/scripts.pory"
	applymovement 35, Protestor2Down
# 1748 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1749 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Ranch_EventScript_WellEncounterFarmer_27

Ranch_EventScript_WellEncounterFarmer_29:
# 1746 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 60
	goto_if_eq Ranch_EventScript_WellEncounterFarmer_28
	goto Ranch_EventScript_WellEncounterFarmer_27

Ranch_EventScript_WellEncounterFarmer_33:
# 1725 "data/maps/Ranch/scripts.pory"
	applymovement 34, Farmer2ToRight
# 1726 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1727 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Ranch_EventScript_WellEncounterFarmer_32

Ranch_EventScript_WellEncounterFarmer_34:
# 1724 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 60
	goto_if_eq Ranch_EventScript_WellEncounterFarmer_33
	goto Ranch_EventScript_WellEncounterFarmer_32

Ranch_EventScript_WellEncounterFarmer_38:
# 1752 "data/maps/Ranch/scripts.pory"
	applymovement 35, Common_Movement_FacePlayer
	goto Ranch_EventScript_WellEncounterFarmer_37

Ranch_EventScript_WellEncounterFarmer_39:
# 1751 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 60
	goto_if_eq Ranch_EventScript_WellEncounterFarmer_38
	goto Ranch_EventScript_WellEncounterFarmer_37


Ranch_EventScript_WellEncounterProtestor::
# 1770 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER2_BATTLE, Ranch_EventScript_WellEncounterProtestor_2
Ranch_EventScript_WellEncounterProtestor_1:
# 1846 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER2_BATTLE, Ranch_EventScript_WellEncounterProtestor_5
Ranch_EventScript_WellEncounterProtestor_4:
# 1853 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_WellEncounterProtestor_2:
# 1771 "data/maps/Ranch/scripts.pory"
	lock
# 1772 "data/maps/Ranch/scripts.pory"
	applymovement 35, Common_Movement_WalkInPlaceFastLeft
# 1773 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1774 "data/maps/Ranch/scripts.pory"
	delay 15
# 1775 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_WellEncounterFarmer_Text_0
# 1776 "data/maps/Ranch/scripts.pory"
	closemessage
# 1777 "data/maps/Ranch/scripts.pory"
	delay 15
# 1778 "data/maps/Ranch/scripts.pory"
	applymovement 34, Common_Movement_WalkInPlaceFastRight
# 1779 "data/maps/Ranch/scripts.pory"
	delay 15
# 1780 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_WellEncounterFarmer_Text_1
# 1781 "data/maps/Ranch/scripts.pory"
	closemessage
# 1782 "data/maps/Ranch/scripts.pory"
	delay 15
# 1783 "data/maps/Ranch/scripts.pory"
	applymovement 35, Common_Movement_WalkInPlaceFastLeft
# 1784 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1785 "data/maps/Ranch/scripts.pory"
	delay 15
# 1786 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_WellEncounterFarmer_Text_2
# 1787 "data/maps/Ranch/scripts.pory"
	closemessage
# 1788 "data/maps/Ranch/scripts.pory"
	delay 15
# 1789 "data/maps/Ranch/scripts.pory"
	applymovement 34, Common_Movement_WalkInPlaceFastRight
# 1790 "data/maps/Ranch/scripts.pory"
	delay 15
# 1791 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_WellEncounterFarmer_Text_3
# 1792 "data/maps/Ranch/scripts.pory"
	closemessage
# 1793 "data/maps/Ranch/scripts.pory"
	delay 15
# 1794 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1795 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_WellEncounterFarmer_Text_4
# 1796 "data/maps/Ranch/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Ranch_EventScript_WellEncounterFarmer_Text_5, Ranch_EventScript_WellEncounterFarmer_Text_6
# 1797 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Ranch_EventScript_WellEncounterProtestor_8
Ranch_EventScript_WellEncounterProtestor_7:
# 1820 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Ranch_EventScript_WellEncounterProtestor_10
	goto Ranch_EventScript_WellEncounterProtestor_1

Ranch_EventScript_WellEncounterProtestor_5:
# 1847 "data/maps/Ranch/scripts.pory"
	lock
# 1848 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1849 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1850 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_WellEncounterProtestor_Text_0
# 1851 "data/maps/Ranch/scripts.pory"
	closemessage
	goto Ranch_EventScript_WellEncounterProtestor_4

Ranch_EventScript_WellEncounterProtestor_8:
# 1798 "data/maps/Ranch/scripts.pory"
	applymovement 35, Common_Movement_LockFacingDirection
# 1799 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1800 "data/maps/Ranch/scripts.pory"
	applymovement 34, FarmerMadInPlaceRight
# 1801 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1802 "data/maps/Ranch/scripts.pory"
	delay 15
# 1803 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_WellEncounterFarmer_Text_7
# 1804 "data/maps/Ranch/scripts.pory"
	closemessage
# 1805 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1806 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq Ranch_EventScript_WellEncounterProtestor_14
Ranch_EventScript_WellEncounterProtestor_12:
# 1809 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 56
	goto_if_eq Ranch_EventScript_WellEncounterProtestor_24
Ranch_EventScript_WellEncounterProtestor_22:
# 1812 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 57
	goto_if_eq Ranch_EventScript_WellEncounterProtestor_34
Ranch_EventScript_WellEncounterProtestor_32:
# 1817 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1818 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_4, Ranch_EventScript_WellEncounterFarmer_Text_8, Ranch_EventScript_WellEncounterFarmer_Text_9, Ranch_EventScript_SecondFarmerLeave
	goto Ranch_EventScript_WellEncounterProtestor_7

Ranch_EventScript_WellEncounterProtestor_10:
# 1821 "data/maps/Ranch/scripts.pory"
	applymovement 34, Common_Movement_LockFacingDirection
# 1822 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1823 "data/maps/Ranch/scripts.pory"
	applymovement 35, ProtestorMadInPlaceLeft
# 1824 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1825 "data/maps/Ranch/scripts.pory"
	delay 15
# 1826 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_WellEncounterFarmer_Text_10
# 1827 "data/maps/Ranch/scripts.pory"
	closemessage
# 1828 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 1829 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 55
	goto_if_eq Ranch_EventScript_WellEncounterProtestor_19
Ranch_EventScript_WellEncounterProtestor_17:
# 1834 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 56
	goto_if_eq Ranch_EventScript_WellEncounterProtestor_29
Ranch_EventScript_WellEncounterProtestor_27:
# 1839 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 57
	goto_if_eq Ranch_EventScript_WellEncounterProtestor_39
Ranch_EventScript_WellEncounterProtestor_37:
# 1842 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1843 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_DECLAN, Ranch_EventScript_WellEncounterFarmer_Text_11, Ranch_EventScript_WellEncounterFarmer_Text_12, Ranch_EventScript_SecondProtestorLeave
	goto Ranch_EventScript_WellEncounterProtestor_1

Ranch_EventScript_WellEncounterProtestor_13:
# 1807 "data/maps/Ranch/scripts.pory"
	applymovement 34, Common_Movement_FacePlayer
	goto Ranch_EventScript_WellEncounterProtestor_12

Ranch_EventScript_WellEncounterProtestor_14:
# 1806 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 59
	goto_if_eq Ranch_EventScript_WellEncounterProtestor_13
	goto Ranch_EventScript_WellEncounterProtestor_12

Ranch_EventScript_WellEncounterProtestor_18:
# 1830 "data/maps/Ranch/scripts.pory"
	applymovement 35, Protestor2ToLeft
# 1831 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1832 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto Ranch_EventScript_WellEncounterProtestor_17

Ranch_EventScript_WellEncounterProtestor_19:
# 1829 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 59
	goto_if_eq Ranch_EventScript_WellEncounterProtestor_18
	goto Ranch_EventScript_WellEncounterProtestor_17

Ranch_EventScript_WellEncounterProtestor_23:
# 1810 "data/maps/Ranch/scripts.pory"
	applymovement 34, Common_Movement_FacePlayer
	goto Ranch_EventScript_WellEncounterProtestor_22

Ranch_EventScript_WellEncounterProtestor_24:
# 1809 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 60
	goto_if_eq Ranch_EventScript_WellEncounterProtestor_23
	goto Ranch_EventScript_WellEncounterProtestor_22

Ranch_EventScript_WellEncounterProtestor_28:
# 1835 "data/maps/Ranch/scripts.pory"
	applymovement 35, Protestor2Down
# 1836 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1837 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Ranch_EventScript_WellEncounterProtestor_27

Ranch_EventScript_WellEncounterProtestor_29:
# 1834 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 60
	goto_if_eq Ranch_EventScript_WellEncounterProtestor_28
	goto Ranch_EventScript_WellEncounterProtestor_27

Ranch_EventScript_WellEncounterProtestor_33:
# 1813 "data/maps/Ranch/scripts.pory"
	applymovement 34, Farmer2ToRight
# 1814 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1815 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Ranch_EventScript_WellEncounterProtestor_32

Ranch_EventScript_WellEncounterProtestor_34:
# 1812 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 60
	goto_if_eq Ranch_EventScript_WellEncounterProtestor_33
	goto Ranch_EventScript_WellEncounterProtestor_32

Ranch_EventScript_WellEncounterProtestor_38:
# 1840 "data/maps/Ranch/scripts.pory"
	applymovement 35, Common_Movement_FacePlayer
	goto Ranch_EventScript_WellEncounterProtestor_37

Ranch_EventScript_WellEncounterProtestor_39:
# 1839 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 60
	goto_if_eq Ranch_EventScript_WellEncounterProtestor_38
	goto Ranch_EventScript_WellEncounterProtestor_37


Ranch_EventScript_SecondFarmerLeave::
# 1858 "data/maps/Ranch/scripts.pory"
	lock
# 1859 "data/maps/Ranch/scripts.pory"
	delay 15
# 1860 "data/maps/Ranch/scripts.pory"
	applymovement 34, Common_Movement_FaceAwayPlayer
# 1861 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1862 "data/maps/Ranch/scripts.pory"
	delay 15
# 1863 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SecondFarmerLeave_Text_0
# 1864 "data/maps/Ranch/scripts.pory"
	closemessage
# 1865 "data/maps/Ranch/scripts.pory"
	delay 15
# 1866 "data/maps/Ranch/scripts.pory"
	applymovement 34, FarmerFreakOut
# 1867 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 1868 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1869 "data/maps/Ranch/scripts.pory"
	applymovement 34, Common_Movement_FacePlayer
# 1870 "data/maps/Ranch/scripts.pory"
	delay 15
# 1871 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SecondFarmerLeave_Text_1
# 1872 "data/maps/Ranch/scripts.pory"
	closemessage
# 1873 "data/maps/Ranch/scripts.pory"
	delay 15
# 1874 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1875 "data/maps/Ranch/scripts.pory"
	removeobject 34
# 1876 "data/maps/Ranch/scripts.pory"
	removeobject 32
# 1877 "data/maps/Ranch/scripts.pory"
	removeobject 33
# 1878 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 1879 "data/maps/Ranch/scripts.pory"
	waitse
# 1880 "data/maps/Ranch/scripts.pory"
	setflag FLAG_PROTEST_WIN_2
# 1881 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER2_BATTLE
# 1882 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER1_BATTLE, Ranch_EventScript_SecondFarmerLeave_4
Ranch_EventScript_SecondFarmerLeave_1:
# 1886 "data/maps/Ranch/scripts.pory"
	addvar VAR_RANCH_MORALITY_SYSTEM, 1
# 1888 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1889 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 35, MOVEMENT_TYPE_WANDER_AROUND
# 1890 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1891 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 35, 57, 59
# 1892 "data/maps/Ranch/scripts.pory"
	addobject 35
# 1893 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1894 "data/maps/Ranch/scripts.pory"
	delay 15
# 1895 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1896 "data/maps/Ranch/scripts.pory"
	goto Ranch_EventScript_ProtestWin2
# 1897 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_SecondFarmerLeave_2:
# 1883 "data/maps/Ranch/scripts.pory"
	setflag FLAG_READY_FINAL_RANCH_BATTLE
# 1884 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_STATE, 2
	goto Ranch_EventScript_SecondFarmerLeave_1

Ranch_EventScript_SecondFarmerLeave_3:
# 1882 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER3_BATTLE, Ranch_EventScript_SecondFarmerLeave_8
	goto Ranch_EventScript_SecondFarmerLeave_1

Ranch_EventScript_SecondFarmerLeave_4:
# 1882 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER2_BATTLE, Ranch_EventScript_SecondFarmerLeave_3
	goto Ranch_EventScript_SecondFarmerLeave_1

Ranch_EventScript_SecondFarmerLeave_7:
# 1882 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER5_BATTLE, Ranch_EventScript_SecondFarmerLeave_12
	goto Ranch_EventScript_SecondFarmerLeave_1

Ranch_EventScript_SecondFarmerLeave_8:
# 1882 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER4_BATTLE, Ranch_EventScript_SecondFarmerLeave_7
	goto Ranch_EventScript_SecondFarmerLeave_1

Ranch_EventScript_SecondFarmerLeave_11:
# 1882 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER7_BATTLE, Ranch_EventScript_SecondFarmerLeave_2
	goto Ranch_EventScript_SecondFarmerLeave_1

Ranch_EventScript_SecondFarmerLeave_12:
# 1882 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER6_BATTLE, Ranch_EventScript_SecondFarmerLeave_11
	goto Ranch_EventScript_SecondFarmerLeave_1


Ranch_EventScript_SecondProtestorLeave::
# 1902 "data/maps/Ranch/scripts.pory"
	lock
# 1903 "data/maps/Ranch/scripts.pory"
	delay 15
# 1904 "data/maps/Ranch/scripts.pory"
	applymovement 35, Common_Movement_FaceAwayPlayer
# 1905 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1906 "data/maps/Ranch/scripts.pory"
	delay 15
# 1907 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SecondProtestorLeave_Text_0
# 1908 "data/maps/Ranch/scripts.pory"
	closemessage
# 1909 "data/maps/Ranch/scripts.pory"
	delay 15
# 1910 "data/maps/Ranch/scripts.pory"
	applymovement 35, FarmerFreakOut
# 1911 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 1912 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1913 "data/maps/Ranch/scripts.pory"
	applymovement 35, Common_Movement_FacePlayer
# 1914 "data/maps/Ranch/scripts.pory"
	delay 15
# 1915 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SecondProtestorLeave_Text_1
# 1916 "data/maps/Ranch/scripts.pory"
	closemessage
# 1917 "data/maps/Ranch/scripts.pory"
	delay 15
# 1918 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 1919 "data/maps/Ranch/scripts.pory"
	removeobject 35
# 1920 "data/maps/Ranch/scripts.pory"
	removeobject 32
# 1921 "data/maps/Ranch/scripts.pory"
	removeobject 33
# 1922 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 1923 "data/maps/Ranch/scripts.pory"
	waitse
# 1924 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER_WIN_2
# 1925 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER2_BATTLE
# 1926 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER1_BATTLE, Ranch_EventScript_SecondProtestorLeave_4
Ranch_EventScript_SecondProtestorLeave_1:
# 1930 "data/maps/Ranch/scripts.pory"
	subvar VAR_RANCH_MORALITY_SYSTEM, 1
# 1931 "data/maps/Ranch/scripts.pory"
	applymovement 34, Common_Movement_UnlockFacingDirection
# 1932 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1933 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 34, MOVEMENT_TYPE_WANDER_AROUND
# 1934 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1935 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 34, 56, 59
# 1936 "data/maps/Ranch/scripts.pory"
	addobject 34
# 1937 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1938 "data/maps/Ranch/scripts.pory"
	delay 15
# 1939 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 1940 "data/maps/Ranch/scripts.pory"
	goto Ranch_EventScript_FarmerWin2
# 1941 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_SecondProtestorLeave_2:
# 1927 "data/maps/Ranch/scripts.pory"
	setflag FLAG_READY_FINAL_RANCH_BATTLE
# 1928 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_STATE, 2
	goto Ranch_EventScript_SecondProtestorLeave_1

Ranch_EventScript_SecondProtestorLeave_3:
# 1926 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER3_BATTLE, Ranch_EventScript_SecondProtestorLeave_8
	goto Ranch_EventScript_SecondProtestorLeave_1

Ranch_EventScript_SecondProtestorLeave_4:
# 1926 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER2_BATTLE, Ranch_EventScript_SecondProtestorLeave_3
	goto Ranch_EventScript_SecondProtestorLeave_1

Ranch_EventScript_SecondProtestorLeave_7:
# 1926 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER5_BATTLE, Ranch_EventScript_SecondProtestorLeave_12
	goto Ranch_EventScript_SecondProtestorLeave_1

Ranch_EventScript_SecondProtestorLeave_8:
# 1926 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER4_BATTLE, Ranch_EventScript_SecondProtestorLeave_7
	goto Ranch_EventScript_SecondProtestorLeave_1

Ranch_EventScript_SecondProtestorLeave_11:
# 1926 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER7_BATTLE, Ranch_EventScript_SecondProtestorLeave_2
	goto Ranch_EventScript_SecondProtestorLeave_1

Ranch_EventScript_SecondProtestorLeave_12:
# 1926 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER6_BATTLE, Ranch_EventScript_SecondProtestorLeave_11
	goto Ranch_EventScript_SecondProtestorLeave_1


# 1945 "data/maps/Ranch/scripts.pory"
FarmerMadInPlaceRight:
# 1946 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_right
# 1946 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_right
# 1946 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_right
# 1947 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_right
# 1947 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_right
# 1947 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_right
# 1947 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_right
# 1947 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_right
	step_end

# 1950 "data/maps/Ranch/scripts.pory"
ProtestorMadInPlaceLeft:
# 1951 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_left
# 1951 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_left
# 1951 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_left
# 1952 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_left
# 1952 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_left
# 1952 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_left
# 1952 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_left
# 1952 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_left
	step_end

# 1955 "data/maps/Ranch/scripts.pory"
Farmer2ToRight:
# 1956 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 1957 "data/maps/Ranch/scripts.pory"
	face_right
	step_end

# 1960 "data/maps/Ranch/scripts.pory"
Protestor2ToLeft:
# 1961 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 1962 "data/maps/Ranch/scripts.pory"
	walk_fast_left
# 1962 "data/maps/Ranch/scripts.pory"
	walk_fast_left
# 1963 "data/maps/Ranch/scripts.pory"
	face_up
	step_end

# 1966 "data/maps/Ranch/scripts.pory"
Protestor2Down:
# 1967 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 1968 "data/maps/Ranch/scripts.pory"
	face_left
	step_end

Ranch_EventScript_NativeEncounterFarmer::
# 1972 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER3_BATTLE, Ranch_EventScript_NativeEncounterFarmer_2
Ranch_EventScript_NativeEncounterFarmer_1:
# 2056 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER3_BATTLE, Ranch_EventScript_NativeEncounterFarmer_5
Ranch_EventScript_NativeEncounterFarmer_4:
# 2063 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_NativeEncounterFarmer_2:
# 1973 "data/maps/Ranch/scripts.pory"
	lock
# 1974 "data/maps/Ranch/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceFastDown
# 1975 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1976 "data/maps/Ranch/scripts.pory"
	delay 15
# 1977 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_NativeEncounterFarmer_Text_0
# 1978 "data/maps/Ranch/scripts.pory"
	closemessage
# 1979 "data/maps/Ranch/scripts.pory"
	delay 15
# 1980 "data/maps/Ranch/scripts.pory"
	applymovement 18, Common_Movement_WalkInPlaceFastUp
# 1981 "data/maps/Ranch/scripts.pory"
	delay 15
# 1982 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_NativeEncounterFarmer_Text_1
# 1983 "data/maps/Ranch/scripts.pory"
	closemessage
# 1984 "data/maps/Ranch/scripts.pory"
	delay 15
# 1985 "data/maps/Ranch/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceFastDown
# 1986 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 1987 "data/maps/Ranch/scripts.pory"
	delay 15
# 1988 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_NativeEncounterFarmer_Text_2
# 1989 "data/maps/Ranch/scripts.pory"
	closemessage
# 1990 "data/maps/Ranch/scripts.pory"
	delay 15
# 1991 "data/maps/Ranch/scripts.pory"
	applymovement 18, Common_Movement_WalkInPlaceFastUp
# 1992 "data/maps/Ranch/scripts.pory"
	delay 15
# 1993 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_NativeEncounterFarmer_Text_3
# 1994 "data/maps/Ranch/scripts.pory"
	closemessage
# 1995 "data/maps/Ranch/scripts.pory"
	delay 15
# 1996 "data/maps/Ranch/scripts.pory"
	faceplayer
# 1997 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_NativeEncounterFarmer_Text_4
# 1998 "data/maps/Ranch/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Ranch_EventScript_NativeEncounterFarmer_Text_5, Ranch_EventScript_NativeEncounterFarmer_Text_6
# 1999 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Ranch_EventScript_NativeEncounterFarmer_8
Ranch_EventScript_NativeEncounterFarmer_7:
# 2027 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Ranch_EventScript_NativeEncounterFarmer_10
	goto Ranch_EventScript_NativeEncounterFarmer_1

Ranch_EventScript_NativeEncounterFarmer_5:
# 2057 "data/maps/Ranch/scripts.pory"
	lock
# 2058 "data/maps/Ranch/scripts.pory"
	faceplayer
# 2059 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2060 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_NativeEncounterFarmer_Text_13
# 2061 "data/maps/Ranch/scripts.pory"
	closemessage
	goto Ranch_EventScript_NativeEncounterFarmer_4

Ranch_EventScript_NativeEncounterFarmer_8:
# 2000 "data/maps/Ranch/scripts.pory"
	applymovement 18, Common_Movement_LockFacingDirection
# 2001 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2002 "data/maps/Ranch/scripts.pory"
	applymovement 17, FarmerMadInPlaceDown
# 2003 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2004 "data/maps/Ranch/scripts.pory"
	delay 15
# 2005 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_NativeEncounterFarmer_Text_7
# 2006 "data/maps/Ranch/scripts.pory"
	closemessage
# 2007 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 2008 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq Ranch_EventScript_NativeEncounterFarmer_14
Ranch_EventScript_NativeEncounterFarmer_12:
# 2011 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 37
	goto_if_eq Ranch_EventScript_NativeEncounterFarmer_24
Ranch_EventScript_NativeEncounterFarmer_22:
# 2014 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 37
	goto_if_eq Ranch_EventScript_NativeEncounterFarmer_34
Ranch_EventScript_NativeEncounterFarmer_32:
# 2019 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq Ranch_EventScript_NativeEncounterFarmer_44
Ranch_EventScript_NativeEncounterFarmer_42:
# 2024 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2025 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_RUSTURF_TUNNEL, Ranch_EventScript_NativeEncounterFarmer_Text_8, Ranch_EventScript_NativeEncounterFarmer_Text_9, Ranch_EventScript_ThirdFarmerLeave
	goto Ranch_EventScript_NativeEncounterFarmer_7

Ranch_EventScript_NativeEncounterFarmer_10:
# 2028 "data/maps/Ranch/scripts.pory"
	applymovement 17, Common_Movement_LockFacingDirection
# 2029 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2030 "data/maps/Ranch/scripts.pory"
	applymovement 18, ProtestorMadInPlaceUp
# 2031 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2032 "data/maps/Ranch/scripts.pory"
	delay 15
# 2033 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_NativeEncounterFarmer_Text_10
# 2034 "data/maps/Ranch/scripts.pory"
	closemessage
# 2035 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 2036 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq Ranch_EventScript_NativeEncounterFarmer_19
Ranch_EventScript_NativeEncounterFarmer_17:
# 2039 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 37
	goto_if_eq Ranch_EventScript_NativeEncounterFarmer_29
Ranch_EventScript_NativeEncounterFarmer_27:
# 2042 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 37
	goto_if_eq Ranch_EventScript_NativeEncounterFarmer_39
Ranch_EventScript_NativeEncounterFarmer_37:
# 2047 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq Ranch_EventScript_NativeEncounterFarmer_49
Ranch_EventScript_NativeEncounterFarmer_47:
# 2052 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2053 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Ranch_EventScript_NativeEncounterFarmer_Text_11, Ranch_EventScript_NativeEncounterFarmer_Text_12, Ranch_EventScript_ThirdProtestorLeave
	goto Ranch_EventScript_NativeEncounterFarmer_1

Ranch_EventScript_NativeEncounterFarmer_13:
# 2009 "data/maps/Ranch/scripts.pory"
	applymovement 17, Common_Movement_FacePlayer
	goto Ranch_EventScript_NativeEncounterFarmer_12

Ranch_EventScript_NativeEncounterFarmer_14:
# 2008 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 48
	goto_if_eq Ranch_EventScript_NativeEncounterFarmer_13
	goto Ranch_EventScript_NativeEncounterFarmer_12

Ranch_EventScript_NativeEncounterFarmer_18:
# 2037 "data/maps/Ranch/scripts.pory"
	applymovement 18, Common_Movement_FacePlayer
	goto Ranch_EventScript_NativeEncounterFarmer_17

Ranch_EventScript_NativeEncounterFarmer_19:
# 2036 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 51
	goto_if_eq Ranch_EventScript_NativeEncounterFarmer_18
	goto Ranch_EventScript_NativeEncounterFarmer_17

Ranch_EventScript_NativeEncounterFarmer_23:
# 2012 "data/maps/Ranch/scripts.pory"
	applymovement 17, Common_Movement_FacePlayer
	goto Ranch_EventScript_NativeEncounterFarmer_22

Ranch_EventScript_NativeEncounterFarmer_24:
# 2011 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 49
	goto_if_eq Ranch_EventScript_NativeEncounterFarmer_23
	goto Ranch_EventScript_NativeEncounterFarmer_22

Ranch_EventScript_NativeEncounterFarmer_28:
# 2040 "data/maps/Ranch/scripts.pory"
	applymovement 18, Common_Movement_FacePlayer
	goto Ranch_EventScript_NativeEncounterFarmer_27

Ranch_EventScript_NativeEncounterFarmer_29:
# 2039 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 50
	goto_if_eq Ranch_EventScript_NativeEncounterFarmer_28
	goto Ranch_EventScript_NativeEncounterFarmer_27

Ranch_EventScript_NativeEncounterFarmer_33:
# 2015 "data/maps/Ranch/scripts.pory"
	applymovement 17, Farmer3ToRight
# 2016 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2017 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto Ranch_EventScript_NativeEncounterFarmer_32

Ranch_EventScript_NativeEncounterFarmer_34:
# 2014 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 50
	goto_if_eq Ranch_EventScript_NativeEncounterFarmer_33
	goto Ranch_EventScript_NativeEncounterFarmer_32

Ranch_EventScript_NativeEncounterFarmer_38:
# 2043 "data/maps/Ranch/scripts.pory"
	applymovement 18, Protestor3ToRight
# 2044 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2045 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto Ranch_EventScript_NativeEncounterFarmer_37

Ranch_EventScript_NativeEncounterFarmer_39:
# 2042 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 49
	goto_if_eq Ranch_EventScript_NativeEncounterFarmer_38
	goto Ranch_EventScript_NativeEncounterFarmer_37

Ranch_EventScript_NativeEncounterFarmer_43:
# 2020 "data/maps/Ranch/scripts.pory"
	applymovement 17, Farmer3ToBottom
# 2021 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2022 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Ranch_EventScript_NativeEncounterFarmer_42

Ranch_EventScript_NativeEncounterFarmer_44:
# 2019 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 51
	goto_if_eq Ranch_EventScript_NativeEncounterFarmer_43
	goto Ranch_EventScript_NativeEncounterFarmer_42

Ranch_EventScript_NativeEncounterFarmer_48:
# 2048 "data/maps/Ranch/scripts.pory"
	applymovement 18, Protestor3ToTop
# 2049 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2050 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Ranch_EventScript_NativeEncounterFarmer_47

Ranch_EventScript_NativeEncounterFarmer_49:
# 2047 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 48
	goto_if_eq Ranch_EventScript_NativeEncounterFarmer_48
	goto Ranch_EventScript_NativeEncounterFarmer_47


Ranch_EventScript_NativeEncounterProtestor::
# 2068 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER3_BATTLE, Ranch_EventScript_NativeEncounterProtestor_2
Ranch_EventScript_NativeEncounterProtestor_1:
# 2152 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER3_BATTLE, Ranch_EventScript_NativeEncounterProtestor_5
Ranch_EventScript_NativeEncounterProtestor_4:
# 2159 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_NativeEncounterProtestor_2:
# 2069 "data/maps/Ranch/scripts.pory"
	lock
# 2070 "data/maps/Ranch/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceFastDown
# 2071 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2072 "data/maps/Ranch/scripts.pory"
	delay 15
# 2073 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_NativeEncounterFarmer_Text_0
# 2074 "data/maps/Ranch/scripts.pory"
	closemessage
# 2075 "data/maps/Ranch/scripts.pory"
	delay 15
# 2076 "data/maps/Ranch/scripts.pory"
	applymovement 18, Common_Movement_WalkInPlaceFastUp
# 2077 "data/maps/Ranch/scripts.pory"
	delay 15
# 2078 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_NativeEncounterFarmer_Text_1
# 2079 "data/maps/Ranch/scripts.pory"
	closemessage
# 2080 "data/maps/Ranch/scripts.pory"
	delay 15
# 2081 "data/maps/Ranch/scripts.pory"
	applymovement 17, Common_Movement_WalkInPlaceFastDown
# 2082 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2083 "data/maps/Ranch/scripts.pory"
	delay 15
# 2084 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_NativeEncounterFarmer_Text_2
# 2085 "data/maps/Ranch/scripts.pory"
	closemessage
# 2086 "data/maps/Ranch/scripts.pory"
	delay 15
# 2087 "data/maps/Ranch/scripts.pory"
	applymovement 18, Common_Movement_WalkInPlaceFastUp
# 2088 "data/maps/Ranch/scripts.pory"
	delay 15
# 2089 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_NativeEncounterFarmer_Text_3
# 2090 "data/maps/Ranch/scripts.pory"
	closemessage
# 2091 "data/maps/Ranch/scripts.pory"
	delay 15
# 2092 "data/maps/Ranch/scripts.pory"
	faceplayer
# 2093 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_NativeEncounterFarmer_Text_4
# 2094 "data/maps/Ranch/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Ranch_EventScript_NativeEncounterFarmer_Text_5, Ranch_EventScript_NativeEncounterFarmer_Text_6
# 2095 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Ranch_EventScript_NativeEncounterProtestor_8
Ranch_EventScript_NativeEncounterProtestor_7:
# 2123 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Ranch_EventScript_NativeEncounterProtestor_10
	goto Ranch_EventScript_NativeEncounterProtestor_1

Ranch_EventScript_NativeEncounterProtestor_5:
# 2153 "data/maps/Ranch/scripts.pory"
	lock
# 2154 "data/maps/Ranch/scripts.pory"
	faceplayer
# 2155 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2156 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_NativeEncounterProtestor_Text_0
# 2157 "data/maps/Ranch/scripts.pory"
	closemessage
	goto Ranch_EventScript_NativeEncounterProtestor_4

Ranch_EventScript_NativeEncounterProtestor_8:
# 2096 "data/maps/Ranch/scripts.pory"
	applymovement 18, Common_Movement_LockFacingDirection
# 2097 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2098 "data/maps/Ranch/scripts.pory"
	applymovement 17, FarmerMadInPlaceDown
# 2099 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2100 "data/maps/Ranch/scripts.pory"
	delay 15
# 2101 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_NativeEncounterFarmer_Text_7
# 2102 "data/maps/Ranch/scripts.pory"
	closemessage
# 2103 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 2104 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq Ranch_EventScript_NativeEncounterProtestor_14
Ranch_EventScript_NativeEncounterProtestor_12:
# 2107 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 37
	goto_if_eq Ranch_EventScript_NativeEncounterProtestor_24
Ranch_EventScript_NativeEncounterProtestor_22:
# 2110 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 37
	goto_if_eq Ranch_EventScript_NativeEncounterProtestor_34
Ranch_EventScript_NativeEncounterProtestor_32:
# 2115 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq Ranch_EventScript_NativeEncounterProtestor_44
Ranch_EventScript_NativeEncounterProtestor_42:
# 2120 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2121 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_RUSTURF_TUNNEL, Ranch_EventScript_NativeEncounterFarmer_Text_8, Ranch_EventScript_NativeEncounterFarmer_Text_9, Ranch_EventScript_ThirdFarmerLeave
	goto Ranch_EventScript_NativeEncounterProtestor_7

Ranch_EventScript_NativeEncounterProtestor_10:
# 2124 "data/maps/Ranch/scripts.pory"
	applymovement 17, Common_Movement_LockFacingDirection
# 2125 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2126 "data/maps/Ranch/scripts.pory"
	applymovement 18, ProtestorMadInPlaceUp
# 2127 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2128 "data/maps/Ranch/scripts.pory"
	delay 15
# 2129 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_NativeEncounterFarmer_Text_10
# 2130 "data/maps/Ranch/scripts.pory"
	closemessage
# 2131 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 2132 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq Ranch_EventScript_NativeEncounterProtestor_19
Ranch_EventScript_NativeEncounterProtestor_17:
# 2135 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 37
	goto_if_eq Ranch_EventScript_NativeEncounterProtestor_29
Ranch_EventScript_NativeEncounterProtestor_27:
# 2138 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 37
	goto_if_eq Ranch_EventScript_NativeEncounterProtestor_39
Ranch_EventScript_NativeEncounterProtestor_37:
# 2143 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 36
	goto_if_eq Ranch_EventScript_NativeEncounterProtestor_49
Ranch_EventScript_NativeEncounterProtestor_47:
# 2148 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2149 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_1, Ranch_EventScript_NativeEncounterFarmer_Text_11, Ranch_EventScript_NativeEncounterFarmer_Text_12, Ranch_EventScript_ThirdProtestorLeave
	goto Ranch_EventScript_NativeEncounterProtestor_1

Ranch_EventScript_NativeEncounterProtestor_13:
# 2105 "data/maps/Ranch/scripts.pory"
	applymovement 17, Common_Movement_FacePlayer
	goto Ranch_EventScript_NativeEncounterProtestor_12

Ranch_EventScript_NativeEncounterProtestor_14:
# 2104 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 48
	goto_if_eq Ranch_EventScript_NativeEncounterProtestor_13
	goto Ranch_EventScript_NativeEncounterProtestor_12

Ranch_EventScript_NativeEncounterProtestor_18:
# 2133 "data/maps/Ranch/scripts.pory"
	applymovement 18, Common_Movement_FacePlayer
	goto Ranch_EventScript_NativeEncounterProtestor_17

Ranch_EventScript_NativeEncounterProtestor_19:
# 2132 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 51
	goto_if_eq Ranch_EventScript_NativeEncounterProtestor_18
	goto Ranch_EventScript_NativeEncounterProtestor_17

Ranch_EventScript_NativeEncounterProtestor_23:
# 2108 "data/maps/Ranch/scripts.pory"
	applymovement 17, Common_Movement_FacePlayer
	goto Ranch_EventScript_NativeEncounterProtestor_22

Ranch_EventScript_NativeEncounterProtestor_24:
# 2107 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 49
	goto_if_eq Ranch_EventScript_NativeEncounterProtestor_23
	goto Ranch_EventScript_NativeEncounterProtestor_22

Ranch_EventScript_NativeEncounterProtestor_28:
# 2136 "data/maps/Ranch/scripts.pory"
	applymovement 18, Common_Movement_FacePlayer
	goto Ranch_EventScript_NativeEncounterProtestor_27

Ranch_EventScript_NativeEncounterProtestor_29:
# 2135 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 50
	goto_if_eq Ranch_EventScript_NativeEncounterProtestor_28
	goto Ranch_EventScript_NativeEncounterProtestor_27

Ranch_EventScript_NativeEncounterProtestor_33:
# 2111 "data/maps/Ranch/scripts.pory"
	applymovement 17, Farmer3ToRight
# 2112 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2113 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto Ranch_EventScript_NativeEncounterProtestor_32

Ranch_EventScript_NativeEncounterProtestor_34:
# 2110 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 50
	goto_if_eq Ranch_EventScript_NativeEncounterProtestor_33
	goto Ranch_EventScript_NativeEncounterProtestor_32

Ranch_EventScript_NativeEncounterProtestor_38:
# 2139 "data/maps/Ranch/scripts.pory"
	applymovement 18, Protestor3ToRight
# 2140 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2141 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto Ranch_EventScript_NativeEncounterProtestor_37

Ranch_EventScript_NativeEncounterProtestor_39:
# 2138 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 49
	goto_if_eq Ranch_EventScript_NativeEncounterProtestor_38
	goto Ranch_EventScript_NativeEncounterProtestor_37

Ranch_EventScript_NativeEncounterProtestor_43:
# 2116 "data/maps/Ranch/scripts.pory"
	applymovement 17, Farmer3ToBottom
# 2117 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2118 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Ranch_EventScript_NativeEncounterProtestor_42

Ranch_EventScript_NativeEncounterProtestor_44:
# 2115 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 51
	goto_if_eq Ranch_EventScript_NativeEncounterProtestor_43
	goto Ranch_EventScript_NativeEncounterProtestor_42

Ranch_EventScript_NativeEncounterProtestor_48:
# 2144 "data/maps/Ranch/scripts.pory"
	applymovement 18, Protestor3ToTop
# 2145 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2146 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Ranch_EventScript_NativeEncounterProtestor_47

Ranch_EventScript_NativeEncounterProtestor_49:
# 2143 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 48
	goto_if_eq Ranch_EventScript_NativeEncounterProtestor_48
	goto Ranch_EventScript_NativeEncounterProtestor_47


Ranch_EventScript_ThirdFarmerLeave::
# 2164 "data/maps/Ranch/scripts.pory"
	lock
# 2165 "data/maps/Ranch/scripts.pory"
	delay 15
# 2166 "data/maps/Ranch/scripts.pory"
	applymovement 17, Common_Movement_FaceAwayPlayer
# 2167 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2168 "data/maps/Ranch/scripts.pory"
	delay 15
# 2169 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_ThirdFarmerLeave_Text_0
# 2170 "data/maps/Ranch/scripts.pory"
	closemessage
# 2171 "data/maps/Ranch/scripts.pory"
	delay 15
# 2172 "data/maps/Ranch/scripts.pory"
	applymovement 17, Common_Movement_FacePlayer
# 2173 "data/maps/Ranch/scripts.pory"
	delay 15
# 2174 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_ThirdFarmerLeave_Text_1
# 2175 "data/maps/Ranch/scripts.pory"
	closemessage
# 2176 "data/maps/Ranch/scripts.pory"
	delay 15
# 2177 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 2178 "data/maps/Ranch/scripts.pory"
	removeobject 17
# 2179 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 2180 "data/maps/Ranch/scripts.pory"
	waitse
# 2181 "data/maps/Ranch/scripts.pory"
	setflag FLAG_PROTEST_WIN_3
# 2182 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER3_BATTLE
# 2183 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER1_BATTLE, Ranch_EventScript_ThirdFarmerLeave_4
Ranch_EventScript_ThirdFarmerLeave_1:
# 2187 "data/maps/Ranch/scripts.pory"
	addvar VAR_RANCH_MORALITY_SYSTEM, 1
# 2188 "data/maps/Ranch/scripts.pory"
	applymovement 18, Common_Movement_UnlockFacingDirection
# 2189 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2190 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 18, MOVEMENT_TYPE_WANDER_AROUND
# 2191 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2192 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 18, 36, 50
# 2193 "data/maps/Ranch/scripts.pory"
	addobject 18
# 2194 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2195 "data/maps/Ranch/scripts.pory"
	delay 15
# 2196 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 2197 "data/maps/Ranch/scripts.pory"
	goto Ranch_EventScript_ProtestWin3
# 2198 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_ThirdFarmerLeave_2:
# 2184 "data/maps/Ranch/scripts.pory"
	setflag FLAG_READY_FINAL_RANCH_BATTLE
# 2185 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_STATE, 2
	goto Ranch_EventScript_ThirdFarmerLeave_1

Ranch_EventScript_ThirdFarmerLeave_3:
# 2183 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER3_BATTLE, Ranch_EventScript_ThirdFarmerLeave_8
	goto Ranch_EventScript_ThirdFarmerLeave_1

Ranch_EventScript_ThirdFarmerLeave_4:
# 2183 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER2_BATTLE, Ranch_EventScript_ThirdFarmerLeave_3
	goto Ranch_EventScript_ThirdFarmerLeave_1

Ranch_EventScript_ThirdFarmerLeave_7:
# 2183 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER5_BATTLE, Ranch_EventScript_ThirdFarmerLeave_12
	goto Ranch_EventScript_ThirdFarmerLeave_1

Ranch_EventScript_ThirdFarmerLeave_8:
# 2183 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER4_BATTLE, Ranch_EventScript_ThirdFarmerLeave_7
	goto Ranch_EventScript_ThirdFarmerLeave_1

Ranch_EventScript_ThirdFarmerLeave_11:
# 2183 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER7_BATTLE, Ranch_EventScript_ThirdFarmerLeave_2
	goto Ranch_EventScript_ThirdFarmerLeave_1

Ranch_EventScript_ThirdFarmerLeave_12:
# 2183 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER6_BATTLE, Ranch_EventScript_ThirdFarmerLeave_11
	goto Ranch_EventScript_ThirdFarmerLeave_1


Ranch_EventScript_ThirdProtestorLeave::
# 2203 "data/maps/Ranch/scripts.pory"
	lock
# 2204 "data/maps/Ranch/scripts.pory"
	delay 15
# 2205 "data/maps/Ranch/scripts.pory"
	applymovement 18, Common_Movement_FaceAwayPlayer
# 2206 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2207 "data/maps/Ranch/scripts.pory"
	delay 15
# 2208 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_ThirdProtestorLeave_Text_0
# 2209 "data/maps/Ranch/scripts.pory"
	closemessage
# 2210 "data/maps/Ranch/scripts.pory"
	delay 15
# 2211 "data/maps/Ranch/scripts.pory"
	applymovement 18, FarmerFreakOut
# 2212 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 2213 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2214 "data/maps/Ranch/scripts.pory"
	applymovement 18, Common_Movement_FacePlayer
# 2215 "data/maps/Ranch/scripts.pory"
	delay 15
# 2216 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_ThirdProtestorLeave_Text_1
# 2217 "data/maps/Ranch/scripts.pory"
	closemessage
# 2218 "data/maps/Ranch/scripts.pory"
	delay 15
# 2219 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 2220 "data/maps/Ranch/scripts.pory"
	removeobject 18
# 2221 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 2222 "data/maps/Ranch/scripts.pory"
	waitse
# 2223 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER_WIN_3
# 2224 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER3_BATTLE
# 2225 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER1_BATTLE, Ranch_EventScript_ThirdProtestorLeave_4
Ranch_EventScript_ThirdProtestorLeave_1:
# 2229 "data/maps/Ranch/scripts.pory"
	subvar VAR_RANCH_MORALITY_SYSTEM, 1
# 2230 "data/maps/Ranch/scripts.pory"
	applymovement 17, Common_Movement_UnlockFacingDirection
# 2231 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2232 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 17, MOVEMENT_TYPE_WANDER_AROUND
# 2233 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2234 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 17, 36, 49
# 2235 "data/maps/Ranch/scripts.pory"
	addobject 17
# 2236 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2237 "data/maps/Ranch/scripts.pory"
	delay 15
# 2238 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 2239 "data/maps/Ranch/scripts.pory"
	goto Ranch_EventScript_FarmerWin3
# 2240 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_ThirdProtestorLeave_2:
# 2226 "data/maps/Ranch/scripts.pory"
	setflag FLAG_READY_FINAL_RANCH_BATTLE
# 2227 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_STATE, 2
	goto Ranch_EventScript_ThirdProtestorLeave_1

Ranch_EventScript_ThirdProtestorLeave_3:
# 2225 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER3_BATTLE, Ranch_EventScript_ThirdProtestorLeave_8
	goto Ranch_EventScript_ThirdProtestorLeave_1

Ranch_EventScript_ThirdProtestorLeave_4:
# 2225 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER2_BATTLE, Ranch_EventScript_ThirdProtestorLeave_3
	goto Ranch_EventScript_ThirdProtestorLeave_1

Ranch_EventScript_ThirdProtestorLeave_7:
# 2225 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER5_BATTLE, Ranch_EventScript_ThirdProtestorLeave_12
	goto Ranch_EventScript_ThirdProtestorLeave_1

Ranch_EventScript_ThirdProtestorLeave_8:
# 2225 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER4_BATTLE, Ranch_EventScript_ThirdProtestorLeave_7
	goto Ranch_EventScript_ThirdProtestorLeave_1

Ranch_EventScript_ThirdProtestorLeave_11:
# 2225 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER7_BATTLE, Ranch_EventScript_ThirdProtestorLeave_2
	goto Ranch_EventScript_ThirdProtestorLeave_1

Ranch_EventScript_ThirdProtestorLeave_12:
# 2225 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER6_BATTLE, Ranch_EventScript_ThirdProtestorLeave_11
	goto Ranch_EventScript_ThirdProtestorLeave_1


# 2244 "data/maps/Ranch/scripts.pory"
FarmerMadInPlaceDown:
# 2245 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 2245 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 2245 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 2246 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_down
# 2246 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_down
# 2246 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_down
# 2246 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_down
# 2246 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_down
	step_end

# 2249 "data/maps/Ranch/scripts.pory"
ProtestorMadInPlaceUp:
# 2250 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 2250 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 2250 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 2251 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_up
# 2251 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_up
# 2251 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_up
# 2251 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_up
# 2251 "data/maps/Ranch/scripts.pory"
	walk_in_place_faster_up
	step_end

# 2254 "data/maps/Ranch/scripts.pory"
Farmer3ToRight:
# 2255 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 2256 "data/maps/Ranch/scripts.pory"
	face_down
	step_end

# 2259 "data/maps/Ranch/scripts.pory"
Farmer3ToBottom:
# 2260 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 2261 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 2261 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 2262 "data/maps/Ranch/scripts.pory"
	face_left
	step_end

# 2265 "data/maps/Ranch/scripts.pory"
Protestor3ToRight:
# 2266 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 2267 "data/maps/Ranch/scripts.pory"
	face_up
	step_end

# 2270 "data/maps/Ranch/scripts.pory"
Protestor3ToTop:
# 2271 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 2272 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 2272 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 2273 "data/maps/Ranch/scripts.pory"
	face_left
	step_end

Ranch_EventScript_DroughtResistantEncounterFarmer::
# 2277 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER4_BATTLE, Ranch_EventScript_DroughtResistantEncounterFarmer_2
Ranch_EventScript_DroughtResistantEncounterFarmer_1:
# 2361 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER4_BATTLE, Ranch_EventScript_DroughtResistantEncounterFarmer_5
Ranch_EventScript_DroughtResistantEncounterFarmer_4:
# 2368 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_DroughtResistantEncounterFarmer_2:
# 2278 "data/maps/Ranch/scripts.pory"
	lock
# 2279 "data/maps/Ranch/scripts.pory"
	applymovement 19, Common_Movement_WalkInPlaceFastDown
# 2280 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2281 "data/maps/Ranch/scripts.pory"
	delay 15
# 2282 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_DroughtResistantEncounterFarmer_Text_0
# 2283 "data/maps/Ranch/scripts.pory"
	closemessage
# 2284 "data/maps/Ranch/scripts.pory"
	delay 15
# 2285 "data/maps/Ranch/scripts.pory"
	applymovement 20, Common_Movement_WalkInPlaceFastUp
# 2286 "data/maps/Ranch/scripts.pory"
	delay 15
# 2287 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_DroughtResistantEncounterFarmer_Text_1
# 2288 "data/maps/Ranch/scripts.pory"
	closemessage
# 2289 "data/maps/Ranch/scripts.pory"
	delay 15
# 2290 "data/maps/Ranch/scripts.pory"
	applymovement 19, Common_Movement_WalkInPlaceFastDown
# 2291 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2292 "data/maps/Ranch/scripts.pory"
	delay 15
# 2293 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_DroughtResistantEncounterFarmer_Text_2
# 2294 "data/maps/Ranch/scripts.pory"
	closemessage
# 2295 "data/maps/Ranch/scripts.pory"
	delay 15
# 2296 "data/maps/Ranch/scripts.pory"
	applymovement 20, Common_Movement_WalkInPlaceFastUp
# 2297 "data/maps/Ranch/scripts.pory"
	delay 15
# 2298 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_DroughtResistantEncounterFarmer_Text_3
# 2299 "data/maps/Ranch/scripts.pory"
	closemessage
# 2300 "data/maps/Ranch/scripts.pory"
	delay 15
# 2301 "data/maps/Ranch/scripts.pory"
	faceplayer
# 2302 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_DroughtResistantEncounterFarmer_Text_4
# 2303 "data/maps/Ranch/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Ranch_EventScript_DroughtResistantEncounterFarmer_Text_5, Ranch_EventScript_DroughtResistantEncounterFarmer_Text_6
# 2304 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterFarmer_8
Ranch_EventScript_DroughtResistantEncounterFarmer_7:
# 2332 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterFarmer_10
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_1

Ranch_EventScript_DroughtResistantEncounterFarmer_5:
# 2362 "data/maps/Ranch/scripts.pory"
	lock
# 2363 "data/maps/Ranch/scripts.pory"
	faceplayer
# 2364 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2365 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_DroughtResistantEncounterFarmer_Text_13
# 2366 "data/maps/Ranch/scripts.pory"
	closemessage
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_4

Ranch_EventScript_DroughtResistantEncounterFarmer_8:
# 2305 "data/maps/Ranch/scripts.pory"
	applymovement 20, Common_Movement_LockFacingDirection
# 2306 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2307 "data/maps/Ranch/scripts.pory"
	applymovement 19, FarmerMadInPlaceDown
# 2308 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2309 "data/maps/Ranch/scripts.pory"
	delay 15
# 2310 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_DroughtResistantEncounterFarmer_Text_7
# 2311 "data/maps/Ranch/scripts.pory"
	closemessage
# 2312 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 2313 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 66
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterFarmer_14
Ranch_EventScript_DroughtResistantEncounterFarmer_12:
# 2316 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 65
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterFarmer_24
Ranch_EventScript_DroughtResistantEncounterFarmer_22:
# 2319 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 65
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterFarmer_34
Ranch_EventScript_DroughtResistantEncounterFarmer_32:
# 2324 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 66
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterFarmer_44
Ranch_EventScript_DroughtResistantEncounterFarmer_42:
# 2329 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2330 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, Ranch_EventScript_DroughtResistantEncounterFarmer_Text_8, Ranch_EventScript_DroughtResistantEncounterFarmer_Text_9, Ranch_EventScript_FourthFarmerLeave
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_7

Ranch_EventScript_DroughtResistantEncounterFarmer_10:
# 2333 "data/maps/Ranch/scripts.pory"
	applymovement 19, Common_Movement_LockFacingDirection
# 2334 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2335 "data/maps/Ranch/scripts.pory"
	applymovement 20, ProtestorMadInPlaceUp
# 2336 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2337 "data/maps/Ranch/scripts.pory"
	delay 15
# 2338 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_DroughtResistantEncounterFarmer_Text_10
# 2339 "data/maps/Ranch/scripts.pory"
	closemessage
# 2340 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 2341 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 66
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterFarmer_19
Ranch_EventScript_DroughtResistantEncounterFarmer_17:
# 2344 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 65
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterFarmer_29
Ranch_EventScript_DroughtResistantEncounterFarmer_27:
# 2347 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 65
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterFarmer_39
Ranch_EventScript_DroughtResistantEncounterFarmer_37:
# 2352 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 66
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterFarmer_49
Ranch_EventScript_DroughtResistantEncounterFarmer_47:
# 2357 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2358 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Ranch_EventScript_DroughtResistantEncounterFarmer_Text_11, Ranch_EventScript_DroughtResistantEncounterFarmer_Text_12, Ranch_EventScript_FourthProtestorLeave
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_1

Ranch_EventScript_DroughtResistantEncounterFarmer_13:
# 2314 "data/maps/Ranch/scripts.pory"
	applymovement 19, Common_Movement_FacePlayer
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_12

Ranch_EventScript_DroughtResistantEncounterFarmer_14:
# 2313 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 36
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterFarmer_13
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_12

Ranch_EventScript_DroughtResistantEncounterFarmer_18:
# 2342 "data/maps/Ranch/scripts.pory"
	applymovement 20, Common_Movement_FacePlayer
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_17

Ranch_EventScript_DroughtResistantEncounterFarmer_19:
# 2341 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 39
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterFarmer_18
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_17

Ranch_EventScript_DroughtResistantEncounterFarmer_23:
# 2317 "data/maps/Ranch/scripts.pory"
	applymovement 19, Common_Movement_FacePlayer
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_22

Ranch_EventScript_DroughtResistantEncounterFarmer_24:
# 2316 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 37
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterFarmer_23
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_22

Ranch_EventScript_DroughtResistantEncounterFarmer_28:
# 2345 "data/maps/Ranch/scripts.pory"
	applymovement 20, Common_Movement_FacePlayer
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_27

Ranch_EventScript_DroughtResistantEncounterFarmer_29:
# 2344 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 38
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterFarmer_28
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_27

Ranch_EventScript_DroughtResistantEncounterFarmer_33:
# 2320 "data/maps/Ranch/scripts.pory"
	applymovement 19, Farmer4ToLeft
# 2321 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2322 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_32

Ranch_EventScript_DroughtResistantEncounterFarmer_34:
# 2319 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 38
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterFarmer_33
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_32

Ranch_EventScript_DroughtResistantEncounterFarmer_38:
# 2348 "data/maps/Ranch/scripts.pory"
	applymovement 20, Protestor4ToLeft
# 2349 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2350 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_37

Ranch_EventScript_DroughtResistantEncounterFarmer_39:
# 2347 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 37
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterFarmer_38
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_37

Ranch_EventScript_DroughtResistantEncounterFarmer_43:
# 2325 "data/maps/Ranch/scripts.pory"
	applymovement 19, Farmer4ToBottom
# 2326 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2327 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_42

Ranch_EventScript_DroughtResistantEncounterFarmer_44:
# 2324 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 39
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterFarmer_43
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_42

Ranch_EventScript_DroughtResistantEncounterFarmer_48:
# 2353 "data/maps/Ranch/scripts.pory"
	applymovement 20, Protestor4ToTop
# 2354 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2355 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_47

Ranch_EventScript_DroughtResistantEncounterFarmer_49:
# 2352 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 36
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterFarmer_48
	goto Ranch_EventScript_DroughtResistantEncounterFarmer_47


Ranch_EventScript_DroughtResistantEncounterProtestor::
# 2373 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER4_BATTLE, Ranch_EventScript_DroughtResistantEncounterProtestor_2
Ranch_EventScript_DroughtResistantEncounterProtestor_1:
# 2457 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER4_BATTLE, Ranch_EventScript_DroughtResistantEncounterProtestor_5
Ranch_EventScript_DroughtResistantEncounterProtestor_4:
# 2464 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_DroughtResistantEncounterProtestor_2:
# 2374 "data/maps/Ranch/scripts.pory"
	lock
# 2375 "data/maps/Ranch/scripts.pory"
	applymovement 19, Common_Movement_WalkInPlaceFastDown
# 2376 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2377 "data/maps/Ranch/scripts.pory"
	delay 15
# 2378 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_DroughtResistantEncounterFarmer_Text_0
# 2379 "data/maps/Ranch/scripts.pory"
	closemessage
# 2380 "data/maps/Ranch/scripts.pory"
	delay 15
# 2381 "data/maps/Ranch/scripts.pory"
	applymovement 20, Common_Movement_WalkInPlaceFastUp
# 2382 "data/maps/Ranch/scripts.pory"
	delay 15
# 2383 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_DroughtResistantEncounterFarmer_Text_1
# 2384 "data/maps/Ranch/scripts.pory"
	closemessage
# 2385 "data/maps/Ranch/scripts.pory"
	delay 15
# 2386 "data/maps/Ranch/scripts.pory"
	applymovement 19, Common_Movement_WalkInPlaceFastDown
# 2387 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2388 "data/maps/Ranch/scripts.pory"
	delay 15
# 2389 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_DroughtResistantEncounterFarmer_Text_2
# 2390 "data/maps/Ranch/scripts.pory"
	closemessage
# 2391 "data/maps/Ranch/scripts.pory"
	delay 15
# 2392 "data/maps/Ranch/scripts.pory"
	applymovement 20, Common_Movement_WalkInPlaceFastUp
# 2393 "data/maps/Ranch/scripts.pory"
	delay 15
# 2394 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_DroughtResistantEncounterFarmer_Text_3
# 2395 "data/maps/Ranch/scripts.pory"
	closemessage
# 2396 "data/maps/Ranch/scripts.pory"
	delay 15
# 2397 "data/maps/Ranch/scripts.pory"
	faceplayer
# 2398 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_DroughtResistantEncounterFarmer_Text_4
# 2399 "data/maps/Ranch/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Ranch_EventScript_DroughtResistantEncounterFarmer_Text_5, Ranch_EventScript_DroughtResistantEncounterFarmer_Text_6
# 2400 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterProtestor_8
Ranch_EventScript_DroughtResistantEncounterProtestor_7:
# 2428 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterProtestor_10
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_1

Ranch_EventScript_DroughtResistantEncounterProtestor_5:
# 2458 "data/maps/Ranch/scripts.pory"
	lock
# 2459 "data/maps/Ranch/scripts.pory"
	faceplayer
# 2460 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2461 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_DroughtResistantEncounterProtestor_Text_0
# 2462 "data/maps/Ranch/scripts.pory"
	closemessage
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_4

Ranch_EventScript_DroughtResistantEncounterProtestor_8:
# 2401 "data/maps/Ranch/scripts.pory"
	applymovement 20, Common_Movement_LockFacingDirection
# 2402 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2403 "data/maps/Ranch/scripts.pory"
	applymovement 19, FarmerMadInPlaceDown
# 2404 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2405 "data/maps/Ranch/scripts.pory"
	delay 15
# 2406 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_DroughtResistantEncounterFarmer_Text_7
# 2407 "data/maps/Ranch/scripts.pory"
	closemessage
# 2408 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 2409 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 66
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterProtestor_14
Ranch_EventScript_DroughtResistantEncounterProtestor_12:
# 2412 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 65
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterProtestor_24
Ranch_EventScript_DroughtResistantEncounterProtestor_22:
# 2415 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 65
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterProtestor_34
Ranch_EventScript_DroughtResistantEncounterProtestor_32:
# 2420 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 66
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterProtestor_44
Ranch_EventScript_DroughtResistantEncounterProtestor_42:
# 2425 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2426 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_2, Ranch_EventScript_DroughtResistantEncounterFarmer_Text_8, Ranch_EventScript_DroughtResistantEncounterFarmer_Text_9, Ranch_EventScript_FourthFarmerLeave
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_7

Ranch_EventScript_DroughtResistantEncounterProtestor_10:
# 2429 "data/maps/Ranch/scripts.pory"
	applymovement 19, Common_Movement_LockFacingDirection
# 2430 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2431 "data/maps/Ranch/scripts.pory"
	applymovement 20, ProtestorMadInPlaceUp
# 2432 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2433 "data/maps/Ranch/scripts.pory"
	delay 15
# 2434 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_DroughtResistantEncounterFarmer_Text_10
# 2435 "data/maps/Ranch/scripts.pory"
	closemessage
# 2436 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 2437 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 66
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterProtestor_19
Ranch_EventScript_DroughtResistantEncounterProtestor_17:
# 2440 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 65
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterProtestor_29
Ranch_EventScript_DroughtResistantEncounterProtestor_27:
# 2443 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 65
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterProtestor_39
Ranch_EventScript_DroughtResistantEncounterProtestor_37:
# 2448 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 66
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterProtestor_49
Ranch_EventScript_DroughtResistantEncounterProtestor_47:
# 2453 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2454 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_3, Ranch_EventScript_DroughtResistantEncounterFarmer_Text_11, Ranch_EventScript_DroughtResistantEncounterFarmer_Text_12, Ranch_EventScript_FourthProtestorLeave
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_1

Ranch_EventScript_DroughtResistantEncounterProtestor_13:
# 2410 "data/maps/Ranch/scripts.pory"
	applymovement 19, Common_Movement_FacePlayer
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_12

Ranch_EventScript_DroughtResistantEncounterProtestor_14:
# 2409 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 36
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterProtestor_13
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_12

Ranch_EventScript_DroughtResistantEncounterProtestor_18:
# 2438 "data/maps/Ranch/scripts.pory"
	applymovement 20, Common_Movement_FacePlayer
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_17

Ranch_EventScript_DroughtResistantEncounterProtestor_19:
# 2437 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 39
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterProtestor_18
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_17

Ranch_EventScript_DroughtResistantEncounterProtestor_23:
# 2413 "data/maps/Ranch/scripts.pory"
	applymovement 19, Common_Movement_FacePlayer
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_22

Ranch_EventScript_DroughtResistantEncounterProtestor_24:
# 2412 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 37
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterProtestor_23
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_22

Ranch_EventScript_DroughtResistantEncounterProtestor_28:
# 2441 "data/maps/Ranch/scripts.pory"
	applymovement 20, Common_Movement_FacePlayer
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_27

Ranch_EventScript_DroughtResistantEncounterProtestor_29:
# 2440 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 38
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterProtestor_28
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_27

Ranch_EventScript_DroughtResistantEncounterProtestor_33:
# 2416 "data/maps/Ranch/scripts.pory"
	applymovement 19, Farmer4ToLeft
# 2417 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2418 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_32

Ranch_EventScript_DroughtResistantEncounterProtestor_34:
# 2415 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 38
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterProtestor_33
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_32

Ranch_EventScript_DroughtResistantEncounterProtestor_38:
# 2444 "data/maps/Ranch/scripts.pory"
	applymovement 20, Protestor4ToLeft
# 2445 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2446 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_37

Ranch_EventScript_DroughtResistantEncounterProtestor_39:
# 2443 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 37
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterProtestor_38
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_37

Ranch_EventScript_DroughtResistantEncounterProtestor_43:
# 2421 "data/maps/Ranch/scripts.pory"
	applymovement 19, Farmer4ToBottom
# 2422 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2423 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_42

Ranch_EventScript_DroughtResistantEncounterProtestor_44:
# 2420 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 39
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterProtestor_43
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_42

Ranch_EventScript_DroughtResistantEncounterProtestor_48:
# 2449 "data/maps/Ranch/scripts.pory"
	applymovement 20, Protestor4ToTop
# 2450 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2451 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_47

Ranch_EventScript_DroughtResistantEncounterProtestor_49:
# 2448 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 36
	goto_if_eq Ranch_EventScript_DroughtResistantEncounterProtestor_48
	goto Ranch_EventScript_DroughtResistantEncounterProtestor_47


Ranch_EventScript_FourthFarmerLeave::
# 2469 "data/maps/Ranch/scripts.pory"
	lock
# 2470 "data/maps/Ranch/scripts.pory"
	delay 15
# 2471 "data/maps/Ranch/scripts.pory"
	applymovement 19, Common_Movement_FaceAwayPlayer
# 2472 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2473 "data/maps/Ranch/scripts.pory"
	delay 15
# 2474 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FourthFarmerLeave_Text_0
# 2475 "data/maps/Ranch/scripts.pory"
	closemessage
# 2476 "data/maps/Ranch/scripts.pory"
	delay 15
# 2477 "data/maps/Ranch/scripts.pory"
	applymovement 19, Common_Movement_FacePlayer
# 2478 "data/maps/Ranch/scripts.pory"
	delay 15
# 2479 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FourthFarmerLeave_Text_1
# 2480 "data/maps/Ranch/scripts.pory"
	closemessage
# 2481 "data/maps/Ranch/scripts.pory"
	delay 15
# 2482 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 2483 "data/maps/Ranch/scripts.pory"
	removeobject 19
# 2484 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 2485 "data/maps/Ranch/scripts.pory"
	waitse
# 2486 "data/maps/Ranch/scripts.pory"
	setflag FLAG_PROTEST_WIN_4
# 2487 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER4_BATTLE
# 2488 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER1_BATTLE, Ranch_EventScript_FourthFarmerLeave_4
Ranch_EventScript_FourthFarmerLeave_1:
# 2492 "data/maps/Ranch/scripts.pory"
	addvar VAR_RANCH_MORALITY_SYSTEM, 1
# 2493 "data/maps/Ranch/scripts.pory"
	applymovement 20, Common_Movement_UnlockFacingDirection
# 2494 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2495 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 20, MOVEMENT_TYPE_WANDER_AROUND
# 2496 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2497 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 20, 66, 38
# 2498 "data/maps/Ranch/scripts.pory"
	addobject 20
# 2499 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2500 "data/maps/Ranch/scripts.pory"
	delay 15
# 2501 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 2502 "data/maps/Ranch/scripts.pory"
	goto Ranch_EventScript_ProtestWin4
# 2503 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_FourthFarmerLeave_2:
# 2489 "data/maps/Ranch/scripts.pory"
	setflag FLAG_READY_FINAL_RANCH_BATTLE
# 2490 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_STATE, 2
	goto Ranch_EventScript_FourthFarmerLeave_1

Ranch_EventScript_FourthFarmerLeave_3:
# 2488 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER3_BATTLE, Ranch_EventScript_FourthFarmerLeave_8
	goto Ranch_EventScript_FourthFarmerLeave_1

Ranch_EventScript_FourthFarmerLeave_4:
# 2488 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER2_BATTLE, Ranch_EventScript_FourthFarmerLeave_3
	goto Ranch_EventScript_FourthFarmerLeave_1

Ranch_EventScript_FourthFarmerLeave_7:
# 2488 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER5_BATTLE, Ranch_EventScript_FourthFarmerLeave_12
	goto Ranch_EventScript_FourthFarmerLeave_1

Ranch_EventScript_FourthFarmerLeave_8:
# 2488 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER4_BATTLE, Ranch_EventScript_FourthFarmerLeave_7
	goto Ranch_EventScript_FourthFarmerLeave_1

Ranch_EventScript_FourthFarmerLeave_11:
# 2488 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER7_BATTLE, Ranch_EventScript_FourthFarmerLeave_2
	goto Ranch_EventScript_FourthFarmerLeave_1

Ranch_EventScript_FourthFarmerLeave_12:
# 2488 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER6_BATTLE, Ranch_EventScript_FourthFarmerLeave_11
	goto Ranch_EventScript_FourthFarmerLeave_1


Ranch_EventScript_FourthProtestorLeave::
# 2508 "data/maps/Ranch/scripts.pory"
	lock
# 2509 "data/maps/Ranch/scripts.pory"
	delay 15
# 2510 "data/maps/Ranch/scripts.pory"
	applymovement 20, Common_Movement_FaceAwayPlayer
# 2511 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2512 "data/maps/Ranch/scripts.pory"
	delay 15
# 2513 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FourthProtestorLeave_Text_0
# 2514 "data/maps/Ranch/scripts.pory"
	closemessage
# 2515 "data/maps/Ranch/scripts.pory"
	delay 15
# 2516 "data/maps/Ranch/scripts.pory"
	applymovement 20, FarmerFreakOut
# 2517 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 2518 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2519 "data/maps/Ranch/scripts.pory"
	applymovement 20, Common_Movement_FacePlayer
# 2520 "data/maps/Ranch/scripts.pory"
	delay 15
# 2521 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FourthProtestorLeave_Text_1
# 2522 "data/maps/Ranch/scripts.pory"
	closemessage
# 2523 "data/maps/Ranch/scripts.pory"
	delay 15
# 2524 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 2525 "data/maps/Ranch/scripts.pory"
	removeobject 20
# 2526 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 2527 "data/maps/Ranch/scripts.pory"
	waitse
# 2528 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER_WIN_4
# 2529 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER4_BATTLE
# 2530 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER1_BATTLE, Ranch_EventScript_FourthProtestorLeave_4
Ranch_EventScript_FourthProtestorLeave_1:
# 2534 "data/maps/Ranch/scripts.pory"
	subvar VAR_RANCH_MORALITY_SYSTEM, 1
# 2535 "data/maps/Ranch/scripts.pory"
	applymovement 19, Common_Movement_UnlockFacingDirection
# 2536 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2537 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 19, MOVEMENT_TYPE_WANDER_AROUND
# 2538 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2539 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 19, 66, 37
# 2540 "data/maps/Ranch/scripts.pory"
	addobject 19
# 2541 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2542 "data/maps/Ranch/scripts.pory"
	delay 15
# 2543 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 2544 "data/maps/Ranch/scripts.pory"
	goto Ranch_EventScript_FarmerWin4
# 2545 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_FourthProtestorLeave_2:
# 2531 "data/maps/Ranch/scripts.pory"
	setflag FLAG_READY_FINAL_RANCH_BATTLE
# 2532 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_STATE, 2
	goto Ranch_EventScript_FourthProtestorLeave_1

Ranch_EventScript_FourthProtestorLeave_3:
# 2530 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER3_BATTLE, Ranch_EventScript_FourthProtestorLeave_8
	goto Ranch_EventScript_FourthProtestorLeave_1

Ranch_EventScript_FourthProtestorLeave_4:
# 2530 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER2_BATTLE, Ranch_EventScript_FourthProtestorLeave_3
	goto Ranch_EventScript_FourthProtestorLeave_1

Ranch_EventScript_FourthProtestorLeave_7:
# 2530 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER5_BATTLE, Ranch_EventScript_FourthProtestorLeave_12
	goto Ranch_EventScript_FourthProtestorLeave_1

Ranch_EventScript_FourthProtestorLeave_8:
# 2530 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER4_BATTLE, Ranch_EventScript_FourthProtestorLeave_7
	goto Ranch_EventScript_FourthProtestorLeave_1

Ranch_EventScript_FourthProtestorLeave_11:
# 2530 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER7_BATTLE, Ranch_EventScript_FourthProtestorLeave_2
	goto Ranch_EventScript_FourthProtestorLeave_1

Ranch_EventScript_FourthProtestorLeave_12:
# 2530 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER6_BATTLE, Ranch_EventScript_FourthProtestorLeave_11
	goto Ranch_EventScript_FourthProtestorLeave_1


# 2549 "data/maps/Ranch/scripts.pory"
Farmer4ToLeft:
# 2550 "data/maps/Ranch/scripts.pory"
	walk_fast_left
# 2551 "data/maps/Ranch/scripts.pory"
	face_down
	step_end

# 2554 "data/maps/Ranch/scripts.pory"
Farmer4ToBottom:
# 2555 "data/maps/Ranch/scripts.pory"
	walk_fast_left
# 2556 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 2556 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 2557 "data/maps/Ranch/scripts.pory"
	face_right
	step_end

# 2560 "data/maps/Ranch/scripts.pory"
Protestor4ToLeft:
# 2561 "data/maps/Ranch/scripts.pory"
	walk_fast_left
# 2562 "data/maps/Ranch/scripts.pory"
	face_up
	step_end

# 2565 "data/maps/Ranch/scripts.pory"
Protestor4ToTop:
# 2566 "data/maps/Ranch/scripts.pory"
	walk_fast_left
# 2567 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 2567 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 2568 "data/maps/Ranch/scripts.pory"
	face_right
	step_end

Ranch_EventScript_SoilDepletionEncounterFarmer::
# 2572 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER5_BATTLE, Ranch_EventScript_SoilDepletionEncounterFarmer_2
Ranch_EventScript_SoilDepletionEncounterFarmer_1:
# 2658 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER5_BATTLE, Ranch_EventScript_SoilDepletionEncounterFarmer_5
Ranch_EventScript_SoilDepletionEncounterFarmer_4:
# 2665 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_SoilDepletionEncounterFarmer_2:
# 2573 "data/maps/Ranch/scripts.pory"
	lock
# 2574 "data/maps/Ranch/scripts.pory"
	applymovement 41, Common_Movement_WalkInPlaceFastRight
# 2575 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2576 "data/maps/Ranch/scripts.pory"
	delay 15
# 2577 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SoilDepletionEncounterFarmer_Text_0
# 2578 "data/maps/Ranch/scripts.pory"
	closemessage
# 2579 "data/maps/Ranch/scripts.pory"
	delay 15
# 2580 "data/maps/Ranch/scripts.pory"
	applymovement 40, Common_Movement_WalkInPlaceFastLeft
# 2581 "data/maps/Ranch/scripts.pory"
	delay 15
# 2582 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SoilDepletionEncounterFarmer_Text_1
# 2583 "data/maps/Ranch/scripts.pory"
	closemessage
# 2584 "data/maps/Ranch/scripts.pory"
	delay 15
# 2585 "data/maps/Ranch/scripts.pory"
	applymovement 41, Common_Movement_WalkInPlaceFastRight
# 2586 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2587 "data/maps/Ranch/scripts.pory"
	delay 15
# 2588 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SoilDepletionEncounterFarmer_Text_2
# 2589 "data/maps/Ranch/scripts.pory"
	closemessage
# 2590 "data/maps/Ranch/scripts.pory"
	delay 15
# 2591 "data/maps/Ranch/scripts.pory"
	applymovement 40, Common_Movement_WalkInPlaceFastLeft
# 2592 "data/maps/Ranch/scripts.pory"
	delay 15
# 2593 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SoilDepletionEncounterFarmer_Text_3
# 2594 "data/maps/Ranch/scripts.pory"
	closemessage
# 2595 "data/maps/Ranch/scripts.pory"
	delay 15
# 2596 "data/maps/Ranch/scripts.pory"
	faceplayer
# 2597 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SoilDepletionEncounterFarmer_Text_4
# 2598 "data/maps/Ranch/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Ranch_EventScript_SoilDepletionEncounterFarmer_Text_5, Ranch_EventScript_DroughtResistantEncounterFarmer_Text_6
# 2599 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterFarmer_8
Ranch_EventScript_SoilDepletionEncounterFarmer_7:
# 2629 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterFarmer_10
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_1

Ranch_EventScript_SoilDepletionEncounterFarmer_5:
# 2659 "data/maps/Ranch/scripts.pory"
	lock
# 2660 "data/maps/Ranch/scripts.pory"
	faceplayer
# 2661 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2662 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SoilDepletionEncounterFarmer_Text_12
# 2663 "data/maps/Ranch/scripts.pory"
	closemessage
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_4

Ranch_EventScript_SoilDepletionEncounterFarmer_8:
# 2600 "data/maps/Ranch/scripts.pory"
	applymovement 41, Common_Movement_LockFacingDirection
# 2601 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2602 "data/maps/Ranch/scripts.pory"
	applymovement 40, FarmerFreakOut
# 2603 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2604 "data/maps/Ranch/scripts.pory"
	applymovement 40, Common_Movement_FaceLeft
# 2605 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2606 "data/maps/Ranch/scripts.pory"
	delay 15
# 2607 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SoilDepletionEncounterFarmer_Text_6
# 2608 "data/maps/Ranch/scripts.pory"
	closemessage
# 2609 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 2610 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 69
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterFarmer_14
Ranch_EventScript_SoilDepletionEncounterFarmer_12:
# 2613 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 68
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterFarmer_24
Ranch_EventScript_SoilDepletionEncounterFarmer_22:
# 2616 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 67
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterFarmer_34
Ranch_EventScript_SoilDepletionEncounterFarmer_32:
# 2621 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 66
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterFarmer_44
Ranch_EventScript_SoilDepletionEncounterFarmer_42:
# 2626 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2627 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MUSEUM_1, Ranch_EventScript_SoilDepletionEncounterFarmer_Text_7, Ranch_EventScript_SoilDepletionEncounterFarmer_Text_8, Ranch_EventScript_FifthFarmerLeave
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_7

Ranch_EventScript_SoilDepletionEncounterFarmer_10:
# 2630 "data/maps/Ranch/scripts.pory"
	applymovement 40, Common_Movement_LockFacingDirection
# 2631 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2632 "data/maps/Ranch/scripts.pory"
	applymovement 41, FarmerFreakOut
# 2633 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2634 "data/maps/Ranch/scripts.pory"
	delay 15
# 2635 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SoilDepletionEncounterFarmer_Text_9
# 2636 "data/maps/Ranch/scripts.pory"
	closemessage
# 2637 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 2638 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 66
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterFarmer_19
Ranch_EventScript_SoilDepletionEncounterFarmer_17:
# 2641 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 67
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterFarmer_29
Ranch_EventScript_SoilDepletionEncounterFarmer_27:
# 2644 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 68
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterFarmer_39
Ranch_EventScript_SoilDepletionEncounterFarmer_37:
# 2649 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 69
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterFarmer_49
Ranch_EventScript_SoilDepletionEncounterFarmer_47:
# 2654 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2655 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MUSEUM_2, Ranch_EventScript_SoilDepletionEncounterFarmer_Text_10, Ranch_EventScript_SoilDepletionEncounterFarmer_Text_11, Ranch_EventScript_FifthProtestorLeave
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_1

Ranch_EventScript_SoilDepletionEncounterFarmer_13:
# 2611 "data/maps/Ranch/scripts.pory"
	applymovement 40, Common_Movement_FacePlayer
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_12

Ranch_EventScript_SoilDepletionEncounterFarmer_14:
# 2610 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterFarmer_13
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_12

Ranch_EventScript_SoilDepletionEncounterFarmer_18:
# 2639 "data/maps/Ranch/scripts.pory"
	applymovement 41, Common_Movement_FacePlayer
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_17

Ranch_EventScript_SoilDepletionEncounterFarmer_19:
# 2638 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterFarmer_18
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_17

Ranch_EventScript_SoilDepletionEncounterFarmer_23:
# 2614 "data/maps/Ranch/scripts.pory"
	applymovement 40, Common_Movement_FacePlayer
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_22

Ranch_EventScript_SoilDepletionEncounterFarmer_24:
# 2613 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 30
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterFarmer_23
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_22

Ranch_EventScript_SoilDepletionEncounterFarmer_28:
# 2642 "data/maps/Ranch/scripts.pory"
	applymovement 41, Common_Movement_FacePlayer
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_27

Ranch_EventScript_SoilDepletionEncounterFarmer_29:
# 2641 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 30
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterFarmer_28
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_27

Ranch_EventScript_SoilDepletionEncounterFarmer_33:
# 2617 "data/maps/Ranch/scripts.pory"
	applymovement 40, Farmer5ToTop
# 2618 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2619 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_32

Ranch_EventScript_SoilDepletionEncounterFarmer_34:
# 2616 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 30
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterFarmer_33
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_32

Ranch_EventScript_SoilDepletionEncounterFarmer_38:
# 2645 "data/maps/Ranch/scripts.pory"
	applymovement 41, Protestor5ToTop
# 2646 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2647 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_37

Ranch_EventScript_SoilDepletionEncounterFarmer_39:
# 2644 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 30
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterFarmer_38
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_37

Ranch_EventScript_SoilDepletionEncounterFarmer_43:
# 2622 "data/maps/Ranch/scripts.pory"
	applymovement 40, Farmer5ToLeft
# 2623 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2624 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_42

Ranch_EventScript_SoilDepletionEncounterFarmer_44:
# 2621 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterFarmer_43
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_42

Ranch_EventScript_SoilDepletionEncounterFarmer_48:
# 2650 "data/maps/Ranch/scripts.pory"
	applymovement 41, Protestor5ToRight
# 2651 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2652 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_47

Ranch_EventScript_SoilDepletionEncounterFarmer_49:
# 2649 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterFarmer_48
	goto Ranch_EventScript_SoilDepletionEncounterFarmer_47


Ranch_EventScript_SoilDepletionEncounterProtestor::
# 2670 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER5_BATTLE, Ranch_EventScript_SoilDepletionEncounterProtestor_2
Ranch_EventScript_SoilDepletionEncounterProtestor_1:
# 2756 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER5_BATTLE, Ranch_EventScript_SoilDepletionEncounterProtestor_5
Ranch_EventScript_SoilDepletionEncounterProtestor_4:
# 2763 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_SoilDepletionEncounterProtestor_2:
# 2671 "data/maps/Ranch/scripts.pory"
	lock
# 2672 "data/maps/Ranch/scripts.pory"
	applymovement 41, Common_Movement_WalkInPlaceFastRight
# 2673 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2674 "data/maps/Ranch/scripts.pory"
	delay 15
# 2675 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SoilDepletionEncounterFarmer_Text_0
# 2676 "data/maps/Ranch/scripts.pory"
	closemessage
# 2677 "data/maps/Ranch/scripts.pory"
	delay 15
# 2678 "data/maps/Ranch/scripts.pory"
	applymovement 40, Common_Movement_WalkInPlaceFastLeft
# 2679 "data/maps/Ranch/scripts.pory"
	delay 15
# 2680 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SoilDepletionEncounterFarmer_Text_1
# 2681 "data/maps/Ranch/scripts.pory"
	closemessage
# 2682 "data/maps/Ranch/scripts.pory"
	delay 15
# 2683 "data/maps/Ranch/scripts.pory"
	applymovement 41, Common_Movement_WalkInPlaceFastRight
# 2684 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2685 "data/maps/Ranch/scripts.pory"
	delay 15
# 2686 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SoilDepletionEncounterFarmer_Text_2
# 2687 "data/maps/Ranch/scripts.pory"
	closemessage
# 2688 "data/maps/Ranch/scripts.pory"
	delay 15
# 2689 "data/maps/Ranch/scripts.pory"
	applymovement 40, Common_Movement_WalkInPlaceFastLeft
# 2690 "data/maps/Ranch/scripts.pory"
	delay 15
# 2691 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SoilDepletionEncounterFarmer_Text_3
# 2692 "data/maps/Ranch/scripts.pory"
	closemessage
# 2693 "data/maps/Ranch/scripts.pory"
	delay 15
# 2694 "data/maps/Ranch/scripts.pory"
	faceplayer
# 2695 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SoilDepletionEncounterFarmer_Text_4
# 2696 "data/maps/Ranch/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Ranch_EventScript_SoilDepletionEncounterFarmer_Text_5, Ranch_EventScript_DroughtResistantEncounterFarmer_Text_6
# 2697 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterProtestor_8
Ranch_EventScript_SoilDepletionEncounterProtestor_7:
# 2727 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterProtestor_10
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_1

Ranch_EventScript_SoilDepletionEncounterProtestor_5:
# 2757 "data/maps/Ranch/scripts.pory"
	lock
# 2758 "data/maps/Ranch/scripts.pory"
	faceplayer
# 2759 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2760 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SoilDepletionEncounterProtestor_Text_0
# 2761 "data/maps/Ranch/scripts.pory"
	closemessage
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_4

Ranch_EventScript_SoilDepletionEncounterProtestor_8:
# 2698 "data/maps/Ranch/scripts.pory"
	applymovement 41, Common_Movement_LockFacingDirection
# 2699 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2700 "data/maps/Ranch/scripts.pory"
	applymovement 40, FarmerFreakOut
# 2701 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2702 "data/maps/Ranch/scripts.pory"
	applymovement 40, Common_Movement_FaceLeft
# 2703 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2704 "data/maps/Ranch/scripts.pory"
	delay 15
# 2705 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SoilDepletionEncounterFarmer_Text_6
# 2706 "data/maps/Ranch/scripts.pory"
	closemessage
# 2707 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 2708 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 69
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterProtestor_14
Ranch_EventScript_SoilDepletionEncounterProtestor_12:
# 2711 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 68
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterProtestor_24
Ranch_EventScript_SoilDepletionEncounterProtestor_22:
# 2714 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 67
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterProtestor_34
Ranch_EventScript_SoilDepletionEncounterProtestor_32:
# 2719 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 66
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterProtestor_44
Ranch_EventScript_SoilDepletionEncounterProtestor_42:
# 2724 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2725 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MUSEUM_1, Ranch_EventScript_SoilDepletionEncounterFarmer_Text_7, Ranch_EventScript_SoilDepletionEncounterFarmer_Text_8, Ranch_EventScript_FifthFarmerLeave
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_7

Ranch_EventScript_SoilDepletionEncounterProtestor_10:
# 2728 "data/maps/Ranch/scripts.pory"
	applymovement 40, Common_Movement_LockFacingDirection
# 2729 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2730 "data/maps/Ranch/scripts.pory"
	applymovement 41, FarmerFreakOut
# 2731 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2732 "data/maps/Ranch/scripts.pory"
	delay 15
# 2733 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SoilDepletionEncounterFarmer_Text_9
# 2734 "data/maps/Ranch/scripts.pory"
	closemessage
# 2735 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 2736 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 66
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterProtestor_19
Ranch_EventScript_SoilDepletionEncounterProtestor_17:
# 2739 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 67
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterProtestor_29
Ranch_EventScript_SoilDepletionEncounterProtestor_27:
# 2742 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 68
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterProtestor_39
Ranch_EventScript_SoilDepletionEncounterProtestor_37:
# 2747 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 69
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterProtestor_49
Ranch_EventScript_SoilDepletionEncounterProtestor_47:
# 2752 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2753 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MUSEUM_2, Ranch_EventScript_SoilDepletionEncounterFarmer_Text_10, Ranch_EventScript_SoilDepletionEncounterFarmer_Text_11, Ranch_EventScript_FifthProtestorLeave
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_1

Ranch_EventScript_SoilDepletionEncounterProtestor_13:
# 2709 "data/maps/Ranch/scripts.pory"
	applymovement 40, Common_Movement_FacePlayer
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_12

Ranch_EventScript_SoilDepletionEncounterProtestor_14:
# 2708 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterProtestor_13
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_12

Ranch_EventScript_SoilDepletionEncounterProtestor_18:
# 2737 "data/maps/Ranch/scripts.pory"
	applymovement 41, Common_Movement_FacePlayer
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_17

Ranch_EventScript_SoilDepletionEncounterProtestor_19:
# 2736 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterProtestor_18
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_17

Ranch_EventScript_SoilDepletionEncounterProtestor_23:
# 2712 "data/maps/Ranch/scripts.pory"
	applymovement 40, Common_Movement_FacePlayer
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_22

Ranch_EventScript_SoilDepletionEncounterProtestor_24:
# 2711 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 30
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterProtestor_23
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_22

Ranch_EventScript_SoilDepletionEncounterProtestor_28:
# 2740 "data/maps/Ranch/scripts.pory"
	applymovement 41, Common_Movement_FacePlayer
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_27

Ranch_EventScript_SoilDepletionEncounterProtestor_29:
# 2739 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 30
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterProtestor_28
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_27

Ranch_EventScript_SoilDepletionEncounterProtestor_33:
# 2715 "data/maps/Ranch/scripts.pory"
	applymovement 40, Farmer5ToTop
# 2716 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2717 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_32

Ranch_EventScript_SoilDepletionEncounterProtestor_34:
# 2714 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 30
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterProtestor_33
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_32

Ranch_EventScript_SoilDepletionEncounterProtestor_38:
# 2743 "data/maps/Ranch/scripts.pory"
	applymovement 41, Protestor5ToTop
# 2744 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2745 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_37

Ranch_EventScript_SoilDepletionEncounterProtestor_39:
# 2742 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 30
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterProtestor_38
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_37

Ranch_EventScript_SoilDepletionEncounterProtestor_43:
# 2720 "data/maps/Ranch/scripts.pory"
	applymovement 40, Farmer5ToLeft
# 2721 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2722 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_42

Ranch_EventScript_SoilDepletionEncounterProtestor_44:
# 2719 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterProtestor_43
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_42

Ranch_EventScript_SoilDepletionEncounterProtestor_48:
# 2748 "data/maps/Ranch/scripts.pory"
	applymovement 41, Protestor5ToRight
# 2749 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2750 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_47

Ranch_EventScript_SoilDepletionEncounterProtestor_49:
# 2747 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 31
	goto_if_eq Ranch_EventScript_SoilDepletionEncounterProtestor_48
	goto Ranch_EventScript_SoilDepletionEncounterProtestor_47


Ranch_EventScript_FifthFarmerLeave::
# 2768 "data/maps/Ranch/scripts.pory"
	lock
# 2769 "data/maps/Ranch/scripts.pory"
	delay 15
# 2770 "data/maps/Ranch/scripts.pory"
	applymovement 40, Common_Movement_FaceAwayPlayer
# 2771 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2772 "data/maps/Ranch/scripts.pory"
	delay 15
# 2773 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FifthFarmerLeave_Text_0
# 2774 "data/maps/Ranch/scripts.pory"
	closemessage
# 2775 "data/maps/Ranch/scripts.pory"
	delay 15
# 2776 "data/maps/Ranch/scripts.pory"
	applymovement 40, Common_Movement_FacePlayer
# 2777 "data/maps/Ranch/scripts.pory"
	delay 15
# 2778 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FifthFarmerLeave_Text_1
# 2779 "data/maps/Ranch/scripts.pory"
	closemessage
# 2780 "data/maps/Ranch/scripts.pory"
	delay 15
# 2781 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 2782 "data/maps/Ranch/scripts.pory"
	removeobject 40
# 2783 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 2784 "data/maps/Ranch/scripts.pory"
	waitse
# 2785 "data/maps/Ranch/scripts.pory"
	setflag FLAG_PROTEST_WIN_5
# 2786 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER5_BATTLE
# 2787 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER1_BATTLE, Ranch_EventScript_FifthFarmerLeave_4
Ranch_EventScript_FifthFarmerLeave_1:
# 2791 "data/maps/Ranch/scripts.pory"
	addvar VAR_RANCH_MORALITY_SYSTEM, 1
# 2792 "data/maps/Ranch/scripts.pory"
	applymovement 41, Common_Movement_UnlockFacingDirection
# 2793 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2794 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 41, MOVEMENT_TYPE_WANDER_AROUND
# 2795 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2796 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 41, 67, 31
# 2797 "data/maps/Ranch/scripts.pory"
	addobject 41
# 2798 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2799 "data/maps/Ranch/scripts.pory"
	delay 15
# 2800 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 2801 "data/maps/Ranch/scripts.pory"
	goto Ranch_EventScript_ProtestWin5
# 2802 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_FifthFarmerLeave_2:
# 2788 "data/maps/Ranch/scripts.pory"
	setflag FLAG_READY_FINAL_RANCH_BATTLE
# 2789 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_STATE, 2
	goto Ranch_EventScript_FifthFarmerLeave_1

Ranch_EventScript_FifthFarmerLeave_3:
# 2787 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER3_BATTLE, Ranch_EventScript_FifthFarmerLeave_8
	goto Ranch_EventScript_FifthFarmerLeave_1

Ranch_EventScript_FifthFarmerLeave_4:
# 2787 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER2_BATTLE, Ranch_EventScript_FifthFarmerLeave_3
	goto Ranch_EventScript_FifthFarmerLeave_1

Ranch_EventScript_FifthFarmerLeave_7:
# 2787 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER5_BATTLE, Ranch_EventScript_FifthFarmerLeave_12
	goto Ranch_EventScript_FifthFarmerLeave_1

Ranch_EventScript_FifthFarmerLeave_8:
# 2787 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER4_BATTLE, Ranch_EventScript_FifthFarmerLeave_7
	goto Ranch_EventScript_FifthFarmerLeave_1

Ranch_EventScript_FifthFarmerLeave_11:
# 2787 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER7_BATTLE, Ranch_EventScript_FifthFarmerLeave_2
	goto Ranch_EventScript_FifthFarmerLeave_1

Ranch_EventScript_FifthFarmerLeave_12:
# 2787 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER6_BATTLE, Ranch_EventScript_FifthFarmerLeave_11
	goto Ranch_EventScript_FifthFarmerLeave_1


Ranch_EventScript_FifthProtestorLeave::
# 2807 "data/maps/Ranch/scripts.pory"
	lock
# 2808 "data/maps/Ranch/scripts.pory"
	delay 15
# 2809 "data/maps/Ranch/scripts.pory"
	applymovement 41, Common_Movement_FaceAwayPlayer
# 2810 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2811 "data/maps/Ranch/scripts.pory"
	delay 15
# 2812 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FifthProtestorLeave_Text_0
# 2813 "data/maps/Ranch/scripts.pory"
	closemessage
# 2814 "data/maps/Ranch/scripts.pory"
	delay 15
# 2815 "data/maps/Ranch/scripts.pory"
	applymovement 41, FarmerFreakOut
# 2816 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 2817 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2818 "data/maps/Ranch/scripts.pory"
	applymovement 41, Common_Movement_FacePlayer
# 2819 "data/maps/Ranch/scripts.pory"
	delay 15
# 2820 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FifthProtestorLeave_Text_1
# 2821 "data/maps/Ranch/scripts.pory"
	closemessage
# 2822 "data/maps/Ranch/scripts.pory"
	delay 15
# 2823 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 2824 "data/maps/Ranch/scripts.pory"
	removeobject 41
# 2825 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 2826 "data/maps/Ranch/scripts.pory"
	waitse
# 2827 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER_WIN_5
# 2828 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER5_BATTLE
# 2829 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER1_BATTLE, Ranch_EventScript_FifthProtestorLeave_4
Ranch_EventScript_FifthProtestorLeave_1:
# 2833 "data/maps/Ranch/scripts.pory"
	subvar VAR_RANCH_MORALITY_SYSTEM, 1
# 2834 "data/maps/Ranch/scripts.pory"
	applymovement 40, Common_Movement_UnlockFacingDirection
# 2835 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2836 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 40, MOVEMENT_TYPE_WANDER_AROUND
# 2837 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2838 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 40, 68, 31
# 2839 "data/maps/Ranch/scripts.pory"
	addobject 40
# 2840 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2841 "data/maps/Ranch/scripts.pory"
	delay 15
# 2842 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 2843 "data/maps/Ranch/scripts.pory"
	goto Ranch_EventScript_FarmerWin5
# 2844 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_FifthProtestorLeave_2:
# 2830 "data/maps/Ranch/scripts.pory"
	setflag FLAG_READY_FINAL_RANCH_BATTLE
# 2831 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_STATE, 2
	goto Ranch_EventScript_FifthProtestorLeave_1

Ranch_EventScript_FifthProtestorLeave_3:
# 2829 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER3_BATTLE, Ranch_EventScript_FifthProtestorLeave_8
	goto Ranch_EventScript_FifthProtestorLeave_1

Ranch_EventScript_FifthProtestorLeave_4:
# 2829 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER2_BATTLE, Ranch_EventScript_FifthProtestorLeave_3
	goto Ranch_EventScript_FifthProtestorLeave_1

Ranch_EventScript_FifthProtestorLeave_7:
# 2829 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER5_BATTLE, Ranch_EventScript_FifthProtestorLeave_12
	goto Ranch_EventScript_FifthProtestorLeave_1

Ranch_EventScript_FifthProtestorLeave_8:
# 2829 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER4_BATTLE, Ranch_EventScript_FifthProtestorLeave_7
	goto Ranch_EventScript_FifthProtestorLeave_1

Ranch_EventScript_FifthProtestorLeave_11:
# 2829 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER7_BATTLE, Ranch_EventScript_FifthProtestorLeave_2
	goto Ranch_EventScript_FifthProtestorLeave_1

Ranch_EventScript_FifthProtestorLeave_12:
# 2829 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER6_BATTLE, Ranch_EventScript_FifthProtestorLeave_11
	goto Ranch_EventScript_FifthProtestorLeave_1


# 2848 "data/maps/Ranch/scripts.pory"
Farmer5ToTop:
# 2849 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 2850 "data/maps/Ranch/scripts.pory"
	face_left
	step_end

# 2853 "data/maps/Ranch/scripts.pory"
Farmer5ToLeft:
# 2854 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 2855 "data/maps/Ranch/scripts.pory"
	walk_fast_left
# 2855 "data/maps/Ranch/scripts.pory"
	walk_fast_left
# 2856 "data/maps/Ranch/scripts.pory"
	face_down
	step_end

# 2859 "data/maps/Ranch/scripts.pory"
Protestor5ToTop:
# 2860 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 2861 "data/maps/Ranch/scripts.pory"
	face_right
	step_end

# 2864 "data/maps/Ranch/scripts.pory"
Protestor5ToRight:
# 2865 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 2866 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 2866 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 2867 "data/maps/Ranch/scripts.pory"
	face_down
	step_end

Ranch_EventScript_PesticideEncounterFarmer::
# 2871 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER6_BATTLE, Ranch_EventScript_PesticideEncounterFarmer_2
Ranch_EventScript_PesticideEncounterFarmer_1:
# 2943 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER6_BATTLE, Ranch_EventScript_PesticideEncounterFarmer_5
Ranch_EventScript_PesticideEncounterFarmer_4:
# 2950 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_PesticideEncounterFarmer_2:
# 2872 "data/maps/Ranch/scripts.pory"
	lock
# 2873 "data/maps/Ranch/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceFastRight
# 2874 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2875 "data/maps/Ranch/scripts.pory"
	delay 15
# 2876 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_PesticideEncounterFarmer_Text_0
# 2877 "data/maps/Ranch/scripts.pory"
	closemessage
# 2878 "data/maps/Ranch/scripts.pory"
	delay 15
# 2879 "data/maps/Ranch/scripts.pory"
	applymovement 25, Common_Movement_WalkInPlaceFastLeft
# 2880 "data/maps/Ranch/scripts.pory"
	delay 15
# 2881 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_PesticideEncounterFarmer_Text_1
# 2882 "data/maps/Ranch/scripts.pory"
	closemessage
# 2883 "data/maps/Ranch/scripts.pory"
	delay 15
# 2884 "data/maps/Ranch/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceFastRight
# 2885 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2886 "data/maps/Ranch/scripts.pory"
	delay 15
# 2887 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_PesticideEncounterFarmer_Text_2
# 2888 "data/maps/Ranch/scripts.pory"
	closemessage
# 2889 "data/maps/Ranch/scripts.pory"
	delay 15
# 2890 "data/maps/Ranch/scripts.pory"
	applymovement 25, Common_Movement_WalkInPlaceFastLeft
# 2891 "data/maps/Ranch/scripts.pory"
	delay 15
# 2892 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_PesticideEncounterFarmer_Text_3
# 2893 "data/maps/Ranch/scripts.pory"
	closemessage
# 2894 "data/maps/Ranch/scripts.pory"
	delay 15
# 2895 "data/maps/Ranch/scripts.pory"
	faceplayer
# 2896 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_PesticideEncounterFarmer_Text_4
# 2897 "data/maps/Ranch/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Ranch_EventScript_PesticideEncounterFarmer_Text_5, Ranch_EventScript_PesticideEncounterFarmer_Text_6
# 2898 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Ranch_EventScript_PesticideEncounterFarmer_8
Ranch_EventScript_PesticideEncounterFarmer_7:
# 2920 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Ranch_EventScript_PesticideEncounterFarmer_10
	goto Ranch_EventScript_PesticideEncounterFarmer_1

Ranch_EventScript_PesticideEncounterFarmer_5:
# 2944 "data/maps/Ranch/scripts.pory"
	lock
# 2945 "data/maps/Ranch/scripts.pory"
	faceplayer
# 2946 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2947 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_PesticideEncounterFarmer_Text_13
# 2948 "data/maps/Ranch/scripts.pory"
	closemessage
	goto Ranch_EventScript_PesticideEncounterFarmer_4

Ranch_EventScript_PesticideEncounterFarmer_8:
# 2899 "data/maps/Ranch/scripts.pory"
	applymovement 26, Common_Movement_LockFacingDirection
# 2900 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2901 "data/maps/Ranch/scripts.pory"
	applymovement 25, FarmerFreakOut
# 2902 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2903 "data/maps/Ranch/scripts.pory"
	applymovement 25, Common_Movement_FaceLeft
# 2904 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2905 "data/maps/Ranch/scripts.pory"
	delay 15
# 2906 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_PesticideEncounterFarmer_Text_7
# 2907 "data/maps/Ranch/scripts.pory"
	closemessage
# 2908 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 2909 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 59
	goto_if_eq Ranch_EventScript_PesticideEncounterFarmer_14
Ranch_EventScript_PesticideEncounterFarmer_12:
# 2912 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 58
	goto_if_eq Ranch_EventScript_PesticideEncounterFarmer_24
Ranch_EventScript_PesticideEncounterFarmer_22:
# 2917 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2918 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_1, Ranch_EventScript_PesticideEncounterFarmer_Text_8, Ranch_EventScript_PesticideEncounterFarmer_Text_9, Ranch_EventScript_SixthFarmerLeave
	goto Ranch_EventScript_PesticideEncounterFarmer_7

Ranch_EventScript_PesticideEncounterFarmer_10:
# 2921 "data/maps/Ranch/scripts.pory"
	applymovement 25, Common_Movement_LockFacingDirection
# 2922 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2923 "data/maps/Ranch/scripts.pory"
	applymovement 26, FarmerFreakOut
# 2924 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2925 "data/maps/Ranch/scripts.pory"
	applymovement 26, Common_Movement_FaceRight
# 2926 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2927 "data/maps/Ranch/scripts.pory"
	delay 15
# 2928 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_PesticideEncounterFarmer_Text_10
# 2929 "data/maps/Ranch/scripts.pory"
	closemessage
# 2930 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 2931 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 58
	goto_if_eq Ranch_EventScript_PesticideEncounterFarmer_19
Ranch_EventScript_PesticideEncounterFarmer_17:
# 2934 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 59
	goto_if_eq Ranch_EventScript_PesticideEncounterFarmer_29
Ranch_EventScript_PesticideEncounterFarmer_27:
# 2939 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2940 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, Ranch_EventScript_PesticideEncounterFarmer_Text_11, Ranch_EventScript_PesticideEncounterFarmer_Text_12, Ranch_EventScript_SixthProtestorLeave
	goto Ranch_EventScript_PesticideEncounterFarmer_1

Ranch_EventScript_PesticideEncounterFarmer_13:
# 2910 "data/maps/Ranch/scripts.pory"
	applymovement 25, Common_Movement_FacePlayer
	goto Ranch_EventScript_PesticideEncounterFarmer_12

Ranch_EventScript_PesticideEncounterFarmer_14:
# 2909 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 19
	goto_if_eq Ranch_EventScript_PesticideEncounterFarmer_13
	goto Ranch_EventScript_PesticideEncounterFarmer_12

Ranch_EventScript_PesticideEncounterFarmer_18:
# 2932 "data/maps/Ranch/scripts.pory"
	applymovement 26, Common_Movement_FacePlayer
	goto Ranch_EventScript_PesticideEncounterFarmer_17

Ranch_EventScript_PesticideEncounterFarmer_19:
# 2931 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 19
	goto_if_eq Ranch_EventScript_PesticideEncounterFarmer_18
	goto Ranch_EventScript_PesticideEncounterFarmer_17

Ranch_EventScript_PesticideEncounterFarmer_23:
# 2913 "data/maps/Ranch/scripts.pory"
	applymovement 25, Farmer6ToLeft
# 2914 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2915 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Ranch_EventScript_PesticideEncounterFarmer_22

Ranch_EventScript_PesticideEncounterFarmer_24:
# 2912 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 19
	goto_if_eq Ranch_EventScript_PesticideEncounterFarmer_23
	goto Ranch_EventScript_PesticideEncounterFarmer_22

Ranch_EventScript_PesticideEncounterFarmer_28:
# 2935 "data/maps/Ranch/scripts.pory"
	applymovement 26, Protestor6ToRight
# 2936 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2937 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Ranch_EventScript_PesticideEncounterFarmer_27

Ranch_EventScript_PesticideEncounterFarmer_29:
# 2934 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 19
	goto_if_eq Ranch_EventScript_PesticideEncounterFarmer_28
	goto Ranch_EventScript_PesticideEncounterFarmer_27


Ranch_EventScript_PesticideEncounterProtestor::
# 2955 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER6_BATTLE, Ranch_EventScript_PesticideEncounterProtestor_2
Ranch_EventScript_PesticideEncounterProtestor_1:
# 3027 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER6_BATTLE, Ranch_EventScript_PesticideEncounterProtestor_5
Ranch_EventScript_PesticideEncounterProtestor_4:
# 3034 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_PesticideEncounterProtestor_2:
# 2956 "data/maps/Ranch/scripts.pory"
	lock
# 2957 "data/maps/Ranch/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceFastRight
# 2958 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2959 "data/maps/Ranch/scripts.pory"
	delay 15
# 2960 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_PesticideEncounterFarmer_Text_0
# 2961 "data/maps/Ranch/scripts.pory"
	closemessage
# 2962 "data/maps/Ranch/scripts.pory"
	delay 15
# 2963 "data/maps/Ranch/scripts.pory"
	applymovement 25, Common_Movement_WalkInPlaceFastLeft
# 2964 "data/maps/Ranch/scripts.pory"
	delay 15
# 2965 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_PesticideEncounterFarmer_Text_1
# 2966 "data/maps/Ranch/scripts.pory"
	closemessage
# 2967 "data/maps/Ranch/scripts.pory"
	delay 15
# 2968 "data/maps/Ranch/scripts.pory"
	applymovement 26, Common_Movement_WalkInPlaceFastRight
# 2969 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2970 "data/maps/Ranch/scripts.pory"
	delay 15
# 2971 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_PesticideEncounterFarmer_Text_2
# 2972 "data/maps/Ranch/scripts.pory"
	closemessage
# 2973 "data/maps/Ranch/scripts.pory"
	delay 15
# 2974 "data/maps/Ranch/scripts.pory"
	applymovement 25, Common_Movement_WalkInPlaceFastLeft
# 2975 "data/maps/Ranch/scripts.pory"
	delay 15
# 2976 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_PesticideEncounterFarmer_Text_3
# 2977 "data/maps/Ranch/scripts.pory"
	closemessage
# 2978 "data/maps/Ranch/scripts.pory"
	delay 15
# 2979 "data/maps/Ranch/scripts.pory"
	faceplayer
# 2980 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_PesticideEncounterFarmer_Text_4
# 2981 "data/maps/Ranch/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Ranch_EventScript_PesticideEncounterFarmer_Text_5, Ranch_EventScript_PesticideEncounterFarmer_Text_6
# 2982 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Ranch_EventScript_PesticideEncounterProtestor_8
Ranch_EventScript_PesticideEncounterProtestor_7:
# 3004 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Ranch_EventScript_PesticideEncounterProtestor_10
	goto Ranch_EventScript_PesticideEncounterProtestor_1

Ranch_EventScript_PesticideEncounterProtestor_5:
# 3028 "data/maps/Ranch/scripts.pory"
	lock
# 3029 "data/maps/Ranch/scripts.pory"
	faceplayer
# 3030 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3031 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_PesticideEncounterProtestor_Text_0
# 3032 "data/maps/Ranch/scripts.pory"
	closemessage
	goto Ranch_EventScript_PesticideEncounterProtestor_4

Ranch_EventScript_PesticideEncounterProtestor_8:
# 2983 "data/maps/Ranch/scripts.pory"
	applymovement 26, Common_Movement_LockFacingDirection
# 2984 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2985 "data/maps/Ranch/scripts.pory"
	applymovement 25, FarmerFreakOut
# 2986 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2987 "data/maps/Ranch/scripts.pory"
	applymovement 25, Common_Movement_FaceLeft
# 2988 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2989 "data/maps/Ranch/scripts.pory"
	delay 15
# 2990 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_PesticideEncounterFarmer_Text_7
# 2991 "data/maps/Ranch/scripts.pory"
	closemessage
# 2992 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 2993 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 59
	goto_if_eq Ranch_EventScript_PesticideEncounterProtestor_14
Ranch_EventScript_PesticideEncounterProtestor_12:
# 2996 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 58
	goto_if_eq Ranch_EventScript_PesticideEncounterProtestor_24
Ranch_EventScript_PesticideEncounterProtestor_22:
# 3001 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3002 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_SPACE_CENTER_1, Ranch_EventScript_PesticideEncounterFarmer_Text_8, Ranch_EventScript_PesticideEncounterFarmer_Text_9, Ranch_EventScript_SixthFarmerLeave
	goto Ranch_EventScript_PesticideEncounterProtestor_7

Ranch_EventScript_PesticideEncounterProtestor_10:
# 3005 "data/maps/Ranch/scripts.pory"
	applymovement 25, Common_Movement_LockFacingDirection
# 3006 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3007 "data/maps/Ranch/scripts.pory"
	applymovement 26, FarmerFreakOut
# 3008 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3009 "data/maps/Ranch/scripts.pory"
	applymovement 26, Common_Movement_FaceRight
# 3010 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3011 "data/maps/Ranch/scripts.pory"
	delay 15
# 3012 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_PesticideEncounterFarmer_Text_10
# 3013 "data/maps/Ranch/scripts.pory"
	closemessage
# 3014 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 3015 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 58
	goto_if_eq Ranch_EventScript_PesticideEncounterProtestor_19
Ranch_EventScript_PesticideEncounterProtestor_17:
# 3018 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 59
	goto_if_eq Ranch_EventScript_PesticideEncounterProtestor_29
Ranch_EventScript_PesticideEncounterProtestor_27:
# 3023 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3024 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_1, Ranch_EventScript_PesticideEncounterFarmer_Text_11, Ranch_EventScript_PesticideEncounterFarmer_Text_12, Ranch_EventScript_SixthProtestorLeave
	goto Ranch_EventScript_PesticideEncounterProtestor_1

Ranch_EventScript_PesticideEncounterProtestor_13:
# 2994 "data/maps/Ranch/scripts.pory"
	applymovement 25, Common_Movement_FacePlayer
	goto Ranch_EventScript_PesticideEncounterProtestor_12

Ranch_EventScript_PesticideEncounterProtestor_14:
# 2993 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 19
	goto_if_eq Ranch_EventScript_PesticideEncounterProtestor_13
	goto Ranch_EventScript_PesticideEncounterProtestor_12

Ranch_EventScript_PesticideEncounterProtestor_18:
# 3016 "data/maps/Ranch/scripts.pory"
	applymovement 26, Common_Movement_FacePlayer
	goto Ranch_EventScript_PesticideEncounterProtestor_17

Ranch_EventScript_PesticideEncounterProtestor_19:
# 3015 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 19
	goto_if_eq Ranch_EventScript_PesticideEncounterProtestor_18
	goto Ranch_EventScript_PesticideEncounterProtestor_17

Ranch_EventScript_PesticideEncounterProtestor_23:
# 2997 "data/maps/Ranch/scripts.pory"
	applymovement 25, Farmer6ToLeft
# 2998 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 2999 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Ranch_EventScript_PesticideEncounterProtestor_22

Ranch_EventScript_PesticideEncounterProtestor_24:
# 2996 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 19
	goto_if_eq Ranch_EventScript_PesticideEncounterProtestor_23
	goto Ranch_EventScript_PesticideEncounterProtestor_22

Ranch_EventScript_PesticideEncounterProtestor_28:
# 3019 "data/maps/Ranch/scripts.pory"
	applymovement 26, Protestor6ToRight
# 3020 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3021 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Ranch_EventScript_PesticideEncounterProtestor_27

Ranch_EventScript_PesticideEncounterProtestor_29:
# 3018 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 19
	goto_if_eq Ranch_EventScript_PesticideEncounterProtestor_28
	goto Ranch_EventScript_PesticideEncounterProtestor_27


Ranch_EventScript_SixthFarmerLeave::
# 3039 "data/maps/Ranch/scripts.pory"
	lock
# 3040 "data/maps/Ranch/scripts.pory"
	delay 15
# 3041 "data/maps/Ranch/scripts.pory"
	applymovement 25, Common_Movement_FaceAwayPlayer
# 3042 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3043 "data/maps/Ranch/scripts.pory"
	delay 15
# 3044 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SixthFarmerLeave_Text_0
# 3045 "data/maps/Ranch/scripts.pory"
	closemessage
# 3046 "data/maps/Ranch/scripts.pory"
	delay 15
# 3047 "data/maps/Ranch/scripts.pory"
	applymovement 25, Common_Movement_FacePlayer
# 3048 "data/maps/Ranch/scripts.pory"
	delay 15
# 3049 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SixthFarmerLeave_Text_1
# 3050 "data/maps/Ranch/scripts.pory"
	closemessage
# 3051 "data/maps/Ranch/scripts.pory"
	delay 15
# 3052 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 3053 "data/maps/Ranch/scripts.pory"
	removeobject 25
# 3054 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 3055 "data/maps/Ranch/scripts.pory"
	waitse
# 3056 "data/maps/Ranch/scripts.pory"
	setflag FLAG_PROTEST_WIN_6
# 3057 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER6_BATTLE
# 3058 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER1_BATTLE, Ranch_EventScript_SixthFarmerLeave_4
Ranch_EventScript_SixthFarmerLeave_1:
# 3062 "data/maps/Ranch/scripts.pory"
	addvar VAR_RANCH_MORALITY_SYSTEM, 1
# 3063 "data/maps/Ranch/scripts.pory"
	applymovement 26, Common_Movement_UnlockFacingDirection
# 3064 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3065 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 26, MOVEMENT_TYPE_WANDER_AROUND
# 3066 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3067 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 26, 58, 18
# 3068 "data/maps/Ranch/scripts.pory"
	addobject 26
# 3069 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3070 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 26, MOVEMENT_TYPE_WANDER_AROUND
# 3071 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3072 "data/maps/Ranch/scripts.pory"
	delay 15
# 3073 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 3074 "data/maps/Ranch/scripts.pory"
	goto Ranch_EventScript_ProtestWin6
# 3075 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_SixthFarmerLeave_2:
# 3059 "data/maps/Ranch/scripts.pory"
	setflag FLAG_READY_FINAL_RANCH_BATTLE
# 3060 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_STATE, 2
	goto Ranch_EventScript_SixthFarmerLeave_1

Ranch_EventScript_SixthFarmerLeave_3:
# 3058 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER3_BATTLE, Ranch_EventScript_SixthFarmerLeave_8
	goto Ranch_EventScript_SixthFarmerLeave_1

Ranch_EventScript_SixthFarmerLeave_4:
# 3058 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER2_BATTLE, Ranch_EventScript_SixthFarmerLeave_3
	goto Ranch_EventScript_SixthFarmerLeave_1

Ranch_EventScript_SixthFarmerLeave_7:
# 3058 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER5_BATTLE, Ranch_EventScript_SixthFarmerLeave_12
	goto Ranch_EventScript_SixthFarmerLeave_1

Ranch_EventScript_SixthFarmerLeave_8:
# 3058 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER4_BATTLE, Ranch_EventScript_SixthFarmerLeave_7
	goto Ranch_EventScript_SixthFarmerLeave_1

Ranch_EventScript_SixthFarmerLeave_11:
# 3058 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER7_BATTLE, Ranch_EventScript_SixthFarmerLeave_2
	goto Ranch_EventScript_SixthFarmerLeave_1

Ranch_EventScript_SixthFarmerLeave_12:
# 3058 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER6_BATTLE, Ranch_EventScript_SixthFarmerLeave_11
	goto Ranch_EventScript_SixthFarmerLeave_1


Ranch_EventScript_SixthProtestorLeave::
# 3080 "data/maps/Ranch/scripts.pory"
	lock
# 3081 "data/maps/Ranch/scripts.pory"
	delay 15
# 3082 "data/maps/Ranch/scripts.pory"
	applymovement 26, Common_Movement_FaceAwayPlayer
# 3083 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3084 "data/maps/Ranch/scripts.pory"
	delay 15
# 3085 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SixthProtestorLeave_Text_0
# 3086 "data/maps/Ranch/scripts.pory"
	closemessage
# 3087 "data/maps/Ranch/scripts.pory"
	delay 15
# 3088 "data/maps/Ranch/scripts.pory"
	applymovement 26, FarmerFreakOut
# 3089 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 3090 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3091 "data/maps/Ranch/scripts.pory"
	applymovement 26, Common_Movement_FacePlayer
# 3092 "data/maps/Ranch/scripts.pory"
	delay 15
# 3093 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SixthProtestorLeave_Text_1
# 3094 "data/maps/Ranch/scripts.pory"
	closemessage
# 3095 "data/maps/Ranch/scripts.pory"
	delay 15
# 3096 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 3097 "data/maps/Ranch/scripts.pory"
	removeobject 26
# 3098 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 3099 "data/maps/Ranch/scripts.pory"
	waitse
# 3100 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER_WIN_6
# 3101 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER6_BATTLE
# 3102 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER1_BATTLE, Ranch_EventScript_SixthProtestorLeave_4
Ranch_EventScript_SixthProtestorLeave_1:
# 3106 "data/maps/Ranch/scripts.pory"
	subvar VAR_RANCH_MORALITY_SYSTEM, 1
# 3107 "data/maps/Ranch/scripts.pory"
	applymovement 25, Common_Movement_UnlockFacingDirection
# 3108 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3109 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 25, MOVEMENT_TYPE_WANDER_AROUND
# 3110 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3111 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 25, 59, 18
# 3112 "data/maps/Ranch/scripts.pory"
	addobject 25
# 3113 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3114 "data/maps/Ranch/scripts.pory"
	delay 15
# 3115 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 3116 "data/maps/Ranch/scripts.pory"
	goto Ranch_EventScript_FarmerWin6
# 3117 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_SixthProtestorLeave_2:
# 3103 "data/maps/Ranch/scripts.pory"
	setflag FLAG_READY_FINAL_RANCH_BATTLE
# 3104 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_STATE, 2
	goto Ranch_EventScript_SixthProtestorLeave_1

Ranch_EventScript_SixthProtestorLeave_3:
# 3102 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER3_BATTLE, Ranch_EventScript_SixthProtestorLeave_8
	goto Ranch_EventScript_SixthProtestorLeave_1

Ranch_EventScript_SixthProtestorLeave_4:
# 3102 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER2_BATTLE, Ranch_EventScript_SixthProtestorLeave_3
	goto Ranch_EventScript_SixthProtestorLeave_1

Ranch_EventScript_SixthProtestorLeave_7:
# 3102 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER5_BATTLE, Ranch_EventScript_SixthProtestorLeave_12
	goto Ranch_EventScript_SixthProtestorLeave_1

Ranch_EventScript_SixthProtestorLeave_8:
# 3102 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER4_BATTLE, Ranch_EventScript_SixthProtestorLeave_7
	goto Ranch_EventScript_SixthProtestorLeave_1

Ranch_EventScript_SixthProtestorLeave_11:
# 3102 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER7_BATTLE, Ranch_EventScript_SixthProtestorLeave_2
	goto Ranch_EventScript_SixthProtestorLeave_1

Ranch_EventScript_SixthProtestorLeave_12:
# 3102 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER6_BATTLE, Ranch_EventScript_SixthProtestorLeave_11
	goto Ranch_EventScript_SixthProtestorLeave_1


# 3121 "data/maps/Ranch/scripts.pory"
Farmer6ToLeft:
# 3122 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 3123 "data/maps/Ranch/scripts.pory"
	face_left
	step_end

# 3126 "data/maps/Ranch/scripts.pory"
Protestor6ToRight:
# 3127 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 3128 "data/maps/Ranch/scripts.pory"
	face_right
	step_end

Ranch_EventScript_FertilizerEncounterFarmer::
# 3140 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER7_BATTLE, Ranch_EventScript_FertilizerEncounterFarmer_2
Ranch_EventScript_FertilizerEncounterFarmer_1:
# 3208 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER7_BATTLE, Ranch_EventScript_FertilizerEncounterFarmer_5
Ranch_EventScript_FertilizerEncounterFarmer_4:
# 3215 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_FertilizerEncounterFarmer_2:
# 3141 "data/maps/Ranch/scripts.pory"
	lock
# 3142 "data/maps/Ranch/scripts.pory"
	applymovement 27, Common_Movement_WalkInPlaceFastRight
# 3143 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3144 "data/maps/Ranch/scripts.pory"
	delay 15
# 3145 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FertilizerEncounterFarmer_Text_0
# 3146 "data/maps/Ranch/scripts.pory"
	closemessage
# 3147 "data/maps/Ranch/scripts.pory"
	delay 15
# 3148 "data/maps/Ranch/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceFastLeft
# 3149 "data/maps/Ranch/scripts.pory"
	delay 15
# 3150 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FertilizerEncounterFarmer_Text_1
# 3151 "data/maps/Ranch/scripts.pory"
	closemessage
# 3152 "data/maps/Ranch/scripts.pory"
	delay 15
# 3153 "data/maps/Ranch/scripts.pory"
	applymovement 27, Common_Movement_WalkInPlaceFastRight
# 3154 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3155 "data/maps/Ranch/scripts.pory"
	delay 15
# 3156 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FertilizerEncounterFarmer_Text_2
# 3157 "data/maps/Ranch/scripts.pory"
	closemessage
# 3158 "data/maps/Ranch/scripts.pory"
	delay 15
# 3159 "data/maps/Ranch/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceFastLeft
# 3160 "data/maps/Ranch/scripts.pory"
	delay 15
# 3161 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FertilizerEncounterFarmer_Text_3
# 3162 "data/maps/Ranch/scripts.pory"
	closemessage
# 3163 "data/maps/Ranch/scripts.pory"
	delay 15
# 3164 "data/maps/Ranch/scripts.pory"
	faceplayer
# 3165 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FertilizerEncounterFarmer_Text_4
# 3166 "data/maps/Ranch/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Ranch_EventScript_PesticideEncounterFarmer_Text_5, Ranch_EventScript_FertilizerEncounterFarmer_Text_5
# 3167 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Ranch_EventScript_FertilizerEncounterFarmer_8
Ranch_EventScript_FertilizerEncounterFarmer_7:
# 3187 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Ranch_EventScript_FertilizerEncounterFarmer_10
	goto Ranch_EventScript_FertilizerEncounterFarmer_1

Ranch_EventScript_FertilizerEncounterFarmer_5:
# 3209 "data/maps/Ranch/scripts.pory"
	lock
# 3210 "data/maps/Ranch/scripts.pory"
	faceplayer
# 3211 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3212 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FertilizerEncounterFarmer_Text_12
# 3213 "data/maps/Ranch/scripts.pory"
	closemessage
	goto Ranch_EventScript_FertilizerEncounterFarmer_4

Ranch_EventScript_FertilizerEncounterFarmer_8:
# 3168 "data/maps/Ranch/scripts.pory"
	applymovement 28, Common_Movement_LockFacingDirection
# 3169 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3170 "data/maps/Ranch/scripts.pory"
	applymovement 27, FarmerMadInPlaceRight
# 3171 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3172 "data/maps/Ranch/scripts.pory"
	delay 15
# 3173 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FertilizerEncounterFarmer_Text_6
# 3174 "data/maps/Ranch/scripts.pory"
	closemessage
# 3175 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 3176 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 26
	goto_if_eq Ranch_EventScript_FertilizerEncounterFarmer_14
Ranch_EventScript_FertilizerEncounterFarmer_12:
# 3179 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq Ranch_EventScript_FertilizerEncounterFarmer_24
Ranch_EventScript_FertilizerEncounterFarmer_22:
# 3184 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3185 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, Ranch_EventScript_FertilizerEncounterFarmer_Text_7, Ranch_EventScript_FertilizerEncounterFarmer_Text_8, Ranch_EventScript_SeventhFarmerLeave
	goto Ranch_EventScript_FertilizerEncounterFarmer_7

Ranch_EventScript_FertilizerEncounterFarmer_10:
# 3188 "data/maps/Ranch/scripts.pory"
	applymovement 27, Common_Movement_LockFacingDirection
# 3189 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3190 "data/maps/Ranch/scripts.pory"
	applymovement 28, ProtestorMadInPlaceLeft
# 3191 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3192 "data/maps/Ranch/scripts.pory"
	delay 15
# 3193 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FertilizerEncounterFarmer_Text_9
# 3194 "data/maps/Ranch/scripts.pory"
	closemessage
# 3195 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 3196 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq Ranch_EventScript_FertilizerEncounterFarmer_19
Ranch_EventScript_FertilizerEncounterFarmer_17:
# 3199 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 26
	goto_if_eq Ranch_EventScript_FertilizerEncounterFarmer_29
Ranch_EventScript_FertilizerEncounterFarmer_27:
# 3204 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3205 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, Ranch_EventScript_FertilizerEncounterFarmer_Text_10, Ranch_EventScript_FertilizerEncounterFarmer_Text_11, Ranch_EventScript_SeventhProtestorLeave
	goto Ranch_EventScript_FertilizerEncounterFarmer_1

Ranch_EventScript_FertilizerEncounterFarmer_13:
# 3177 "data/maps/Ranch/scripts.pory"
	applymovement 27, Common_Movement_FacePlayer
	goto Ranch_EventScript_FertilizerEncounterFarmer_12

Ranch_EventScript_FertilizerEncounterFarmer_14:
# 3176 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 49
	goto_if_eq Ranch_EventScript_FertilizerEncounterFarmer_13
	goto Ranch_EventScript_FertilizerEncounterFarmer_12

Ranch_EventScript_FertilizerEncounterFarmer_18:
# 3197 "data/maps/Ranch/scripts.pory"
	applymovement 28, Common_Movement_FacePlayer
	goto Ranch_EventScript_FertilizerEncounterFarmer_17

Ranch_EventScript_FertilizerEncounterFarmer_19:
# 3196 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 49
	goto_if_eq Ranch_EventScript_FertilizerEncounterFarmer_18
	goto Ranch_EventScript_FertilizerEncounterFarmer_17

Ranch_EventScript_FertilizerEncounterFarmer_23:
# 3180 "data/maps/Ranch/scripts.pory"
	applymovement 27, Farmer7ToRight
# 3181 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3182 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Ranch_EventScript_FertilizerEncounterFarmer_22

Ranch_EventScript_FertilizerEncounterFarmer_24:
# 3179 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 49
	goto_if_eq Ranch_EventScript_FertilizerEncounterFarmer_23
	goto Ranch_EventScript_FertilizerEncounterFarmer_22

Ranch_EventScript_FertilizerEncounterFarmer_28:
# 3200 "data/maps/Ranch/scripts.pory"
	applymovement 28, Protestor7ToLeft
# 3201 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3202 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Ranch_EventScript_FertilizerEncounterFarmer_27

Ranch_EventScript_FertilizerEncounterFarmer_29:
# 3199 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 49
	goto_if_eq Ranch_EventScript_FertilizerEncounterFarmer_28
	goto Ranch_EventScript_FertilizerEncounterFarmer_27


Ranch_EventScript_FertilizerEncounterProtestor::
# 3220 "data/maps/Ranch/scripts.pory"
	goto_if_unset FLAG_FARMER7_BATTLE, Ranch_EventScript_FertilizerEncounterProtestor_2
Ranch_EventScript_FertilizerEncounterProtestor_1:
# 3288 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER7_BATTLE, Ranch_EventScript_FertilizerEncounterProtestor_5
Ranch_EventScript_FertilizerEncounterProtestor_4:
# 3295 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_FertilizerEncounterProtestor_2:
# 3221 "data/maps/Ranch/scripts.pory"
	lock
# 3222 "data/maps/Ranch/scripts.pory"
	applymovement 27, Common_Movement_WalkInPlaceFastRight
# 3223 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3224 "data/maps/Ranch/scripts.pory"
	delay 15
# 3225 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FertilizerEncounterFarmer_Text_0
# 3226 "data/maps/Ranch/scripts.pory"
	closemessage
# 3227 "data/maps/Ranch/scripts.pory"
	delay 15
# 3228 "data/maps/Ranch/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceFastLeft
# 3229 "data/maps/Ranch/scripts.pory"
	delay 15
# 3230 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FertilizerEncounterFarmer_Text_1
# 3231 "data/maps/Ranch/scripts.pory"
	closemessage
# 3232 "data/maps/Ranch/scripts.pory"
	delay 15
# 3233 "data/maps/Ranch/scripts.pory"
	applymovement 27, Common_Movement_WalkInPlaceFastRight
# 3234 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3235 "data/maps/Ranch/scripts.pory"
	delay 15
# 3236 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FertilizerEncounterFarmer_Text_2
# 3237 "data/maps/Ranch/scripts.pory"
	closemessage
# 3238 "data/maps/Ranch/scripts.pory"
	delay 15
# 3239 "data/maps/Ranch/scripts.pory"
	applymovement 28, Common_Movement_WalkInPlaceFastLeft
# 3240 "data/maps/Ranch/scripts.pory"
	delay 15
# 3241 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FertilizerEncounterFarmer_Text_3
# 3242 "data/maps/Ranch/scripts.pory"
	closemessage
# 3243 "data/maps/Ranch/scripts.pory"
	delay 15
# 3244 "data/maps/Ranch/scripts.pory"
	faceplayer
# 3245 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FertilizerEncounterFarmer_Text_4
# 3246 "data/maps/Ranch/scripts.pory"
	dynmultichoice 0, 0, TRUE, 2, 0, DYN_MULTICHOICE_CB_NONE, Ranch_EventScript_PesticideEncounterFarmer_Text_5, Ranch_EventScript_FertilizerEncounterFarmer_Text_5
# 3247 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Ranch_EventScript_FertilizerEncounterProtestor_8
Ranch_EventScript_FertilizerEncounterProtestor_7:
# 3267 "data/maps/Ranch/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Ranch_EventScript_FertilizerEncounterProtestor_10
	goto Ranch_EventScript_FertilizerEncounterProtestor_1

Ranch_EventScript_FertilizerEncounterProtestor_5:
# 3289 "data/maps/Ranch/scripts.pory"
	lock
# 3290 "data/maps/Ranch/scripts.pory"
	faceplayer
# 3291 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3292 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FertilizerEncounterProtestor_Text_0
# 3293 "data/maps/Ranch/scripts.pory"
	closemessage
	goto Ranch_EventScript_FertilizerEncounterProtestor_4

Ranch_EventScript_FertilizerEncounterProtestor_8:
# 3248 "data/maps/Ranch/scripts.pory"
	applymovement 28, Common_Movement_LockFacingDirection
# 3249 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3250 "data/maps/Ranch/scripts.pory"
	applymovement 27, FarmerMadInPlaceRight
# 3251 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3252 "data/maps/Ranch/scripts.pory"
	delay 15
# 3253 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FertilizerEncounterFarmer_Text_6
# 3254 "data/maps/Ranch/scripts.pory"
	closemessage
# 3255 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 3256 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 26
	goto_if_eq Ranch_EventScript_FertilizerEncounterProtestor_14
Ranch_EventScript_FertilizerEncounterProtestor_12:
# 3259 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq Ranch_EventScript_FertilizerEncounterProtestor_24
Ranch_EventScript_FertilizerEncounterProtestor_22:
# 3264 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3265 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_2, Ranch_EventScript_FertilizerEncounterFarmer_Text_7, Ranch_EventScript_FertilizerEncounterFarmer_Text_8, Ranch_EventScript_SeventhFarmerLeave
	goto Ranch_EventScript_FertilizerEncounterProtestor_7

Ranch_EventScript_FertilizerEncounterProtestor_10:
# 3268 "data/maps/Ranch/scripts.pory"
	applymovement 27, Common_Movement_LockFacingDirection
# 3269 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3270 "data/maps/Ranch/scripts.pory"
	applymovement 28, ProtestorMadInPlaceLeft
# 3271 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3272 "data/maps/Ranch/scripts.pory"
	delay 15
# 3273 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FertilizerEncounterFarmer_Text_9
# 3274 "data/maps/Ranch/scripts.pory"
	closemessage
# 3275 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 3276 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 27
	goto_if_eq Ranch_EventScript_FertilizerEncounterProtestor_19
Ranch_EventScript_FertilizerEncounterProtestor_17:
# 3279 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 26
	goto_if_eq Ranch_EventScript_FertilizerEncounterProtestor_29
Ranch_EventScript_FertilizerEncounterProtestor_27:
# 3284 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3285 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_MT_PYRE_3, Ranch_EventScript_FertilizerEncounterFarmer_Text_10, Ranch_EventScript_FertilizerEncounterFarmer_Text_11, Ranch_EventScript_SeventhProtestorLeave
	goto Ranch_EventScript_FertilizerEncounterProtestor_1

Ranch_EventScript_FertilizerEncounterProtestor_13:
# 3257 "data/maps/Ranch/scripts.pory"
	applymovement 27, Common_Movement_FacePlayer
	goto Ranch_EventScript_FertilizerEncounterProtestor_12

Ranch_EventScript_FertilizerEncounterProtestor_14:
# 3256 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 49
	goto_if_eq Ranch_EventScript_FertilizerEncounterProtestor_13
	goto Ranch_EventScript_FertilizerEncounterProtestor_12

Ranch_EventScript_FertilizerEncounterProtestor_18:
# 3277 "data/maps/Ranch/scripts.pory"
	applymovement 28, Common_Movement_FacePlayer
	goto Ranch_EventScript_FertilizerEncounterProtestor_17

Ranch_EventScript_FertilizerEncounterProtestor_19:
# 3276 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 49
	goto_if_eq Ranch_EventScript_FertilizerEncounterProtestor_18
	goto Ranch_EventScript_FertilizerEncounterProtestor_17

Ranch_EventScript_FertilizerEncounterProtestor_23:
# 3260 "data/maps/Ranch/scripts.pory"
	applymovement 27, Farmer7ToRight
# 3261 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3262 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Ranch_EventScript_FertilizerEncounterProtestor_22

Ranch_EventScript_FertilizerEncounterProtestor_24:
# 3259 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 49
	goto_if_eq Ranch_EventScript_FertilizerEncounterProtestor_23
	goto Ranch_EventScript_FertilizerEncounterProtestor_22

Ranch_EventScript_FertilizerEncounterProtestor_28:
# 3280 "data/maps/Ranch/scripts.pory"
	applymovement 28, Protestor7ToLeft
# 3281 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3282 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	goto Ranch_EventScript_FertilizerEncounterProtestor_27

Ranch_EventScript_FertilizerEncounterProtestor_29:
# 3279 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 49
	goto_if_eq Ranch_EventScript_FertilizerEncounterProtestor_28
	goto Ranch_EventScript_FertilizerEncounterProtestor_27


Ranch_EventScript_SeventhFarmerLeave::
# 3300 "data/maps/Ranch/scripts.pory"
	lock
# 3301 "data/maps/Ranch/scripts.pory"
	delay 15
# 3302 "data/maps/Ranch/scripts.pory"
	applymovement 27, Common_Movement_FaceAwayPlayer
# 3303 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3304 "data/maps/Ranch/scripts.pory"
	delay 15
# 3305 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SeventhFarmerLeave_Text_0
# 3306 "data/maps/Ranch/scripts.pory"
	closemessage
# 3307 "data/maps/Ranch/scripts.pory"
	delay 15
# 3308 "data/maps/Ranch/scripts.pory"
	applymovement 27, Common_Movement_FacePlayer
# 3309 "data/maps/Ranch/scripts.pory"
	delay 15
# 3310 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SeventhFarmerLeave_Text_1
# 3311 "data/maps/Ranch/scripts.pory"
	closemessage
# 3312 "data/maps/Ranch/scripts.pory"
	delay 15
# 3313 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 3314 "data/maps/Ranch/scripts.pory"
	removeobject 27
# 3315 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 3316 "data/maps/Ranch/scripts.pory"
	waitse
# 3317 "data/maps/Ranch/scripts.pory"
	setflag FLAG_PROTEST_WIN_7
# 3318 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER7_BATTLE
# 3319 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER1_BATTLE, Ranch_EventScript_SeventhFarmerLeave_4
Ranch_EventScript_SeventhFarmerLeave_1:
# 3323 "data/maps/Ranch/scripts.pory"
	addvar VAR_RANCH_MORALITY_SYSTEM, 1
# 3324 "data/maps/Ranch/scripts.pory"
	applymovement 28, Common_Movement_UnlockFacingDirection
# 3325 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3326 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 28, MOVEMENT_TYPE_WANDER_AROUND
# 3327 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3328 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 28, 27, 48
# 3329 "data/maps/Ranch/scripts.pory"
	addobject 28
# 3330 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3331 "data/maps/Ranch/scripts.pory"
	delay 15
# 3332 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 3333 "data/maps/Ranch/scripts.pory"
	goto Ranch_EventScript_ProtestWin7
# 3334 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_SeventhFarmerLeave_2:
# 3320 "data/maps/Ranch/scripts.pory"
	setflag FLAG_READY_FINAL_RANCH_BATTLE
# 3321 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_STATE, 2
	goto Ranch_EventScript_SeventhFarmerLeave_1

Ranch_EventScript_SeventhFarmerLeave_3:
# 3319 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER3_BATTLE, Ranch_EventScript_SeventhFarmerLeave_8
	goto Ranch_EventScript_SeventhFarmerLeave_1

Ranch_EventScript_SeventhFarmerLeave_4:
# 3319 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER2_BATTLE, Ranch_EventScript_SeventhFarmerLeave_3
	goto Ranch_EventScript_SeventhFarmerLeave_1

Ranch_EventScript_SeventhFarmerLeave_7:
# 3319 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER5_BATTLE, Ranch_EventScript_SeventhFarmerLeave_12
	goto Ranch_EventScript_SeventhFarmerLeave_1

Ranch_EventScript_SeventhFarmerLeave_8:
# 3319 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER4_BATTLE, Ranch_EventScript_SeventhFarmerLeave_7
	goto Ranch_EventScript_SeventhFarmerLeave_1

Ranch_EventScript_SeventhFarmerLeave_11:
# 3319 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER7_BATTLE, Ranch_EventScript_SeventhFarmerLeave_2
	goto Ranch_EventScript_SeventhFarmerLeave_1

Ranch_EventScript_SeventhFarmerLeave_12:
# 3319 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER6_BATTLE, Ranch_EventScript_SeventhFarmerLeave_11
	goto Ranch_EventScript_SeventhFarmerLeave_1


Ranch_EventScript_SeventhProtestorLeave::
# 3339 "data/maps/Ranch/scripts.pory"
	lock
# 3340 "data/maps/Ranch/scripts.pory"
	delay 15
# 3341 "data/maps/Ranch/scripts.pory"
	applymovement 28, Common_Movement_FaceAwayPlayer
# 3342 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3343 "data/maps/Ranch/scripts.pory"
	delay 15
# 3344 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SeventhProtestorLeave_Text_0
# 3345 "data/maps/Ranch/scripts.pory"
	closemessage
# 3346 "data/maps/Ranch/scripts.pory"
	delay 15
# 3347 "data/maps/Ranch/scripts.pory"
	applymovement 28, FarmerFreakOut
# 3348 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 3349 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3350 "data/maps/Ranch/scripts.pory"
	applymovement 28, Common_Movement_FacePlayer
# 3351 "data/maps/Ranch/scripts.pory"
	delay 15
# 3352 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_SeventhProtestorLeave_Text_1
# 3353 "data/maps/Ranch/scripts.pory"
	closemessage
# 3354 "data/maps/Ranch/scripts.pory"
	delay 15
# 3355 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_TO_BLACK
# 3356 "data/maps/Ranch/scripts.pory"
	removeobject 28
# 3357 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 3358 "data/maps/Ranch/scripts.pory"
	waitse
# 3359 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER_WIN_7
# 3360 "data/maps/Ranch/scripts.pory"
	setflag FLAG_FARMER7_BATTLE
# 3361 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER1_BATTLE, Ranch_EventScript_SeventhProtestorLeave_4
Ranch_EventScript_SeventhProtestorLeave_1:
# 3365 "data/maps/Ranch/scripts.pory"
	subvar VAR_RANCH_MORALITY_SYSTEM, 1
# 3366 "data/maps/Ranch/scripts.pory"
	applymovement 27, Common_Movement_UnlockFacingDirection
# 3367 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3368 "data/maps/Ranch/scripts.pory"
	SetObjectMovementType 27, MOVEMENT_TYPE_WANDER_AROUND
# 3369 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3370 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 27, 26, 48
# 3371 "data/maps/Ranch/scripts.pory"
	addobject 27
# 3372 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3373 "data/maps/Ranch/scripts.pory"
	delay 15
# 3374 "data/maps/Ranch/scripts.pory"
	fadescreenswapbuffers FADE_FROM_BLACK
# 3375 "data/maps/Ranch/scripts.pory"
	goto Ranch_EventScript_FarmerWin7
# 3376 "data/maps/Ranch/scripts.pory"
	release
	end

Ranch_EventScript_SeventhProtestorLeave_2:
# 3362 "data/maps/Ranch/scripts.pory"
	setflag FLAG_READY_FINAL_RANCH_BATTLE
# 3363 "data/maps/Ranch/scripts.pory"
	setvar VAR_RANCH_STATE, 2
	goto Ranch_EventScript_SeventhProtestorLeave_1

Ranch_EventScript_SeventhProtestorLeave_3:
# 3361 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER3_BATTLE, Ranch_EventScript_SeventhProtestorLeave_8
	goto Ranch_EventScript_SeventhProtestorLeave_1

Ranch_EventScript_SeventhProtestorLeave_4:
# 3361 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER2_BATTLE, Ranch_EventScript_SeventhProtestorLeave_3
	goto Ranch_EventScript_SeventhProtestorLeave_1

Ranch_EventScript_SeventhProtestorLeave_7:
# 3361 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER5_BATTLE, Ranch_EventScript_SeventhProtestorLeave_12
	goto Ranch_EventScript_SeventhProtestorLeave_1

Ranch_EventScript_SeventhProtestorLeave_8:
# 3361 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER4_BATTLE, Ranch_EventScript_SeventhProtestorLeave_7
	goto Ranch_EventScript_SeventhProtestorLeave_1

Ranch_EventScript_SeventhProtestorLeave_11:
# 3361 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER7_BATTLE, Ranch_EventScript_SeventhProtestorLeave_2
	goto Ranch_EventScript_SeventhProtestorLeave_1

Ranch_EventScript_SeventhProtestorLeave_12:
# 3361 "data/maps/Ranch/scripts.pory"
	goto_if_set FLAG_FARMER6_BATTLE, Ranch_EventScript_SeventhProtestorLeave_11
	goto Ranch_EventScript_SeventhProtestorLeave_1


# 3380 "data/maps/Ranch/scripts.pory"
Protestor7ToLeft:
# 3381 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 3382 "data/maps/Ranch/scripts.pory"
	face_left
	step_end

# 3385 "data/maps/Ranch/scripts.pory"
Farmer7ToRight:
# 3386 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 3387 "data/maps/Ranch/scripts.pory"
	face_right
	step_end

# 3390 "data/maps/Ranch/scripts.pory"
FinalProtestorToScene:
# 3391 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3391 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3391 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3391 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3391 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3392 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 3392 "data/maps/Ranch/scripts.pory"
	walk_fast_up
# 3393 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3393 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3393 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3394 "data/maps/Ranch/scripts.pory"
	face_up
	step_end

# 3397 "data/maps/Ranch/scripts.pory"
LastProtestorFromScene:
# 3398 "data/maps/Ranch/scripts.pory"
	walk_fast_left
# 3398 "data/maps/Ranch/scripts.pory"
	walk_fast_left
# 3398 "data/maps/Ranch/scripts.pory"
	walk_fast_left
# 3399 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 3399 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 3400 "data/maps/Ranch/scripts.pory"
	walk_fast_left
# 3400 "data/maps/Ranch/scripts.pory"
	walk_fast_left
# 3400 "data/maps/Ranch/scripts.pory"
	walk_fast_left
# 3400 "data/maps/Ranch/scripts.pory"
	walk_fast_left
# 3400 "data/maps/Ranch/scripts.pory"
	walk_fast_left
	step_end

Ranch_EventScript_FinalEncounter::
# 3406 "data/maps/Ranch/scripts.pory"
	lock
# 3407 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FinalEncounter_Text_0
# 3408 "data/maps/Ranch/scripts.pory"
	closemessage
# 3409 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 3410 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3411 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 3412 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3413 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_2, VAR_TEMP_3
# 3414 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_2, 47
	goto_if_eq Ranch_EventScript_FinalEncounter_3
Ranch_EventScript_FinalEncounter_1:
# 3419 "data/maps/Ranch/scripts.pory"
	addobject 42
# 3420 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3421 "data/maps/Ranch/scripts.pory"
	setobjectxy 42, 39, 69
# 3422 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3423 "data/maps/Ranch/scripts.pory"
	delay 15
# 3424 "data/maps/Ranch/scripts.pory"
	applymovement 42, FinalProtestorToScene
# 3425 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3426 "data/maps/Ranch/scripts.pory"
	delay 30
# 3427 "data/maps/Ranch/scripts.pory"
	compare VAR_RANCH_MORALITY_SYSTEM, 10
	goto_if_gt Ranch_EventScript_FinalEncounter_7
Ranch_EventScript_FinalEncounter_6:
# 3475 "data/maps/Ranch/scripts.pory"
	compare VAR_RANCH_MORALITY_SYSTEM, 10
	goto_if_lt Ranch_EventScript_FinalEncounter_9
	return

Ranch_EventScript_FinalEncounter_2:
# 3415 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkRight
# 3416 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3417 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceLeft
	goto Ranch_EventScript_FinalEncounter_1

Ranch_EventScript_FinalEncounter_3:
# 3414 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_3, 67
	goto_if_eq Ranch_EventScript_FinalEncounter_2
	goto Ranch_EventScript_FinalEncounter_1

Ranch_EventScript_FinalEncounter_7:
# 3428 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 3429 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3430 "data/maps/Ranch/scripts.pory"
	delay 10
# 3431 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFastDown
# 3432 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3433 "data/maps/Ranch/scripts.pory"
	delay 15
# 3434 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FinalEncounter_Text_1
# 3435 "data/maps/Ranch/scripts.pory"
	closemessage
# 3436 "data/maps/Ranch/scripts.pory"
	delay 15
# 3437 "data/maps/Ranch/scripts.pory"
	applymovement 42, Common_Movement_WalkInPlaceFastUp
# 3438 "data/maps/Ranch/scripts.pory"
	delay 15
# 3439 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FinalEncounter_Text_2
# 3440 "data/maps/Ranch/scripts.pory"
	closemessage
# 3441 "data/maps/Ranch/scripts.pory"
	delay 15
# 3442 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 3443 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3444 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 3445 "data/maps/Ranch/scripts.pory"
	applymovement 42, Common_Movement_FacePlayer
# 3446 "data/maps/Ranch/scripts.pory"
	applymovement 7, Common_Movement_FacePlayer
# 3447 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3448 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FinalEncounter_Text_3
# 3449 "data/maps/Ranch/scripts.pory"
	closemessage
# 3450 "data/maps/Ranch/scripts.pory"
	delay 15
# 3451 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 3452 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 48
	goto_if_eq Ranch_EventScript_FinalEncounter_13
Ranch_EventScript_FinalEncounter_11:
# 3455 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 48
	goto_if_eq Ranch_EventScript_FinalEncounter_23
Ranch_EventScript_FinalEncounter_21:
# 3461 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 47
	goto_if_eq Ranch_EventScript_FinalEncounter_33
Ranch_EventScript_FinalEncounter_31:
# 3466 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 46
	goto_if_eq Ranch_EventScript_FinalEncounter_43
Ranch_EventScript_FinalEncounter_41:
# 3472 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3473 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_WEATHER_INST_4, Ranch_EventScript_FinalEncounter_Text_4, Ranch_EventScript_FinalEncounter_Text_5, Ranch_EventScript_AfterFinalFarmerBattle
	goto Ranch_EventScript_FinalEncounter_6

Ranch_EventScript_FinalEncounter_9:
# 3476 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_FaceDown
# 3477 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3478 "data/maps/Ranch/scripts.pory"
	delay 10
# 3479 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_WalkInPlaceFastDown
# 3480 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3481 "data/maps/Ranch/scripts.pory"
	delay 15
# 3482 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FinalEncounter_Text_6
# 3483 "data/maps/Ranch/scripts.pory"
	closemessage
# 3484 "data/maps/Ranch/scripts.pory"
	delay 15
# 3485 "data/maps/Ranch/scripts.pory"
	applymovement 42, Common_Movement_WalkInPlaceFastUp
# 3486 "data/maps/Ranch/scripts.pory"
	delay 15
# 3487 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FinalEncounter_Text_7
# 3488 "data/maps/Ranch/scripts.pory"
	closemessage
# 3489 "data/maps/Ranch/scripts.pory"
	delay 15
# 3490 "data/maps/Ranch/scripts.pory"
	applymovement 42, Common_Movement_ExclamationMark
# 3491 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3492 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 3493 "data/maps/Ranch/scripts.pory"
	applymovement 42, Common_Movement_FacePlayer
# 3494 "data/maps/Ranch/scripts.pory"
	applymovement 7, Common_Movement_FacePlayer
# 3495 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3496 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_LockFacingDirection
# 3497 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3498 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_FinalEncounter_Text_8
# 3499 "data/maps/Ranch/scripts.pory"
	closemessage
# 3500 "data/maps/Ranch/scripts.pory"
	delay 15
# 3501 "data/maps/Ranch/scripts.pory"
	getplayerxy VAR_TEMP_0, VAR_TEMP_1
# 3502 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 48
	goto_if_eq Ranch_EventScript_FinalEncounter_18
Ranch_EventScript_FinalEncounter_16:
# 3507 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 48
	goto_if_eq Ranch_EventScript_FinalEncounter_28
Ranch_EventScript_FinalEncounter_26:
# 3510 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 47
	goto_if_eq Ranch_EventScript_FinalEncounter_38
Ranch_EventScript_FinalEncounter_36:
# 3513 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_0, 46
	goto_if_eq Ranch_EventScript_FinalEncounter_48
Ranch_EventScript_FinalEncounter_46:
# 3516 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3517 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_5, Ranch_EventScript_FinalEncounter_Text_9, Ranch_EventScript_FinalEncounter_Text_10, Ranch_EventScript_AfterFinalProtestorBattle
	return

Ranch_EventScript_FinalEncounter_12:
# 3453 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
	goto Ranch_EventScript_FinalEncounter_11

Ranch_EventScript_FinalEncounter_13:
# 3452 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 66
	goto_if_eq Ranch_EventScript_FinalEncounter_12
	goto Ranch_EventScript_FinalEncounter_11

Ranch_EventScript_FinalEncounter_17:
# 3503 "data/maps/Ranch/scripts.pory"
	applymovement 42, FinalProtestorToRight
# 3504 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3505 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceDown
	goto Ranch_EventScript_FinalEncounter_16

Ranch_EventScript_FinalEncounter_18:
# 3502 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 66
	goto_if_eq Ranch_EventScript_FinalEncounter_17
	goto Ranch_EventScript_FinalEncounter_16

Ranch_EventScript_FinalEncounter_22:
# 3456 "data/maps/Ranch/scripts.pory"
	applymovement 6, MainFarmerToRight
# 3457 "data/maps/Ranch/scripts.pory"
	applymovement 7, MainFarmerToRight
# 3458 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3459 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto Ranch_EventScript_FinalEncounter_21

Ranch_EventScript_FinalEncounter_23:
# 3455 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 67
	goto_if_eq Ranch_EventScript_FinalEncounter_22
	goto Ranch_EventScript_FinalEncounter_21

Ranch_EventScript_FinalEncounter_27:
# 3508 "data/maps/Ranch/scripts.pory"
	applymovement 42, Common_Movement_FacePlayer
	goto Ranch_EventScript_FinalEncounter_26

Ranch_EventScript_FinalEncounter_28:
# 3507 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 67
	goto_if_eq Ranch_EventScript_FinalEncounter_27
	goto Ranch_EventScript_FinalEncounter_26

Ranch_EventScript_FinalEncounter_32:
# 3462 "data/maps/Ranch/scripts.pory"
	applymovement 6, MainFarmerToBottom
# 3463 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3464 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto Ranch_EventScript_FinalEncounter_31

Ranch_EventScript_FinalEncounter_33:
# 3461 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 68
	goto_if_eq Ranch_EventScript_FinalEncounter_32
	goto Ranch_EventScript_FinalEncounter_31

Ranch_EventScript_FinalEncounter_37:
# 3511 "data/maps/Ranch/scripts.pory"
	applymovement 42, Common_Movement_FacePlayer
	goto Ranch_EventScript_FinalEncounter_36

Ranch_EventScript_FinalEncounter_38:
# 3510 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 68
	goto_if_eq Ranch_EventScript_FinalEncounter_37
	goto Ranch_EventScript_FinalEncounter_36

Ranch_EventScript_FinalEncounter_42:
# 3467 "data/maps/Ranch/scripts.pory"
	applymovement 6, MainFarmerToLeft
# 3468 "data/maps/Ranch/scripts.pory"
	applymovement 7, MainFarmerToLeft
# 3469 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3470 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
	goto Ranch_EventScript_FinalEncounter_41

Ranch_EventScript_FinalEncounter_43:
# 3466 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 67
	goto_if_eq Ranch_EventScript_FinalEncounter_42
	goto Ranch_EventScript_FinalEncounter_41

Ranch_EventScript_FinalEncounter_47:
# 3514 "data/maps/Ranch/scripts.pory"
	applymovement 42, Common_Movement_FacePlayer
	goto Ranch_EventScript_FinalEncounter_46

Ranch_EventScript_FinalEncounter_48:
# 3513 "data/maps/Ranch/scripts.pory"
	compare VAR_TEMP_1, 67
	goto_if_eq Ranch_EventScript_FinalEncounter_47
	goto Ranch_EventScript_FinalEncounter_46


# 3521 "data/maps/Ranch/scripts.pory"
MainFarmerToRight:
# 3522 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3523 "data/maps/Ranch/scripts.pory"
	face_down
	step_end

# 3526 "data/maps/Ranch/scripts.pory"
MainFarmerToBottom:
# 3527 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3528 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 3528 "data/maps/Ranch/scripts.pory"
	walk_fast_down
# 3529 "data/maps/Ranch/scripts.pory"
	face_left
	step_end

# 3532 "data/maps/Ranch/scripts.pory"
MainFarmerToLeft:
# 3533 "data/maps/Ranch/scripts.pory"
	walk_fast_left
# 3534 "data/maps/Ranch/scripts.pory"
	face_down
	step_end

# 3537 "data/maps/Ranch/scripts.pory"
FinalProtestorToRight:
# 3538 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3539 "data/maps/Ranch/scripts.pory"
	face_up
	step_end

Ranch_EventScript_AfterFinalFarmerBattle::
# 3543 "data/maps/Ranch/scripts.pory"
	setflag FLAG_RANCH_COMPLETE
# 3544 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_FaceUp
# 3545 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3546 "data/maps/Ranch/scripts.pory"
	delay 30
# 3547 "data/maps/Ranch/scripts.pory"
	applymovement 6, ProtestorMadInPlaceUp
# 3548 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3549 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_AfterFinalFarmerBattle_Text_0
# 3550 "data/maps/Ranch/scripts.pory"
	closemessage
# 3551 "data/maps/Ranch/scripts.pory"
	delay 30
# 3552 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_FacePlayer
# 3553 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3554 "data/maps/Ranch/scripts.pory"
	delay 30
# 3555 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_AfterFinalFarmerBattle_Text_1
# 3556 "data/maps/Ranch/scripts.pory"
	closemessage
# 3557 "data/maps/Ranch/scripts.pory"
	delay 30
# 3558 "data/maps/Ranch/scripts.pory"
	playse SE_PIN
# 3559 "data/maps/Ranch/scripts.pory"
	waitse
# 3560 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_AfterFinalFarmerBattle_Text_2
# 3561 "data/maps/Ranch/scripts.pory"
	closemessage
# 3562 "data/maps/Ranch/scripts.pory"
	addobject 39
# 3563 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3564 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 39, 57, 67
# 3565 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3566 "data/maps/Ranch/scripts.pory"
	delay 15
# 3567 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 3568 "data/maps/Ranch/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 3569 "data/maps/Ranch/scripts.pory"
	applymovement 42, Common_Movement_FaceRight
# 3570 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 3571 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceRight
# 3572 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3573 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 3574 "data/maps/Ranch/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 3575 "data/maps/Ranch/scripts.pory"
	applymovement 42, Common_Movement_ExclamationMark
# 3576 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 3577 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExclamationMark
# 3578 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3579 "data/maps/Ranch/scripts.pory"
	applymovement 39, TechBroToScene
# 3580 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3581 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_AfterFinalFarmerBattle_Text_3
# 3582 "data/maps/Ranch/scripts.pory"
	closemessage
# 3583 "data/maps/Ranch/scripts.pory"
	delay 15
# 3584 "data/maps/Ranch/scripts.pory"
	applymovement 42, Common_Movement_JumpInPlaceRight
# 3585 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 3586 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3587 "data/maps/Ranch/scripts.pory"
	delay 15
# 3588 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_AfterFinalFarmerBattle_Text_4
# 3589 "data/maps/Ranch/scripts.pory"
	closemessage
# 3590 "data/maps/Ranch/scripts.pory"
	delay 30
# 3591 "data/maps/Ranch/scripts.pory"
	applymovement 39, FarmerFreakOut
# 3592 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 3593 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3594 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_FaceLeft
# 3595 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3596 "data/maps/Ranch/scripts.pory"
	delay 15
# 3597 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_AfterFinalFarmerBattle_Text_5
# 3598 "data/maps/Ranch/scripts.pory"
	closemessage
# 3599 "data/maps/Ranch/scripts.pory"
	delay 10
# 3600 "data/maps/Ranch/scripts.pory"
	applymovement 39, TechBroFromScene
# 3601 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3602 "data/maps/Ranch/scripts.pory"
	delay 120
# 3603 "data/maps/Ranch/scripts.pory"
	fadenewbgm MUS_DUMMY
# 3604 "data/maps/Ranch/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 3605 "data/maps/Ranch/scripts.pory"
	delay 30
# 3606 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_AfterFinalFarmerBattle_Text_6
# 3607 "data/maps/Ranch/scripts.pory"
	closemessage
# 3608 "data/maps/Ranch/scripts.pory"
	delay 120
# 3609 "data/maps/Ranch/scripts.pory"
	warpcontinuescript MAP_RANCH_GOOD_ENDING, 40, 28, GoodEnding_EventScript
	end


# 3613 "data/maps/Ranch/scripts.pory"
TechBroToScene:
# 3614 "data/maps/Ranch/scripts.pory"
	walk_faster_up
# 3614 "data/maps/Ranch/scripts.pory"
	walk_faster_up
# 3615 "data/maps/Ranch/scripts.pory"
	walk_faster_left
# 3615 "data/maps/Ranch/scripts.pory"
	walk_faster_left
# 3615 "data/maps/Ranch/scripts.pory"
	walk_faster_left
# 3615 "data/maps/Ranch/scripts.pory"
	walk_faster_left
# 3615 "data/maps/Ranch/scripts.pory"
	walk_faster_left
# 3615 "data/maps/Ranch/scripts.pory"
	walk_faster_left
# 3615 "data/maps/Ranch/scripts.pory"
	walk_faster_left
	step_end

# 3618 "data/maps/Ranch/scripts.pory"
TechBroFromScene:
# 3619 "data/maps/Ranch/scripts.pory"
	walk_faster_right
# 3619 "data/maps/Ranch/scripts.pory"
	walk_faster_right
# 3619 "data/maps/Ranch/scripts.pory"
	walk_faster_right
# 3619 "data/maps/Ranch/scripts.pory"
	walk_faster_right
# 3619 "data/maps/Ranch/scripts.pory"
	walk_faster_right
# 3619 "data/maps/Ranch/scripts.pory"
	walk_faster_right
# 3619 "data/maps/Ranch/scripts.pory"
	walk_faster_right
# 3620 "data/maps/Ranch/scripts.pory"
	walk_faster_down
# 3620 "data/maps/Ranch/scripts.pory"
	walk_faster_down
	step_end

Ranch_EventScript_AfterFinalProtestorBattle::
# 3624 "data/maps/Ranch/scripts.pory"
	setflag FLAG_RANCH_COMPLETE
# 3625 "data/maps/Ranch/scripts.pory"
	applymovement 42, Common_Movement_FaceDown
# 3626 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3627 "data/maps/Ranch/scripts.pory"
	delay 30
# 3628 "data/maps/Ranch/scripts.pory"
	applymovement 42, FarmerMadInPlaceDown
# 3629 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3630 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_AfterFinalProtestorBattle_Text_0
# 3631 "data/maps/Ranch/scripts.pory"
	closemessage
# 3632 "data/maps/Ranch/scripts.pory"
	delay 30
# 3633 "data/maps/Ranch/scripts.pory"
	applymovement 42, Common_Movement_FacePlayer
# 3634 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3635 "data/maps/Ranch/scripts.pory"
	delay 30
# 3636 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_AfterFinalProtestorBattle_Text_1
# 3637 "data/maps/Ranch/scripts.pory"
	closemessage
# 3638 "data/maps/Ranch/scripts.pory"
	delay 30
# 3639 "data/maps/Ranch/scripts.pory"
	playse SE_PIN
# 3640 "data/maps/Ranch/scripts.pory"
	waitse
# 3641 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_AfterFinalProtestorBattle_Text_2
# 3642 "data/maps/Ranch/scripts.pory"
	closemessage
# 3643 "data/maps/Ranch/scripts.pory"
	addobject 39
# 3644 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3645 "data/maps/Ranch/scripts.pory"
	setobjectxyperm 39, 57, 67
# 3646 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3647 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_UnlockFacingDirection
# 3648 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3649 "data/maps/Ranch/scripts.pory"
	delay 15
# 3650 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_FaceRight
# 3651 "data/maps/Ranch/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 3652 "data/maps/Ranch/scripts.pory"
	applymovement 42, Common_Movement_FaceRight
# 3653 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
# 3654 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_FaceRight
# 3655 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3656 "data/maps/Ranch/scripts.pory"
	applymovement 6, Common_Movement_ExclamationMark
# 3657 "data/maps/Ranch/scripts.pory"
	applymovement 7, Common_Movement_ExclamationMark
# 3658 "data/maps/Ranch/scripts.pory"
	applymovement 42, Common_Movement_ExclamationMark
# 3659 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_ExclamationMark
# 3660 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_FOLLOWER, Common_Movement_ExclamationMark
# 3661 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3662 "data/maps/Ranch/scripts.pory"
	applymovement 39, TechBroToScene
# 3663 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3664 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_AfterFinalProtestorBattle_Text_3
# 3665 "data/maps/Ranch/scripts.pory"
	closemessage
# 3666 "data/maps/Ranch/scripts.pory"
	delay 15
# 3667 "data/maps/Ranch/scripts.pory"
	applymovement 42, Common_Movement_JumpInPlaceRight
# 3668 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 3669 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3670 "data/maps/Ranch/scripts.pory"
	delay 15
# 3671 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_AfterFinalProtestorBattle_Text_4
# 3672 "data/maps/Ranch/scripts.pory"
	closemessage
# 3673 "data/maps/Ranch/scripts.pory"
	delay 30
# 3674 "data/maps/Ranch/scripts.pory"
	applymovement 39, Common_Movement_WalkInPlaceLeft
# 3675 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3676 "data/maps/Ranch/scripts.pory"
	delay 15
# 3677 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_AfterFinalProtestorBattle_Text_5
# 3678 "data/maps/Ranch/scripts.pory"
	closemessage
# 3679 "data/maps/Ranch/scripts.pory"
	delay 10
# 3680 "data/maps/Ranch/scripts.pory"
	applymovement 42, Common_Movement_JumpInPlaceRight
# 3681 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 3682 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3683 "data/maps/Ranch/scripts.pory"
	delay 15
# 3684 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_AfterFinalProtestorBattle_Text_6
# 3685 "data/maps/Ranch/scripts.pory"
	closemessage
# 3686 "data/maps/Ranch/scripts.pory"
	applymovement 42, LastProtestorFromScene
# 3687 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3688 "data/maps/Ranch/scripts.pory"
	delay 120
# 3689 "data/maps/Ranch/scripts.pory"
	fadenewbgm MUS_DUMMY
# 3690 "data/maps/Ranch/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 8
# 3691 "data/maps/Ranch/scripts.pory"
	delay 30
# 3692 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_AfterFinalFarmerBattle_Text_6
# 3693 "data/maps/Ranch/scripts.pory"
	closemessage
# 3694 "data/maps/Ranch/scripts.pory"
	delay 120
# 3695 "data/maps/Ranch/scripts.pory"
	warpcontinuescript MAP_RANCH_BAD_ENDING, 40, 28, BadEnding_EventScript
	end


GoodEnding_EventScript::
# 3700 "data/maps/Ranch/scripts.pory"
	lock
# 3701 "data/maps/Ranch/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_RANCH_GOOD_ENDING
# 3702 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3704 "data/maps/Ranch/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 8
# 3705 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3706 "data/maps/Ranch/scripts.pory"
	special SpawnCameraObject
# 3707 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3708 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RightPan
# 3709 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3710 "data/maps/Ranch/scripts.pory"
	fadescreen FADE_TO_BLACK
# 3711 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3712 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, FirstOffScreenCam
# 3716 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3717 "data/maps/Ranch/scripts.pory"
	delay 15
# 3718 "data/maps/Ranch/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 3719 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3720 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LeftPan
# 3721 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3722 "data/maps/Ranch/scripts.pory"
	fadescreen FADE_TO_BLACK
# 3723 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3724 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SecondOffScreenCam
# 3728 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3729 "data/maps/Ranch/scripts.pory"
	delay 15
# 3730 "data/maps/Ranch/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 3731 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3732 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraLastMovement
# 3733 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3734 "data/maps/Ranch/scripts.pory"
	delay 30
# 3735 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 3736 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3737 "data/maps/Ranch/scripts.pory"
	delay 15
# 3738 "data/maps/Ranch/scripts.pory"
	msgbox GoodEnding_EventScript_Text_0
# 3739 "data/maps/Ranch/scripts.pory"
	closemessage
# 3740 "data/maps/Ranch/scripts.pory"
	delay 15
# 3741 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 3742 "data/maps/Ranch/scripts.pory"
	waitmovement 15
# 3743 "data/maps/Ranch/scripts.pory"
	msgbox GoodEnding_EventScript_Text_1
# 3744 "data/maps/Ranch/scripts.pory"
	closemessage
# 3745 "data/maps/Ranch/scripts.pory"
	delay 15
# 3746 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 3747 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3748 "data/maps/Ranch/scripts.pory"
	msgbox GoodEnding_EventScript_Text_2
# 3749 "data/maps/Ranch/scripts.pory"
	closemessage
# 3750 "data/maps/Ranch/scripts.pory"
	delay 15
# 3751 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 3752 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3753 "data/maps/Ranch/scripts.pory"
	msgbox GoodEnding_EventScript_Text_3
# 3754 "data/maps/Ranch/scripts.pory"
	closemessage
# 3755 "data/maps/Ranch/scripts.pory"
	delay 15
# 3756 "data/maps/Ranch/scripts.pory"
	playse SE_APPLAUSE
# 3757 "data/maps/Ranch/scripts.pory"
	applymovement 3, GoodEnding_EventScript_Movement_0
# 3758 "data/maps/Ranch/scripts.pory"
	applymovement 5, GoodEnding_EventScript_Movement_0
# 3759 "data/maps/Ranch/scripts.pory"
	applymovement 9, GoodEnding_EventScript_Movement_1
# 3760 "data/maps/Ranch/scripts.pory"
	applymovement 10, EatUp
# 3761 "data/maps/Ranch/scripts.pory"
	applymovement 8, EatUp
# 3762 "data/maps/Ranch/scripts.pory"
	applymovement 6, EatUp
# 3763 "data/maps/Ranch/scripts.pory"
	applymovement 7, EatUp
# 3764 "data/maps/Ranch/scripts.pory"
	applymovement 2, EatDown
# 3765 "data/maps/Ranch/scripts.pory"
	applymovement 4, EatDown
# 3766 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3767 "data/maps/Ranch/scripts.pory"
	waitse
# 3768 "data/maps/Ranch/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 6
# 3769 "data/maps/Ranch/scripts.pory"
	delay 30
# 3770 "data/maps/Ranch/scripts.pory"
	fadeoutbgm 0
# 3771 "data/maps/Ranch/scripts.pory"
	callnative StartCredits
# 3772 "data/maps/Ranch/scripts.pory"
	release
	end


# 3776 "data/maps/Ranch/scripts.pory"
RightPan:
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
# 3777 "data/maps/Ranch/scripts.pory"
	walk_right
	step_end

# 3780 "data/maps/Ranch/scripts.pory"
LeftPan:
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
# 3781 "data/maps/Ranch/scripts.pory"
	walk_left
	step_end

# 3784 "data/maps/Ranch/scripts.pory"
CameraLastMovement:
# 3785 "data/maps/Ranch/scripts.pory"
	walk_right
# 3785 "data/maps/Ranch/scripts.pory"
	walk_right
# 3785 "data/maps/Ranch/scripts.pory"
	walk_right
# 3785 "data/maps/Ranch/scripts.pory"
	walk_right
# 3785 "data/maps/Ranch/scripts.pory"
	walk_right
# 3785 "data/maps/Ranch/scripts.pory"
	walk_right
# 3785 "data/maps/Ranch/scripts.pory"
	walk_right
# 3785 "data/maps/Ranch/scripts.pory"
	walk_right
# 3785 "data/maps/Ranch/scripts.pory"
	walk_right
# 3785 "data/maps/Ranch/scripts.pory"
	walk_right
# 3785 "data/maps/Ranch/scripts.pory"
	walk_right
# 3785 "data/maps/Ranch/scripts.pory"
	walk_right
# 3785 "data/maps/Ranch/scripts.pory"
	walk_right
# 3785 "data/maps/Ranch/scripts.pory"
	walk_right
# 3785 "data/maps/Ranch/scripts.pory"
	walk_right
# 3786 "data/maps/Ranch/scripts.pory"
	walk_diag_southeast
# 3786 "data/maps/Ranch/scripts.pory"
	walk_diag_southeast
# 3786 "data/maps/Ranch/scripts.pory"
	walk_diag_southeast
# 3786 "data/maps/Ranch/scripts.pory"
	walk_diag_southeast
# 3786 "data/maps/Ranch/scripts.pory"
	walk_diag_southeast
# 3786 "data/maps/Ranch/scripts.pory"
	walk_diag_southeast
# 3786 "data/maps/Ranch/scripts.pory"
	walk_diag_southeast
# 3786 "data/maps/Ranch/scripts.pory"
	walk_diag_southeast
	step_end

# 3789 "data/maps/Ranch/scripts.pory"
FirstOffScreenCam:
# 3790 "data/maps/Ranch/scripts.pory"
	walk_diag_southeast
# 3791 "data/maps/Ranch/scripts.pory"
	walk_faster_down
# 3791 "data/maps/Ranch/scripts.pory"
	walk_faster_down
# 3791 "data/maps/Ranch/scripts.pory"
	walk_faster_down
# 3791 "data/maps/Ranch/scripts.pory"
	walk_faster_down
# 3791 "data/maps/Ranch/scripts.pory"
	walk_faster_down
# 3791 "data/maps/Ranch/scripts.pory"
	walk_faster_down
# 3791 "data/maps/Ranch/scripts.pory"
	walk_faster_down
# 3791 "data/maps/Ranch/scripts.pory"
	walk_faster_down
# 3791 "data/maps/Ranch/scripts.pory"
	walk_faster_down
# 3791 "data/maps/Ranch/scripts.pory"
	walk_faster_down
# 3791 "data/maps/Ranch/scripts.pory"
	walk_faster_down
# 3791 "data/maps/Ranch/scripts.pory"
	walk_faster_down
# 3791 "data/maps/Ranch/scripts.pory"
	walk_faster_down
# 3791 "data/maps/Ranch/scripts.pory"
	walk_faster_down
# 3791 "data/maps/Ranch/scripts.pory"
	walk_faster_down
	step_end

# 3794 "data/maps/Ranch/scripts.pory"
SecondOffScreenCam:
# 3795 "data/maps/Ranch/scripts.pory"
	walk_diag_southwest
# 3795 "data/maps/Ranch/scripts.pory"
	walk_diag_southwest
# 3795 "data/maps/Ranch/scripts.pory"
	walk_diag_southwest
# 3795 "data/maps/Ranch/scripts.pory"
	walk_diag_southwest
# 3795 "data/maps/Ranch/scripts.pory"
	walk_diag_southwest
# 3795 "data/maps/Ranch/scripts.pory"
	walk_diag_southwest
# 3795 "data/maps/Ranch/scripts.pory"
	walk_diag_southwest
# 3795 "data/maps/Ranch/scripts.pory"
	walk_diag_southwest
# 3795 "data/maps/Ranch/scripts.pory"
	walk_diag_southwest
# 3795 "data/maps/Ranch/scripts.pory"
	walk_diag_southwest
# 3795 "data/maps/Ranch/scripts.pory"
	walk_diag_southwest
# 3795 "data/maps/Ranch/scripts.pory"
	walk_diag_southwest
# 3795 "data/maps/Ranch/scripts.pory"
	walk_diag_southwest
# 3795 "data/maps/Ranch/scripts.pory"
	walk_diag_southwest
# 3795 "data/maps/Ranch/scripts.pory"
	walk_diag_southwest
# 3795 "data/maps/Ranch/scripts.pory"
	walk_diag_southwest
# 3796 "data/maps/Ranch/scripts.pory"
	walk_faster_down
# 3796 "data/maps/Ranch/scripts.pory"
	walk_faster_down
# 3796 "data/maps/Ranch/scripts.pory"
	walk_faster_down
	step_end

# 3799 "data/maps/Ranch/scripts.pory"
EatUp:
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
# 3800 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_up
	step_end

# 3803 "data/maps/Ranch/scripts.pory"
EatDown:
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
# 3804 "data/maps/Ranch/scripts.pory"
	walk_in_place_fast_down
	step_end

BadEnding_EventScript::
# 3808 "data/maps/Ranch/scripts.pory"
	lock
# 3809 "data/maps/Ranch/scripts.pory"
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_RANCH_BAD_ENDING
# 3810 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3812 "data/maps/Ranch/scripts.pory"
	fadescreenspeed FADE_FROM_BLACK, 8
# 3813 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3814 "data/maps/Ranch/scripts.pory"
	special SpawnCameraObject
# 3815 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3816 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, RightPan
# 3817 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3818 "data/maps/Ranch/scripts.pory"
	fadescreen FADE_TO_BLACK
# 3819 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3820 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, FirstOffScreenCam
# 3824 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3825 "data/maps/Ranch/scripts.pory"
	delay 15
# 3826 "data/maps/Ranch/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 3827 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3828 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, LeftPan
# 3829 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3830 "data/maps/Ranch/scripts.pory"
	fadescreen FADE_TO_BLACK
# 3831 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3832 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, SecondOffScreenCam
# 3836 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3837 "data/maps/Ranch/scripts.pory"
	delay 15
# 3838 "data/maps/Ranch/scripts.pory"
	fadescreen FADE_FROM_BLACK
# 3839 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3840 "data/maps/Ranch/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraLastMovement
# 3841 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3842 "data/maps/Ranch/scripts.pory"
	delay 30
# 3843 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 3844 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3845 "data/maps/Ranch/scripts.pory"
	delay 15
# 3846 "data/maps/Ranch/scripts.pory"
	msgbox BadEnding_EventScript_Text_0
# 3847 "data/maps/Ranch/scripts.pory"
	closemessage
# 3848 "data/maps/Ranch/scripts.pory"
	delay 15
# 3849 "data/maps/Ranch/scripts.pory"
	applymovement 2, Common_Movement_WalkInPlaceUp
# 3850 "data/maps/Ranch/scripts.pory"
	waitmovement 15
# 3851 "data/maps/Ranch/scripts.pory"
	msgbox BadEnding_EventScript_Text_1
# 3852 "data/maps/Ranch/scripts.pory"
	closemessage
# 3853 "data/maps/Ranch/scripts.pory"
	delay 15
# 3854 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 3855 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3856 "data/maps/Ranch/scripts.pory"
	delay 15
# 3857 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceDown
# 3858 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3859 "data/maps/Ranch/scripts.pory"
	playse SE_PIN
# 3860 "data/maps/Ranch/scripts.pory"
	waitse
# 3861 "data/maps/Ranch/scripts.pory"
	delay 15
# 3862 "data/maps/Ranch/scripts.pory"
	msgbox BadEnding_EventScript_Text_2
# 3863 "data/maps/Ranch/scripts.pory"
	closemessage
# 3864 "data/maps/Ranch/scripts.pory"
	delay 45
# 3865 "data/maps/Ranch/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceUp
# 3866 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3867 "data/maps/Ranch/scripts.pory"
	delay 15
# 3868 "data/maps/Ranch/scripts.pory"
	msgbox BadEnding_EventScript_Text_3
# 3869 "data/maps/Ranch/scripts.pory"
	closemessage
# 3870 "data/maps/Ranch/scripts.pory"
	delay 30
# 3871 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceLeft
# 3872 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3873 "data/maps/Ranch/scripts.pory"
	delay 30
# 3874 "data/maps/Ranch/scripts.pory"
	msgbox BadEnding_EventScript_Text_4
# 3875 "data/maps/Ranch/scripts.pory"
	closemessage
# 3876 "data/maps/Ranch/scripts.pory"
	delay 15
# 3877 "data/maps/Ranch/scripts.pory"
	playse SE_PIN
# 3878 "data/maps/Ranch/scripts.pory"
	waitse
# 3879 "data/maps/Ranch/scripts.pory"
	msgbox BadEnding_EventScript_Text_5
# 3880 "data/maps/Ranch/scripts.pory"
	closemessage
# 3881 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 3882 "data/maps/Ranch/scripts.pory"
	applymovement 2, Common_Movement_FaceRight
# 3883 "data/maps/Ranch/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 3884 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3885 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_ExclamationMark
# 3886 "data/maps/Ranch/scripts.pory"
	applymovement 2, Common_Movement_ExclamationMark
# 3887 "data/maps/Ranch/scripts.pory"
	applymovement 3, Common_Movement_ExclamationMark
# 3888 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3889 "data/maps/Ranch/scripts.pory"
	applymovement 4, BadEnding_EventScript_Movement_0
# 3890 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3891 "data/maps/Ranch/scripts.pory"
	msgbox BadEnding_EventScript_Text_6
# 3892 "data/maps/Ranch/scripts.pory"
	closemessage
# 3893 "data/maps/Ranch/scripts.pory"
	delay 15
# 3894 "data/maps/Ranch/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceLeft
# 3895 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3896 "data/maps/Ranch/scripts.pory"
	delay 30
# 3897 "data/maps/Ranch/scripts.pory"
	applymovement 3, Common_Movement_WalkInPlaceRight
# 3898 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_FaceDown
# 3899 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3900 "data/maps/Ranch/scripts.pory"
	delay 15
# 3901 "data/maps/Ranch/scripts.pory"
	msgbox BadEnding_EventScript_Text_7
# 3902 "data/maps/Ranch/scripts.pory"
	closemessage
# 3903 "data/maps/Ranch/scripts.pory"
	applymovement 3, BadEnding_EventScript_Movement_1
# 3904 "data/maps/Ranch/scripts.pory"
	applymovement 2, BadEnding_EventScript_Movement_1
# 3905 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3906 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_FaceRight
# 3907 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3908 "data/maps/Ranch/scripts.pory"
	delay 15
# 3909 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 3910 "data/maps/Ranch/scripts.pory"
	waitse
# 3911 "data/maps/Ranch/scripts.pory"
	delay 30
# 3912 "data/maps/Ranch/scripts.pory"
	applymovement 4, Common_Movement_WalkInPlaceLeft
# 3913 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3914 "data/maps/Ranch/scripts.pory"
	delay 15
# 3915 "data/maps/Ranch/scripts.pory"
	msgbox BadEnding_EventScript_Text_8
# 3916 "data/maps/Ranch/scripts.pory"
	closemessage
# 3917 "data/maps/Ranch/scripts.pory"
	delay 15
# 3918 "data/maps/Ranch/scripts.pory"
	applymovement 1, Common_Movement_WalkInPlaceRight
# 3919 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3920 "data/maps/Ranch/scripts.pory"
	delay 15
# 3921 "data/maps/Ranch/scripts.pory"
	msgbox BadEnding_EventScript_Text_9
# 3922 "data/maps/Ranch/scripts.pory"
	closemessage
# 3923 "data/maps/Ranch/scripts.pory"
	applymovement 1, BadEnding_EventScript_Movement_2
# 3924 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3925 "data/maps/Ranch/scripts.pory"
	applymovement 1, BadEnding_EventScript_Movement_3
# 3926 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3927 "data/maps/Ranch/scripts.pory"
	applymovement 4, Common_Movement_FaceUp
# 3928 "data/maps/Ranch/scripts.pory"
	applymovement 1, BadEnding_EventScript_Movement_2
# 3929 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3930 "data/maps/Ranch/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 3931 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3932 "data/maps/Ranch/scripts.pory"
	playse SE_EXIT
# 3933 "data/maps/Ranch/scripts.pory"
	waitse
# 3934 "data/maps/Ranch/scripts.pory"
	delay 15
# 3935 "data/maps/Ranch/scripts.pory"
	applymovement 4, FarmerFreakOut
# 3936 "data/maps/Ranch/scripts.pory"
	playse SE_BIKE_HOP
# 3937 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3938 "data/maps/Ranch/scripts.pory"
	applymovement 4, Common_Movement_FaceRight
# 3939 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3940 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_AfterFinalFarmerBattle_Text_2
# 3941 "data/maps/Ranch/scripts.pory"
	closemessage
# 3942 "data/maps/Ranch/scripts.pory"
	applymovement 4, BadEnding_EventScript_Movement_4
# 3943 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 3944 "data/maps/Ranch/scripts.pory"
	fadescreenspeed FADE_TO_BLACK, 6
# 3945 "data/maps/Ranch/scripts.pory"
	delay 30
# 3946 "data/maps/Ranch/scripts.pory"
	fadeoutbgm 0
# 3947 "data/maps/Ranch/scripts.pory"
	callnative StartCredits
# 3948 "data/maps/Ranch/scripts.pory"
	release
	end


Ranch_EventScript_TrampleBattle::
# 3953 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_6, Jerry_Intro, Jerry_Outro
# 3954 "data/maps/Ranch/scripts.pory"
	msgbox PostBattle_Jerry, MSGBOX_AUTOCLOSE
# 3955 "data/maps/Ranch/scripts.pory"
	waitmessage
	end


Ranch_EventScript_BugBattle::
# 3969 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_FREDRICK, Andrew_Intro, Andrew_Outro
# 3970 "data/maps/Ranch/scripts.pory"
	msgbox PostBattle_Andrew, MSGBOX_AUTOCLOSE
# 3971 "data/maps/Ranch/scripts.pory"
	waitmessage
	end


Ranch_EventScript_CacturneBattle::
# 3985 "data/maps/Ranch/scripts.pory"
	trainerbattle_single TRAINER_MATT, Matt_Intro, Matt_Outro
# 3986 "data/maps/Ranch/scripts.pory"
	msgbox PostBattle_Matt, MSGBOX_AUTOCLOSE
# 3987 "data/maps/Ranch/scripts.pory"
	waitmessage
	end


Ranch_EventScript_HayFarmer::
# 4001 "data/maps/Ranch/scripts.pory"
	lock
# 4002 "data/maps/Ranch/scripts.pory"
	faceplayer
# 4003 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_HayFarmer_Text_0
# 4004 "data/maps/Ranch/scripts.pory"
	closemessage
# 4005 "data/maps/Ranch/scripts.pory"
	applymovement 31, Common_Movement_FaceOriginalDirection
# 4006 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 4007 "data/maps/Ranch/scripts.pory"
	release
	end


Ranch_EventScript_OldMan::
# 4012 "data/maps/Ranch/scripts.pory"
	lock
# 4013 "data/maps/Ranch/scripts.pory"
	faceplayer
# 4014 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_OldMan_Text_0
# 4015 "data/maps/Ranch/scripts.pory"
	closemessage
# 4016 "data/maps/Ranch/scripts.pory"
	applymovement 14, Common_Movement_FaceOriginalDirection
# 4017 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 4018 "data/maps/Ranch/scripts.pory"
	release
	end


Ranch_Text_BarnSign::
# 4023 "data/maps/Ranch/scripts.pory"
	lock
# 4024 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_Text_BarnSign_Text_0
# 4025 "data/maps/Ranch/scripts.pory"
	release
	return


Ranch_EventScript_Boy::
# 4029 "data/maps/Ranch/scripts.pory"
	lock
# 4030 "data/maps/Ranch/scripts.pory"
	faceplayer
# 4031 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_Boy_Text_0
# 4032 "data/maps/Ranch/scripts.pory"
	closemessage
# 4033 "data/maps/Ranch/scripts.pory"
	applymovement 48, Common_Movement_FaceOriginalDirection
# 4034 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 4035 "data/maps/Ranch/scripts.pory"
	release
	end


Ranch_EventScript_TruckMan::
# 4040 "data/maps/Ranch/scripts.pory"
	lock
# 4041 "data/maps/Ranch/scripts.pory"
	faceplayer
# 4042 "data/maps/Ranch/scripts.pory"
	msgbox Ranch_EventScript_TruckMan_Text_0
# 4043 "data/maps/Ranch/scripts.pory"
	closemessage
# 4044 "data/maps/Ranch/scripts.pory"
	applymovement 49, Common_Movement_FaceOriginalDirection
# 4045 "data/maps/Ranch/scripts.pory"
	waitmovement 0
# 4046 "data/maps/Ranch/scripts.pory"
	release
	end


# 3757 "data/maps/Ranch/scripts.pory"
GoodEnding_EventScript_Movement_0:
# 3757 "data/maps/Ranch/scripts.pory"
	jump_in_place_down
# 3757 "data/maps/Ranch/scripts.pory"
	jump_in_place_down
# 3757 "data/maps/Ranch/scripts.pory"
	jump_in_place_down
# 3757 "data/maps/Ranch/scripts.pory"
	jump_in_place_down
# 3757 "data/maps/Ranch/scripts.pory"
	jump_in_place_down
	step_end

# 3759 "data/maps/Ranch/scripts.pory"
GoodEnding_EventScript_Movement_1:
# 3759 "data/maps/Ranch/scripts.pory"
	jump_in_place_up
# 3759 "data/maps/Ranch/scripts.pory"
	jump_in_place_up
# 3759 "data/maps/Ranch/scripts.pory"
	jump_in_place_up
	step_end

# 3889 "data/maps/Ranch/scripts.pory"
BadEnding_EventScript_Movement_0:
# 3889 "data/maps/Ranch/scripts.pory"
	walk_left
# 3889 "data/maps/Ranch/scripts.pory"
	walk_left
# 3889 "data/maps/Ranch/scripts.pory"
	walk_left
	step_end

# 3903 "data/maps/Ranch/scripts.pory"
BadEnding_EventScript_Movement_1:
# 3903 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3903 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3903 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3903 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3903 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3903 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3903 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3903 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3903 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3903 "data/maps/Ranch/scripts.pory"
	walk_fast_right
	step_end

# 3923 "data/maps/Ranch/scripts.pory"
BadEnding_EventScript_Movement_2:
# 3923 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3923 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3923 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3923 "data/maps/Ranch/scripts.pory"
	walk_fast_right
	step_end

# 3925 "data/maps/Ranch/scripts.pory"
BadEnding_EventScript_Movement_3:
# 3925 "data/maps/Ranch/scripts.pory"
	walk_fast_right
# 3925 "data/maps/Ranch/scripts.pory"
	walk_fast_right
	step_end

# 3942 "data/maps/Ranch/scripts.pory"
BadEnding_EventScript_Movement_4:
# 3942 "data/maps/Ranch/scripts.pory"
	walk_faster_right
# 3942 "data/maps/Ranch/scripts.pory"
	walk_faster_right
# 3942 "data/maps/Ranch/scripts.pory"
	walk_faster_right
# 3942 "data/maps/Ranch/scripts.pory"
	walk_faster_right
	step_end

Ranch_EventScript_EnterTop_Text_0:
# 125 "data/maps/Ranch/scripts.pory"
	.string "The Absol is sniffing at you urgently...$"

Ranch_EventScript_EnterTop_Text_1:
# 135 "data/maps/Ranch/scripts.pory"
	.string "It is insistent on joining you!$"

Ranch_EventScript_ThirstyBoy_Text_0:
# 368 "data/maps/Ranch/scripts.pory"
	.string "Water...\n"
	.string "Do you have water?\p"
	.string "I haven't had a drink in ages...$"

Ranch_EventScript_FarmerSpeechTop_Text_0:
# 386 "data/maps/Ranch/scripts.pory"
	.string "Ahem, excuse me, everybody.$"

Ranch_EventScript_FarmerSpeechTop_Text_1:
# 401 "data/maps/Ranch/scripts.pory"
	.string "Erm... I know today was supposed to be\n"
	.string "our annual Harvest Festival.$"

Ranch_EventScript_FarmerSpeechTop_Text_2:
# 408 "data/maps/Ranch/scripts.pory"
	.string "A day to celebrate the work we put in\n"
	.string "all year, with dancing, singing, and, of\l"
	.string "course, our feast.$"

Ranch_EventScript_FarmerSpeechTop_Text_3:
# 414 "data/maps/Ranch/scripts.pory"
	.string "Unfortunately, the ceremony has been\n"
	.string "cancelled this year.$"

Ranch_EventScript_FarmerSpeechTop_Text_4:
# 445 "data/maps/Ranch/scripts.pory"
	.string "Believe me, I am just as disappointed as\n"
	.string "the rest of you.\p"
	.string "The truth is, our farm has not had\n"
	.string "access to water over the past year.\p"
	.string "No rain, the river hasn't flowed in\n"
	.string "years, and our wells appear to have\l"
	.string "dried up.$"

Ranch_EventScript_FarmerSpeechTop_Text_5:
# 452 "data/maps/Ranch/scripts.pory"
	.string "If things don't change, this might be\n"
	.string "our last time gathering like this...\p"
	.string "I'm sorry I failed you.$"

Ranch_EventScript_FarmerSpeechTop_Text_6:
# 457 "data/maps/Ranch/scripts.pory"
	.string "I hear this farm has been experiencing\n"
	.string "a drought?$"

Ranch_EventScript_FarmerSpeechTop_Text_7:
# 483 "data/maps/Ranch/scripts.pory"
	.string "My best scientists and engineers have\n"
	.string "been studying the hydrology of this\l"
	.string "area, and we know how to bring back\l"
	.string "prosperity.\p"
	.string "Farmers, if you implement our\n"
	.string "technological solutions, your harvest\l"
	.string "will be more abundant than ever next\l"
	.string "year.$"

Ranch_EventScript_FarmerSpeechTop_Text_8:
# 494 "data/maps/Ranch/scripts.pory"
	.string "Your technology will never work!$"

Ranch_EventScript_FarmerSpeechTop_Text_9:
# 508 "data/maps/Ranch/scripts.pory"
	.string "We've heard what you're planning!\n"
	.string "Your ideas will just make matters worse!$"

Ranch_EventScript_FarmerSpeechTop_Text_10:
# 520 "data/maps/Ranch/scripts.pory"
	.string "I assure you, my solutions are sound.\n"
	.string "However, if you are so concerned, I\l"
	.string "implore you to look at who has joined us\l"
	.string "today.$"

Ranch_EventScript_FarmerSpeechTop_Text_11:
# 526 "data/maps/Ranch/scripts.pory"
	.string "As I'm sure you are aware, Absol has\n"
	.string "foresight of disasters, including those\l"
	.string "plaguing this region. This particular\l"
	.string "Absol seems to be united with this\l"
	.string "trainer.\p"
	.string "Why don't we take their input into\n"
	.string "account?$"

Ranch_EventScript_FarmerSpeechTop_Text_12:
# 533 "data/maps/Ranch/scripts.pory"
	.string "I will tell all the farmers of my plans.\n"
	.string "Of course, they may consult with the\l"
	.string "Absol and this trainer, as well as with\l"
	.string "you hooligans.$"

Ranch_EventScript_FarmerSpeechTop_Text_13:
# 538 "data/maps/Ranch/scripts.pory"
	.string "You may take my help, or leave it. The\n"
	.string "choice is yours.$"

Ranch_EventScript_FarmerBattle_Text_0:
# 1014 "data/maps/Ranch/scripts.pory"
	.string "This kind gentleman spoke to my farmers\n"
	.string "about his technology.\p"
	.string "Sounds like they're being harrassed by\n"
	.string "these protestors. Could you help them\l"
	.string "out?$"

Ranch_EventScript_FarmerBattle_Text_1:
# 1016 "data/maps/Ranch/scripts.pory"
	.string "I saw one of those kids in orange head\n"
	.string "west. Maybe check the barns?$"

Ranch_EventScript_FarmerBattle_Text_2:
# 1022 "data/maps/Ranch/scripts.pory"
	.string "One of my farmers is having an issue by\n"
	.string "the well.$"

Ranch_EventScript_FarmerBattle_Text_3:
# 1028 "data/maps/Ranch/scripts.pory"
	.string "I heard something happening in the\n"
	.string "fields. Can you take a look?$"

Ranch_EventScript_FarmerBattle_Text_4:
# 1034 "data/maps/Ranch/scripts.pory"
	.string "I think I saw a protestor head to the\n"
	.string "northeast, near where we used to farm.$"

Ranch_EventScript_FarmerBattle_Text_5:
# 1040 "data/maps/Ranch/scripts.pory"
	.string "A few scientist were heading to the\n"
	.string "riverbed. Maybe something is happening\l"
	.string "there?$"

Ranch_EventScript_Man1_Text_0:
# 1133 "data/maps/Ranch/scripts.pory"
	.string "I was excited for our annual feast.\n"
	.string "However, I should not have expected\l"
	.string "much, after this past year.$"

Ranch_EventScript_Man1_Text_1:
# 1136 "data/maps/Ranch/scripts.pory"
	.string "I sure hope we have a better feast next\n"
	.string "year...$"

Ranch_EventScript_OldWoman1_Text_0:
# 1149 "data/maps/Ranch/scripts.pory"
	.string "When I was a young woman, we always had\n"
	.string "a full table after harvest!\p"
	.string "What happened?$"

Ranch_EventScript_OldWoman1_Text_1:
# 1152 "data/maps/Ranch/scripts.pory"
	.string "I'm not changing my ways like those\n"
	.string "children dressed in orange want.\p"
	.string "I like what that other gentleman was\n"
	.string "suggesting, though.$"

Ranch_EventScript_Woman1_Text_0:
# 1165 "data/maps/Ranch/scripts.pory"
	.string "We have to be grateful for what we\n"
	.string "have. Many have it worse than we do.$"

Ranch_EventScript_Woman1_Text_1:
# 1168 "data/maps/Ranch/scripts.pory"
	.string "I have to keep a smile on my face for my\n"
	.string "daughter.\p"
	.string "Whether we choose to make scientific\n"
	.string "improvements or alter our lifestyle, I\l"
	.string "just hope we can survive.$"

Ranch_EventScript_Protestor1_Text_0:
# 1182 "data/maps/Ranch/scripts.pory"
	.string "You're right, we have to put a stop to\n"
	.string "this...$"

Ranch_EventScript_Protestor1_Text_1:
# 1191 "data/maps/Ranch/scripts.pory"
	.string "Are you eavesdropping?$"

Ranch_EventScript_Protestor2_Text_0:
# 1204 "data/maps/Ranch/scripts.pory"
	.string "I just can't stand it...$"

Ranch_EventScript_Protestor2_Text_1:
# 1213 "data/maps/Ranch/scripts.pory"
	.string "Hey, mind your business!$"

Ranch_EventScript_LittleBoy1_Text_0:
# 1224 "data/maps/Ranch/scripts.pory"
	.string "What do they mean we don't have water?!$"

Ranch_EventScript_LittleGirl1_Text_0:
# 1235 "data/maps/Ranch/scripts.pory"
	.string "Change is scary!$"

Ranch_EventScript_Nurse_Text_0:
# 1247 "data/maps/Ranch/scripts.pory"
	.string "Would you like me to heal your Pokémon?$"

Ranch_EventScript_Nurse_Text_1:
# 1252 "data/maps/Ranch/scripts.pory"
	.string "Let me know if you need my services\n"
	.string "again.$"

Ranch_EventScript_Nurse_Text_2:
# 1256 "data/maps/Ranch/scripts.pory"
	.string "Let me know if you need my services.$"

Ranch_EventScript_Nurse_Text_3:
# 1260 "data/maps/Ranch/scripts.pory"
	.string "Sigh... I was appointed to this post at\n"
	.string "the ranch.\p"
	.string "I miss my PokéCenter, the farmers are...\n"
	.string "smelly.\p"
	.string "Anyway...\p"
	.string "Would you like me to heal your Pokémon?$"

Ranch_EventScript_Gentleman_Text_0:
# 1285 "data/maps/Ranch/scripts.pory"
	.string "I spoke with the farmers, and they are\n"
	.string "enthused by my proposal.\p"
	.string "My technology will bring water back to\n"
	.string "this land, and they can continue to\l"
	.string "farm as they have for generations!$"

Ranch_EventScript_LiberateBattleProtestor_Text_0:
# 1299 "data/maps/Ranch/scripts.pory"
	.string "I don't care what your reason is! You\n"
	.string "can't just go around stealing my\l"
	.string "chickens!$"

Ranch_EventScript_LiberateBattleProtestor_Text_1:
# 1304 "data/maps/Ranch/scripts.pory"
	.string "Those are sentient beings who are\n"
	.string "crammed in a barn all day! They deserve\l"
	.string "to be free!$"

Ranch_EventScript_LiberateBattleProtestor_Text_2:
# 1310 "data/maps/Ranch/scripts.pory"
	.string "We can't free them, that's crazy! If we\n"
	.string "did, what would we eat?$"

Ranch_EventScript_LiberateBattleProtestor_Text_3:
# 1315 "data/maps/Ranch/scripts.pory"
	.string "You could grow different crops! You\n"
	.string "aren't eating that hay, you would save\l"
	.string "so much water if you grew plants that\l"
	.string "you could eat, instead of wasting it on\l"
	.string "animal farming.$"

Ranch_EventScript_LiberateBattleProtestor_Text_4:
# 1319 "data/maps/Ranch/scripts.pory"
	.string "What do you think? Should we liberate\n"
	.string "the animals, or continue to eat them?$"

Ranch_EventScript_LiberateBattleProtestor_Text_5:
# 1320 "data/maps/Ranch/scripts.pory"
	.string "Liberate!$"

Ranch_EventScript_LiberateBattleProtestor_Text_6:
# 1320 "data/maps/Ranch/scripts.pory"
	.string "Eat!$"

Ranch_EventScript_LiberateBattleProtestor_Text_7:
# 1328 "data/maps/Ranch/scripts.pory"
	.string "Dadgummit! I can't believe you agree\n"
	.string "with this city slicker!\p"
	.string "This will end our lifestyle as we know\n"
	.string "it!$"

Ranch_EventScript_LiberateBattleProtestor_Text_8:
# 1358 "data/maps/Ranch/scripts.pory"
	.string "I won't let you do this!$"

Ranch_EventScript_LiberateBattleProtestor_Text_9:
# 1358 "data/maps/Ranch/scripts.pory"
	.string "Gah! How could you?$"

Ranch_EventScript_LiberateBattleProtestor_Text_10:
# 1367 "data/maps/Ranch/scripts.pory"
	.string "Are you crazy? How can you let this\n"
	.string "atrocity continue?$"

Ranch_EventScript_LiberateBattleProtestor_Text_11:
# 1397 "data/maps/Ranch/scripts.pory"
	.string "This can't happen!$"

Ranch_EventScript_LiberateBattleProtestor_Text_12:
# 1397 "data/maps/Ranch/scripts.pory"
	.string "Have you no morals?$"

Ranch_EventScript_LiberateBattleProtestor_Text_13:
# 1405 "data/maps/Ranch/scripts.pory"
	.string "Thank you for siding with me. You have\n"
	.string "saved countless animals from a life of\l"
	.string "misery.\p"
	.string "Additionally, the farmers can use their\n"
	.string "precious water on food they can eat.\p"
	.string "This is better for everyone.$"

Ranch_EventScript_LiberateBattleFarmer_Text_0:
# 1524 "data/maps/Ranch/scripts.pory"
	.string "Thank you for siding with me. Our ranch\n"
	.string "will not starve, and we can continue to\l"
	.string "farm like we have for generations.$"

Ranch_EventScript_FirstFarmerLeave_Text_0:
# 1537 "data/maps/Ranch/scripts.pory"
	.string "...\p"
	.string "Without our animals, we will starve.$"

Ranch_EventScript_FirstFarmerLeave_Text_1:
# 1545 "data/maps/Ranch/scripts.pory"
	.string "This is all your fault!$"

Ranch_EventScript_FirstProtesterLeave_Text_0:
# 1582 "data/maps/Ranch/scripts.pory"
	.string "...\p"
	.string "These animals will continue to suffer,\n"
	.string "and water will continue to be wasted.$"

Ranch_EventScript_BlockingFarmer1_Text_0:
# 1662 "data/maps/Ranch/scripts.pory"
	.string "It's been months since it last rained.\n"
	.string "I'm not sure how much longer we can\l"
	.string "last.$"

Ranch_EventScript_BlockingFarmer2_Text_0:
# 1673 "data/maps/Ranch/scripts.pory"
	.string "We've been trucking in water for our\n"
	.string "last crop of hay. We can't afford to buy\l"
	.string "more for next year.$"

Ranch_EventScript_WellEncounterFarmer_Text_0:
# 1687 "data/maps/Ranch/scripts.pory"
	.string "Your practices are sucking this ranch\n"
	.string "dry. You're already running out of\l"
	.string "water, you can't just keep drilling for\l"
	.string "more!$"

Ranch_EventScript_WellEncounterFarmer_Text_1:
# 1692 "data/maps/Ranch/scripts.pory"
	.string "This well has sustained us for as long\n"
	.string "as I've been here. I know there's more\l"
	.string "water down there, we just have to get\l"
	.string "it!$"

Ranch_EventScript_WellEncounterFarmer_Text_2:
# 1698 "data/maps/Ranch/scripts.pory"
	.string "Water is pumped out thousands of times\n"
	.string "faster than it replenishes. Eventually\l"
	.string "you'll run out!\p"
	.string "What then?$"

Ranch_EventScript_WellEncounterFarmer_Text_3:
# 1703 "data/maps/Ranch/scripts.pory"
	.string "That's a problem for the future! For\n"
	.string "now, we need this water.$"

Ranch_EventScript_WellEncounterFarmer_Text_4:
# 1707 "data/maps/Ranch/scripts.pory"
	.string "How do you see it? Should we shut down\n"
	.string "the well, or drill deeper?$"

Ranch_EventScript_WellEncounterFarmer_Text_5:
# 1708 "data/maps/Ranch/scripts.pory"
	.string "Stop the well!$"

Ranch_EventScript_WellEncounterFarmer_Text_6:
# 1708 "data/maps/Ranch/scripts.pory"
	.string "Keep drilling!$"

Ranch_EventScript_WellEncounterFarmer_Text_7:
# 1715 "data/maps/Ranch/scripts.pory"
	.string "How do you suppose we water our crops\n"
	.string "without our well?$"

Ranch_EventScript_WellEncounterFarmer_Text_8:
# 1730 "data/maps/Ranch/scripts.pory"
	.string "We will keep using this well!$"

Ranch_EventScript_WellEncounterFarmer_Text_9:
# 1730 "data/maps/Ranch/scripts.pory"
	.string "Do you want us to starve?$"

Ranch_EventScript_WellEncounterFarmer_Text_10:
# 1738 "data/maps/Ranch/scripts.pory"
	.string "I'm trying to help you! You will draw all\n"
	.string "of the groundwater out of the earth!$"

Ranch_EventScript_WellEncounterFarmer_Text_11:
# 1755 "data/maps/Ranch/scripts.pory"
	.string "Why do you support this?$"

Ranch_EventScript_WellEncounterFarmer_Text_12:
# 1755 "data/maps/Ranch/scripts.pory"
	.string "Did you listen to me?$"

Ranch_EventScript_WellEncounterFarmer_Text_13:
# 1762 "data/maps/Ranch/scripts.pory"
	.string "Thanks for the hand. I know the well is\n"
	.string "running low, but we'll just drill deeper\l"
	.string "and get more water.$"

Ranch_EventScript_WellEncounterProtestor_Text_0:
# 1850 "data/maps/Ranch/scripts.pory"
	.string "This was the right decision. If the\n"
	.string "farmers continued to pump at\l"
	.string "unsustainable rates, this ranch would\l"
	.string "continue to sink, and they would run\l"
	.string "out of water.$"

Ranch_EventScript_SecondFarmerLeave_Text_0:
# 1863 "data/maps/Ranch/scripts.pory"
	.string "Don't you get it? This is our only\n"
	.string "source of water!$"

Ranch_EventScript_SecondFarmerLeave_Text_1:
# 1871 "data/maps/Ranch/scripts.pory"
	.string "We're all going to die!$"

Ranch_EventScript_SecondProtestorLeave_Text_0:
# 1907 "data/maps/Ranch/scripts.pory"
	.string "Well, I guess you got your wish.$"

Ranch_EventScript_SecondProtestorLeave_Text_1:
# 1915 "data/maps/Ranch/scripts.pory"
	.string "This ranch will not last.$"

Ranch_EventScript_NativeEncounterFarmer_Text_0:
# 1977 "data/maps/Ranch/scripts.pory"
	.string "We've farmed hay here for decades. You\n"
	.string "kids aren't gonna change that now!$"

Ranch_EventScript_NativeEncounterFarmer_Text_1:
# 1982 "data/maps/Ranch/scripts.pory"
	.string "I understand, but your practices aren't\n"
	.string "sustainable. There are other methods\l"
	.string "that have worked here for millenia that\l"
	.string "don't require irrigation!$"

Ranch_EventScript_NativeEncounterFarmer_Text_2:
# 1988 "data/maps/Ranch/scripts.pory"
	.string "That's crazy talk. Who could grow\n"
	.string "without water?$"

Ranch_EventScript_NativeEncounterFarmer_Text_3:
# 1993 "data/maps/Ranch/scripts.pory"
	.string "The native people who have been here\n"
	.string "long before your people. Why don't you\l"
	.string "give their practices a shot?$"

Ranch_EventScript_NativeEncounterFarmer_Text_4:
# 1997 "data/maps/Ranch/scripts.pory"
	.string "What makes sense to you? Traditional\n"
	.string "farming, or irrigated farming?$"

Ranch_EventScript_NativeEncounterFarmer_Text_5:
# 1998 "data/maps/Ranch/scripts.pory"
	.string "Traditional!$"

Ranch_EventScript_NativeEncounterFarmer_Text_6:
# 1998 "data/maps/Ranch/scripts.pory"
	.string "Irrigated!$"

Ranch_EventScript_NativeEncounterFarmer_Text_7:
# 2005 "data/maps/Ranch/scripts.pory"
	.string "Why are you trying to make us change?$"

Ranch_EventScript_NativeEncounterFarmer_Text_8:
# 2025 "data/maps/Ranch/scripts.pory"
	.string "We know what works!$"

Ranch_EventScript_NativeEncounterFarmer_Text_9:
# 2025 "data/maps/Ranch/scripts.pory"
	.string "How are we supposed to farm without\nwatering our crops?$"

Ranch_EventScript_NativeEncounterFarmer_Text_10:
# 2033 "data/maps/Ranch/scripts.pory"
	.string "I know it seems hard to believe, but\n"
	.string "people have thrived for thousands of\l"
	.string "years without irrigation!$"

Ranch_EventScript_NativeEncounterFarmer_Text_11:
# 2053 "data/maps/Ranch/scripts.pory"
	.string "Why can't you give it a shot?$"

Ranch_EventScript_NativeEncounterFarmer_Text_12:
# 2053 "data/maps/Ranch/scripts.pory"
	.string "Don't you see the current method \ndoesn't work?$"

Ranch_EventScript_NativeEncounterFarmer_Text_13:
# 2060 "data/maps/Ranch/scripts.pory"
	.string "What was that crazy guy on about,\n"
	.string "anyway? Crops without water?\p"
	.string "These city folk think they know\n"
	.string "everything.$"

Ranch_EventScript_NativeEncounterProtestor_Text_0:
# 2156 "data/maps/Ranch/scripts.pory"
	.string "Thank you for trusting me. Native\n"
	.string "people have demonstrated a\l"
	.string "sustainable practice, and we should\l"
	.string "follow them.$"

Ranch_EventScript_ThirdFarmerLeave_Text_0:
# 2169 "data/maps/Ranch/scripts.pory"
	.string "I truly don't understand. How have\n"
	.string "people been growing crops without\l"
	.string "irrigation?$"

Ranch_EventScript_ThirdFarmerLeave_Text_1:
# 2174 "data/maps/Ranch/scripts.pory"
	.string "It simply won't work!$"

Ranch_EventScript_ThirdProtestorLeave_Text_0:
# 2208 "data/maps/Ranch/scripts.pory"
	.string "I just thought you would hear me out.$"

Ranch_EventScript_ThirdProtestorLeave_Text_1:
# 2216 "data/maps/Ranch/scripts.pory"
	.string "These practices can not last.$"

Ranch_EventScript_DroughtResistantEncounterFarmer_Text_0:
# 2282 "data/maps/Ranch/scripts.pory"
	.string "This hay represents our entire\n"
	.string "economy! Who cares how much water it\l"
	.string "uses, we ain't changing!$"

Ranch_EventScript_DroughtResistantEncounterFarmer_Text_1:
# 2287 "data/maps/Ranch/scripts.pory"
	.string "You can't even eat it! You ship all this\n"
	.string "hay overseas anyways, it's like you're\l"
	.string "throwing away your last bits of water.\l"
	.string "Why not grow food for yourselves that\l"
	.string "doesn't demand as much water?$"

Ranch_EventScript_DroughtResistantEncounterFarmer_Text_2:
# 2293 "data/maps/Ranch/scripts.pory"
	.string "You're not listening! What about the\n"
	.string "economy?$"

Ranch_EventScript_DroughtResistantEncounterFarmer_Text_3:
# 2298 "data/maps/Ranch/scripts.pory"
	.string "Isn't your life more important than\n"
	.string "money?$"

Ranch_EventScript_DroughtResistantEncounterFarmer_Text_4:
# 2302 "data/maps/Ranch/scripts.pory"
	.string "What should we grow?\n"
	.string "Drought-resistant food crops, or hay?$"

Ranch_EventScript_DroughtResistantEncounterFarmer_Text_5:
# 2303 "data/maps/Ranch/scripts.pory"
	.string "Drought-resistant!$"

Ranch_EventScript_DroughtResistantEncounterFarmer_Text_6:
# 2303 "data/maps/Ranch/scripts.pory"
	.string "Hay!$"

Ranch_EventScript_DroughtResistantEncounterFarmer_Text_7:
# 2310 "data/maps/Ranch/scripts.pory"
	.string "All I know is hay! I can't change to your\n"
	.string "weird plants!$"

Ranch_EventScript_DroughtResistantEncounterFarmer_Text_8:
# 2330 "data/maps/Ranch/scripts.pory"
	.string "Just leave us be!$"

Ranch_EventScript_DroughtResistantEncounterFarmer_Text_9:
# 2330 "data/maps/Ranch/scripts.pory"
	.string "How are we supposed to make any \nmoney?$"

Ranch_EventScript_DroughtResistantEncounterFarmer_Text_10:
# 2338 "data/maps/Ranch/scripts.pory"
	.string "Isn't eating more important than your\n"
	.string "economy? You're so short-sighted!$"

Ranch_EventScript_DroughtResistantEncounterFarmer_Text_11:
# 2358 "data/maps/Ranch/scripts.pory"
	.string "Stop growing hay!$"

Ranch_EventScript_DroughtResistantEncounterFarmer_Text_12:
# 2358 "data/maps/Ranch/scripts.pory"
	.string "Why should we continue to waste water?$"

Ranch_EventScript_DroughtResistantEncounterFarmer_Text_13:
# 2365 "data/maps/Ranch/scripts.pory"
	.string "I don't understand why these\n"
	.string "protestors want us to change our ways.\l"
	.string "This is the way we've always done things\l"
	.string "around here, they can't just expect us\l"
	.string "to learn a new way of life!$"

Ranch_EventScript_DroughtResistantEncounterProtestor_Text_0:
# 2461 "data/maps/Ranch/scripts.pory"
	.string "No more sending precious water\n"
	.string "overseas. Growing native food crops\l"
	.string "will guarantee a sustainable food\l"
	.string "source for years to come.$"

Ranch_EventScript_FourthFarmerLeave_Text_0:
# 2474 "data/maps/Ranch/scripts.pory"
	.string "Our ranch will go into ruin! Without hay,\n"
	.string "what can we export?$"

Ranch_EventScript_FourthFarmerLeave_Text_1:
# 2479 "data/maps/Ranch/scripts.pory"
	.string "We'll go broke!$"

Ranch_EventScript_FourthProtestorLeave_Text_0:
# 2513 "data/maps/Ranch/scripts.pory"
	.string "You can sustainably grow food here.$"

Ranch_EventScript_FourthProtestorLeave_Text_1:
# 2521 "data/maps/Ranch/scripts.pory"
	.string "Why not give it a chance?$"

Ranch_EventScript_SoilDepletionEncounterFarmer_Text_0:
# 2577 "data/maps/Ranch/scripts.pory"
	.string "Don't you wonder why this area has\n"
	.string "become a desert? Repeatedly growing\l"
	.string "hay has depleted the soil of all the\l"
	.string "nutrients!$"

Ranch_EventScript_SoilDepletionEncounterFarmer_Text_1:
# 2582 "data/maps/Ranch/scripts.pory"
	.string "What are we supposed to do about that?\n"
	.string "We have to grow something!$"

Ranch_EventScript_SoilDepletionEncounterFarmer_Text_2:
# 2588 "data/maps/Ranch/scripts.pory"
	.string "Some plants can add nutrients to the\n"
	.string "soil, and if you have a diverse\l"
	.string "selection of crops, you'll have\l"
	.string "healthier soil.\p"
	.string "It won't all blow away in the wind, too.$"

Ranch_EventScript_SoilDepletionEncounterFarmer_Text_3:
# 2593 "data/maps/Ranch/scripts.pory"
	.string "Don't lecture me! Why do you think you\n"
	.string "know more about soil health than I do?$"

Ranch_EventScript_SoilDepletionEncounterFarmer_Text_4:
# 2597 "data/maps/Ranch/scripts.pory"
	.string "We need to grow something! Should we\n"
	.string "diversify, or keep growing hay?$"

Ranch_EventScript_SoilDepletionEncounterFarmer_Text_5:
# 2598 "data/maps/Ranch/scripts.pory"
	.string "Diversify!$"

Ranch_EventScript_SoilDepletionEncounterFarmer_Text_6:
# 2607 "data/maps/Ranch/scripts.pory"
	.string "What would we even diversify with? All\n"
	.string "I've ever grown is hay!$"

Ranch_EventScript_SoilDepletionEncounterFarmer_Text_7:
# 2627 "data/maps/Ranch/scripts.pory"
	.string "I can't grow anything else!$"

Ranch_EventScript_SoilDepletionEncounterFarmer_Text_8:
# 2627 "data/maps/Ranch/scripts.pory"
	.string "How am I supposed to learn anything\nelse?$"

Ranch_EventScript_SoilDepletionEncounterFarmer_Text_9:
# 2635 "data/maps/Ranch/scripts.pory"
	.string "This soil is already unusable, the rest\n"
	.string "of your farmland will soon be desert\l"
	.string "too!$"

Ranch_EventScript_SoilDepletionEncounterFarmer_Text_10:
# 2655 "data/maps/Ranch/scripts.pory"
	.string "We need to grow other crops!$"

Ranch_EventScript_SoilDepletionEncounterFarmer_Text_11:
# 2655 "data/maps/Ranch/scripts.pory"
	.string "Everything is going to get so much \nworse.$"

Ranch_EventScript_SoilDepletionEncounterFarmer_Text_12:
# 2662 "data/maps/Ranch/scripts.pory"
	.string "Thanks for not forcing us to change our\n"
	.string "ways.$"

Ranch_EventScript_SoilDepletionEncounterProtestor_Text_0:
# 2760 "data/maps/Ranch/scripts.pory"
	.string "By growing other plants, the soil will\n"
	.string "naturally get healthier.\p"
	.string "Soon, these dusty conditions will cease\n"
	.string "to exist, even without the addition of\l"
	.string "water.$"

Ranch_EventScript_FifthFarmerLeave_Text_0:
# 2773 "data/maps/Ranch/scripts.pory"
	.string "The only thing us farmers know is hay.\n"
	.string "Asking us to grow anything else is like\l"
	.string "asking us to learn a new language.$"

Ranch_EventScript_FifthFarmerLeave_Text_1:
# 2778 "data/maps/Ranch/scripts.pory"
	.string "It just won't happen.$"

Ranch_EventScript_FifthProtestorLeave_Text_0:
# 2812 "data/maps/Ranch/scripts.pory"
	.string "It hurts to see the landscape turn to\n"
	.string "this.$"

Ranch_EventScript_FifthProtestorLeave_Text_1:
# 2820 "data/maps/Ranch/scripts.pory"
	.string "You are the reason this ranch has\n"
	.string "turned into a desert.$"

Ranch_EventScript_PesticideEncounterFarmer_Text_0:
# 2876 "data/maps/Ranch/scripts.pory"
	.string "I understand the riverbed has run dry\n"
	.string "and there's less risk of water\l"
	.string "contamination, but you can't recommend\l"
	.string "these pesticides to the farmers any\l"
	.string "more!\p"
	.string "You're slowly killing entire ecosystems!$"

Ranch_EventScript_PesticideEncounterFarmer_Text_1:
# 2881 "data/maps/Ranch/scripts.pory"
	.string "The farmers need to protect their\n"
	.string "plants from Bug-Type Pokémon. How else\l"
	.string "do you recommend they do so?$"

Ranch_EventScript_PesticideEncounterFarmer_Text_2:
# 2887 "data/maps/Ranch/scripts.pory"
	.string "Encouraging the presence of native\n"
	.string "predators, like local Flying-Type\l"
	.string "Pokémon, can help deal with the\l"
	.string "problems.\p"
	.string "In any case, spreading carcinogens on\n"
	.string "their fields is not good for anyone's\l"
	.string "health.$"

Ranch_EventScript_PesticideEncounterFarmer_Text_3:
# 2892 "data/maps/Ranch/scripts.pory"
	.string "Natural predators? What are you\n"
	.string "talking about?\p"
	.string "We have developed a potent solution\n"
	.string "for this issue. Farmers would be fools\l"
	.string "not to use it.$"

Ranch_EventScript_PesticideEncounterFarmer_Text_4:
# 2896 "data/maps/Ranch/scripts.pory"
	.string "How should pests be dealt with? Natural\n"
	.string "solutions, or pesticides?$"

Ranch_EventScript_PesticideEncounterFarmer_Text_5:
# 2897 "data/maps/Ranch/scripts.pory"
	.string "Natural!$"

Ranch_EventScript_PesticideEncounterFarmer_Text_6:
# 2897 "data/maps/Ranch/scripts.pory"
	.string "Pesticides!$"

Ranch_EventScript_PesticideEncounterFarmer_Text_7:
# 2906 "data/maps/Ranch/scripts.pory"
	.string "Farmers have always had to deal with\n"
	.string "issues when it comes to nature.\p"
	.string "Using our technology can solve those\n"
	.string "problems!$"

Ranch_EventScript_PesticideEncounterFarmer_Text_8:
# 2918 "data/maps/Ranch/scripts.pory"
	.string "We have to use the best tools science\nhas to offer!$"

Ranch_EventScript_PesticideEncounterFarmer_Text_9:
# 2918 "data/maps/Ranch/scripts.pory"
	.string "Why wouldn't we use technology?$"

Ranch_EventScript_PesticideEncounterFarmer_Text_10:
# 2928 "data/maps/Ranch/scripts.pory"
	.string "You are spreading death! Groundwater,\n"
	.string "air, soil, everything is being\l"
	.string "contaminated!$"

Ranch_EventScript_PesticideEncounterFarmer_Text_11:
# 2940 "data/maps/Ranch/scripts.pory"
	.string "I can't stand by and let this happen!$"

Ranch_EventScript_PesticideEncounterFarmer_Text_12:
# 2940 "data/maps/Ranch/scripts.pory"
	.string "You are killing the planet.$"

Ranch_EventScript_PesticideEncounterFarmer_Text_13:
# 2947 "data/maps/Ranch/scripts.pory"
	.string "We need pesticides to ensure a healthy\n"
	.string "harvest. Thank you for seeing reason.$"

Ranch_EventScript_PesticideEncounterProtestor_Text_0:
# 3031 "data/maps/Ranch/scripts.pory"
	.string "The chemicals that have already been\n"
	.string "applied will persist for centuries.\p"
	.string "However, stopping now will reduce the\n"
	.string "risk of cancer, as well as slow the\l"
	.string "killing of ecosystems. This had to be\l"
	.string "done.$"

Ranch_EventScript_SixthFarmerLeave_Text_0:
# 3044 "data/maps/Ranch/scripts.pory"
	.string "Pests will have free rein over any crops\n"
	.string "the farmers attempt to plant.$"

Ranch_EventScript_SixthFarmerLeave_Text_1:
# 3049 "data/maps/Ranch/scripts.pory"
	.string "Nothing will thrive.$"

Ranch_EventScript_SixthProtestorLeave_Text_0:
# 3085 "data/maps/Ranch/scripts.pory"
	.string "I thought these chemicals would have\n"
	.string "been outlawed decades ago.$"

Ranch_EventScript_SixthProtestorLeave_Text_1:
# 3093 "data/maps/Ranch/scripts.pory"
	.string "How can you let this happen?$"

Ranch_EventScript_FertilizerEncounterFarmer_Text_0:
# 3145 "data/maps/Ranch/scripts.pory"
	.string "Chemical fertilizers greatly increases\n"
	.string "the agricultural potential of a plot of\l"
	.string "land.\p"
	.string "It would be silly not to use it!$"

Ranch_EventScript_FertilizerEncounterFarmer_Text_1:
# 3150 "data/maps/Ranch/scripts.pory"
	.string "Maybe so, but they also pollute water,\n"
	.string "air, and soil. They can also cause\l"
	.string "ecological disasters, like algal blooms.\l"
	.string "We can use alternatives!$"

Ranch_EventScript_FertilizerEncounterFarmer_Text_2:
# 3156 "data/maps/Ranch/scripts.pory"
	.string "Oh, really? What alternatives do you\n"
	.string "propose?$"

Ranch_EventScript_FertilizerEncounterFarmer_Text_3:
# 3161 "data/maps/Ranch/scripts.pory"
	.string "There are natural soil amendments we\n"
	.string "can use, like compost. If other\l"
	.string "sustainable practices are used, we\l"
	.string "won't need fertilizers at all.$"

Ranch_EventScript_FertilizerEncounterFarmer_Text_4:
# 3165 "data/maps/Ranch/scripts.pory"
	.string "What do you think we should use?\n"
	.string "Natural solutions, or fertilizers?$"

Ranch_EventScript_FertilizerEncounterFarmer_Text_5:
# 3166 "data/maps/Ranch/scripts.pory"
	.string "Fertilizers!$"

Ranch_EventScript_FertilizerEncounterFarmer_Text_6:
# 3173 "data/maps/Ranch/scripts.pory"
	.string "We have developed solutions for our\n"
	.string "world's greatest problems. They must be\l"
	.string "used!$"

Ranch_EventScript_FertilizerEncounterFarmer_Text_7:
# 3185 "data/maps/Ranch/scripts.pory"
	.string "I will fight for science!$"

Ranch_EventScript_FertilizerEncounterFarmer_Text_8:
# 3185 "data/maps/Ranch/scripts.pory"
	.string "Chemicals cause no harm.$"

Ranch_EventScript_FertilizerEncounterFarmer_Text_9:
# 3193 "data/maps/Ranch/scripts.pory"
	.string "Fertilizers lead us down a path to ruin.$"

Ranch_EventScript_FertilizerEncounterFarmer_Text_10:
# 3205 "data/maps/Ranch/scripts.pory"
	.string "We will all suffer because of this!$"

Ranch_EventScript_FertilizerEncounterFarmer_Text_11:
# 3205 "data/maps/Ranch/scripts.pory"
	.string "Why do you insist upon using \nchemicals?$"

Ranch_EventScript_FertilizerEncounterFarmer_Text_12:
# 3212 "data/maps/Ranch/scripts.pory"
	.string "Fertilizer is a scientific miracle that\n"
	.string "has saved millions, if not billions, of\l"
	.string "lives.\p"
	.string "It must be used.$"

Ranch_EventScript_FertilizerEncounterProtestor_Text_0:
# 3292 "data/maps/Ranch/scripts.pory"
	.string "We simply do not need to be using\n"
	.string "synthetic fertilizers. Thank you for\l"
	.string "understanding.$"

Ranch_EventScript_SeventhFarmerLeave_Text_0:
# 3305 "data/maps/Ranch/scripts.pory"
	.string "Without fertilizers, we will see\n"
	.string "widespread famine.$"

Ranch_EventScript_SeventhFarmerLeave_Text_1:
# 3310 "data/maps/Ranch/scripts.pory"
	.string "This ranch will fail.$"

Ranch_EventScript_SeventhProtestorLeave_Text_0:
# 3344 "data/maps/Ranch/scripts.pory"
	.string "Chemicals on our food should be cause\n"
	.string "for concern.$"

Ranch_EventScript_SeventhProtestorLeave_Text_1:
# 3352 "data/maps/Ranch/scripts.pory"
	.string "This is ridiculous!$"

Ranch_EventScript_FinalEncounter_Text_0:
# 3407 "data/maps/Ranch/scripts.pory"
	.string "Hey! Are you the one running this\n"
	.string "place?$"

Ranch_EventScript_FinalEncounter_Text_1:
# 3434 "data/maps/Ranch/scripts.pory"
	.string "You vandals need to mind your own\n"
	.string "business! You've been spreading lies to\l"
	.string "my farmers and forcing them to abandon\l"
	.string "our practices.\p"
	.string "Why do you think you know better than\n"
	.string "us?$"

Ranch_EventScript_FinalEncounter_Text_2:
# 3439 "data/maps/Ranch/scripts.pory"
	.string "We've been trying to help you, your\n"
	.string "people, and the environment! All we want\l"
	.string "is what's best, and the way you've been\l"
	.string "working the land has not been\l"
	.string "sustainable.$"

Ranch_EventScript_FinalEncounter_Text_3:
# 3448 "data/maps/Ranch/scripts.pory"
	.string "And you!\p"
	.string "You just waltzed into my ranch with\n"
	.string "that Absol of yours and thought you\l"
	.string "could tell us what to do!\p"
	.string "I won't stand for it!$"

Ranch_EventScript_FinalEncounter_Text_4:
# 3473 "data/maps/Ranch/scripts.pory"
	.string "I'll fight for my farm!$"

Ranch_EventScript_FinalEncounter_Text_5:
# 3473 "data/maps/Ranch/scripts.pory"
	.string "You've forced my hand.$"

Ranch_EventScript_FinalEncounter_Text_6:
# 3482 "data/maps/Ranch/scripts.pory"
	.string "Hah! Despite your best efforts, my\n"
	.string "farmers will continue with our ways. We\l"
	.string "know how to use our resources, and\l"
	.string "won't answer to vandals like you!$"

Ranch_EventScript_FinalEncounter_Text_7:
# 3487 "data/maps/Ranch/scripts.pory"
	.string "We've just been trying to help you, your\n"
	.string "people, and the environment! All we want\l"
	.string "is what's best, and the way you've been\l"
	.string "working the land has not been\l"
	.string "sustainable. Your ranch will collapse!$"

Ranch_EventScript_FinalEncounter_Text_8:
# 3498 "data/maps/Ranch/scripts.pory"
	.string "And you!\p"
	.string "Why do you stand with technology? That\n"
	.string "Absol of yours should know that\l"
	.string "disaster lies ahead for this ranch!$"

Ranch_EventScript_FinalEncounter_Text_9:
# 3517 "data/maps/Ranch/scripts.pory"
	.string "I'll fight for sustainability!$"

Ranch_EventScript_FinalEncounter_Text_10:
# 3517 "data/maps/Ranch/scripts.pory"
	.string "Well, there's nothing else we can do.$"

Ranch_EventScript_AfterFinalFarmerBattle_Text_0:
# 3549 "data/maps/Ranch/scripts.pory"
	.string "You've left me with no choice.$"

Ranch_EventScript_AfterFinalFarmerBattle_Text_1:
# 3555 "data/maps/Ranch/scripts.pory"
	.string "We will try the methods you have\n"
	.string "introduced today. I must admit, we are\l"
	.string "obviously struggling. I hope your plan\l"
	.string "can get us out of this mess.$"

Ranch_EventScript_AfterFinalFarmerBattle_Text_2:
# 3560 "data/maps/Ranch/scripts.pory"
	.string "Wait!$"

Ranch_EventScript_AfterFinalFarmerBattle_Text_3:
# 3581 "data/maps/Ranch/scripts.pory"
	.string "What about our technology? I can bring\n"
	.string "back the water, and the crops, and the\l"
	.string "prosperity!\p"
	.string "Trust me and my science!$"

Ranch_EventScript_AfterFinalFarmerBattle_Text_4:
# 3588 "data/maps/Ranch/scripts.pory"
	.string "Your technology is unproven! It could\n"
	.string "lead to more destruction and pain!\p"
	.string "Besides, we already know what to do to\n"
	.string "live sustainably. We just have to do it!$"

Ranch_EventScript_AfterFinalFarmerBattle_Text_5:
# 3597 "data/maps/Ranch/scripts.pory"
	.string "Unbelievable! You are doomed!$"

Ranch_EventScript_AfterFinalFarmerBattle_Text_6:
# 3606 "data/maps/Ranch/scripts.pory"
	.string "One year later...$"

Ranch_EventScript_AfterFinalProtestorBattle_Text_0:
# 3630 "data/maps/Ranch/scripts.pory"
	.string "You win.$"

Ranch_EventScript_AfterFinalProtestorBattle_Text_1:
# 3636 "data/maps/Ranch/scripts.pory"
	.string "We've tried everything. No matter what\n"
	.string "we do, you are unwilling to accept the\l"
	.string "truth.\p"
	.string "Have fun with your technology, I give\n"
	.string "up.$"

Ranch_EventScript_AfterFinalProtestorBattle_Text_2:
# 3641 "data/maps/Ranch/scripts.pory"
	.string "Excellent choice!$"

Ranch_EventScript_AfterFinalProtestorBattle_Text_3:
# 3664 "data/maps/Ranch/scripts.pory"
	.string "I'm so glad you have seen the light! My\n"
	.string "scientific discoveries will make this\l"
	.string "ranch thrive once more!$"

Ranch_EventScript_AfterFinalProtestorBattle_Text_4:
# 3671 "data/maps/Ranch/scripts.pory"
	.string "You fool! Your technology is unproven!\n"
	.string "We know how to live sustainably, and we\l"
	.string "don't need you!$"

Ranch_EventScript_AfterFinalProtestorBattle_Text_5:
# 3677 "data/maps/Ranch/scripts.pory"
	.string "That's not how the farmers see it.$"

Ranch_EventScript_AfterFinalProtestorBattle_Text_6:
# 3684 "data/maps/Ranch/scripts.pory"
	.string "I can't believe you all!$"

GoodEnding_EventScript_Text_0:
# 3738 "data/maps/Ranch/scripts.pory"
	.string "Thank you for joining me for our annual\n"
	.string "Harvest Festival.\p"
	.string "I'm sure you have all noticed our\n"
	.string "harvest is more abundant than last\l"
	.string "year, by far.$"

GoodEnding_EventScript_Text_1:
# 3743 "data/maps/Ranch/scripts.pory"
	.string "To the surprise of many of us, the\n"
	.string "sustainability initiatives have paid\l"
	.string "off!\p"
	.string "Who knew that the cacti surrounding us\n"
	.string "could provide us with both fruit and\l"
	.string "fresh water?$"

GoodEnding_EventScript_Text_2:
# 3748 "data/maps/Ranch/scripts.pory"
	.string "And we are already healthier after\n"
	.string "ditching those chemical pesticides and\l"
	.string "fertilizers.$"

GoodEnding_EventScript_Text_3:
# 3753 "data/maps/Ranch/scripts.pory"
	.string "Our life is still difficult. We will\n"
	.string "struggle with droughts, and living in\l"
	.string "harsh conditions will not be easy.\p"
	.string "However, after taking the advice of\n"
	.string "those meddling protestors, we will be\l"
	.string "able to survive.\p"
	.string "Enough out of me, dig in!$"

BadEnding_EventScript_Text_0:
# 3846 "data/maps/Ranch/scripts.pory"
	.string "Well, thank you, both of you.\p"
	.string "Not only for attending the annual\n"
	.string "Harvest Festival, but also for staying\l"
	.string "on the farm this past year.\p"
	.string "I know it's been difficult, given the\n"
	.string "people we've lost and the fact that the\l"
	.string "water did not come back.$"

BadEnding_EventScript_Text_1:
# 3851 "data/maps/Ranch/scripts.pory"
	.string "About that, boss...\p"
	.string "We've decided to leave too.$"

BadEnding_EventScript_Text_2:
# 3862 "data/maps/Ranch/scripts.pory"
	.string "What?!$"

BadEnding_EventScript_Text_3:
# 3868 "data/maps/Ranch/scripts.pory"
	.string "That's right. There just isn't anything\n"
	.string "left for us. We need to move on to\l"
	.string "greener pastures.$"

BadEnding_EventScript_Text_4:
# 3874 "data/maps/Ranch/scripts.pory"
	.string "I understand. We were all let down by\n"
	.string "those promises, huh?$"

BadEnding_EventScript_Text_5:
# 3879 "data/maps/Ranch/scripts.pory"
	.string "No need to worry! I'm back!$"

BadEnding_EventScript_Text_6:
# 3891 "data/maps/Ranch/scripts.pory"
	.string "My scientists have come up with all\n"
	.string "sorts of new solutions!\p"
	.string "I understand that these new wells\n"
	.string "didn't bring forth any water, but that's\l"
	.string "why we have planned a pipeline to bring\l"
	.string "in ocean water!\p"
	.string "It'll take a lot of energy, but we can\n"
	.string "take out the salt, converting it to\l"
	.string "freshwater!\p"
	.string "Doesn't that sound grand?$"

BadEnding_EventScript_Text_7:
# 3901 "data/maps/Ranch/scripts.pory"
	.string "We're not interested. Your\n"
	.string "technological solutions didn't work\l"
	.string "last year, and we have no faith in them\l"
	.string "working this year.$"

BadEnding_EventScript_Text_8:
# 3915 "data/maps/Ranch/scripts.pory"
	.string "Well? What do you think?$"

BadEnding_EventScript_Text_9:
# 3921 "data/maps/Ranch/scripts.pory"
	.string "I'm out too. We should've listened to\n"
	.string "those kids.$"

Ranch_EventScript_HayFarmer_Text_0:
# 4003 "data/maps/Ranch/scripts.pory"
	.string "I'm taking stock of our hay supply.\n"
	.string "Looks like we'll have just enough for\l"
	.string "this year, but not enough for next.$"

Ranch_EventScript_OldMan_Text_0:
# 4014 "data/maps/Ranch/scripts.pory"
	.string "When I was a boy, this area was on the\n"
	.string "same level as the rest of the ranch.\p"
	.string "However, due to the use of this well,\n"
	.string "the land has sunk!\p"
	.string "The power of technology is amazing!$"

Ranch_Text_BarnSign_Text_0:
# 4024 "data/maps/Ranch/scripts.pory"
	.string "Free-Range Lechonk and Torchic raised\n"
	.string "here!$"

Ranch_EventScript_Boy_Text_0:
# 4031 "data/maps/Ranch/scripts.pory"
	.string "I've never seen water in this riverbed.\p"
	.string "My parents tell me it used to run full\n"
	.string "every year. I guess we used up all the\l"
	.string "water!$"

Ranch_EventScript_TruckMan_Text_0:
# 4042 "data/maps/Ranch/scripts.pory"
	.string "Trucks have delivered us water to grow\n"
	.string "our crops. This can't be a sustainable\l"
	.string "practice, but it's gotten us through a\l"
	.string "few rough years.$"

Jerry_Intro::
# 3958 "data/maps/Ranch/scripts.pory"
	.string "Hey kid! Quit trampling my crops!$"

Jerry_Outro::
# 3961 "data/maps/Ranch/scripts.pory"
	.string "Watch your step, why don't ya?$"

PostBattle_Jerry::
# 3964 "data/maps/Ranch/scripts.pory"
	.string "I've been doin' everything I can to grow\n"
	.string "this hay.\p"
	.string "It's been real tough this year.$"

Andrew_Intro::
# 3974 "data/maps/Ranch/scripts.pory"
	.string "These farmers are killing all the bugs!$"

Andrew_Outro::
# 3977 "data/maps/Ranch/scripts.pory"
	.string "I might have the last few bugs on the\n"
	.string "ranch. I need to protect them!$"

PostBattle_Andrew::
# 3980 "data/maps/Ranch/scripts.pory"
	.string "Stop killing the bugs!$"

Matt_Intro::
# 3990 "data/maps/Ranch/scripts.pory"
	.string "Pests keep attacking my crops!$"

Matt_Outro::
# 3993 "data/maps/Ranch/scripts.pory"
	.string "My Cacnea does a good job of\n"
	.string "preventing more damage.$"

PostBattle_Matt::
# 3996 "data/maps/Ranch/scripts.pory"
	.string "I wish other Pokémon would stop eating\n"
	.string "my crops!$"
