# 1 "data/maps/RanchBarn1/scripts.pory"


RanchBarn1_MapScripts::
# 6 "data/maps/RanchBarn1/scripts.pory"
	map_script MAP_SCRIPT_ON_FRAME_TABLE, RanchBarn1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE
	.byte 0

RanchBarn1_MapScripts_MAP_SCRIPT_ON_FRAME_TABLE:
# 7 "data/maps/RanchBarn1/scripts.pory"
	map_script_2 FLAG_TORCHIC_RESCUE, FALSE, RanchBarn1_EventScript_TorchicRescue
	.2byte 0


RanchBarn1_EventScript_TorchicRescue::
# 12 "data/maps/RanchBarn1/scripts.pory"
	lock
# 13 "data/maps/RanchBarn1/scripts.pory"
	delay 10
# 14 "data/maps/RanchBarn1/scripts.pory"
	applymovement 1, Common_Movement_FaceUp
# 15 "data/maps/RanchBarn1/scripts.pory"
	applymovement 2, Common_Movement_FaceLeft
# 16 "data/maps/RanchBarn1/scripts.pory"
	applymovement 3, Common_Movement_FaceRight
# 17 "data/maps/RanchBarn1/scripts.pory"
	applymovement 4, Common_Movement_FaceDown
# 18 "data/maps/RanchBarn1/scripts.pory"
	applymovement 5, Common_Movement_FaceUp
# 19 "data/maps/RanchBarn1/scripts.pory"
	applymovement 6, Common_Movement_FaceLeft
# 20 "data/maps/RanchBarn1/scripts.pory"
	applymovement 7, Common_Movement_FaceRight
# 21 "data/maps/RanchBarn1/scripts.pory"
	applymovement 9, Common_Movement_FaceDown
# 22 "data/maps/RanchBarn1/scripts.pory"
	waitmovement 0
# 23 "data/maps/RanchBarn1/scripts.pory"
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
# 24 "data/maps/RanchBarn1/scripts.pory"
	special SpawnCameraObject
# 25 "data/maps/RanchBarn1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraToRescue
# 26 "data/maps/RanchBarn1/scripts.pory"
	waitmovement 0
# 27 "data/maps/RanchBarn1/scripts.pory"
	applymovement 10, Common_Movement_WalkInPlaceRight
# 28 "data/maps/RanchBarn1/scripts.pory"
	waitmovement 0
# 29 "data/maps/RanchBarn1/scripts.pory"
	delay 15
# 30 "data/maps/RanchBarn1/scripts.pory"
	msgbox RanchBarn1_EventScript_TorchicRescue_Text_0
# 31 "data/maps/RanchBarn1/scripts.pory"
	closemessage
# 32 "data/maps/RanchBarn1/scripts.pory"
	delay 30
# 33 "data/maps/RanchBarn1/scripts.pory"
	applymovement 8, Common_Movement_WalkInPlaceLeft
# 34 "data/maps/RanchBarn1/scripts.pory"
	waitmovement 0
# 35 "data/maps/RanchBarn1/scripts.pory"
	playmoncry SPECIES_TORCHIC, CRY_MODE_NORMAL
# 36 "data/maps/RanchBarn1/scripts.pory"
	msgbox RanchBarn1_EventScript_TorchicRescue_Text_1
# 37 "data/maps/RanchBarn1/scripts.pory"
	closemessage
# 38 "data/maps/RanchBarn1/scripts.pory"
	delay 30
# 39 "data/maps/RanchBarn1/scripts.pory"
	applymovement 10, Common_Movement_Shove
# 40 "data/maps/RanchBarn1/scripts.pory"
	waitmovement 0
# 41 "data/maps/RanchBarn1/scripts.pory"
	playse SE_DOOR
# 42 "data/maps/RanchBarn1/scripts.pory"
	waitse
# 43 "data/maps/RanchBarn1/scripts.pory"
	delay 15
# 44 "data/maps/RanchBarn1/scripts.pory"
	applymovement 10, Common_Movement_WalkInPlaceRight
# 45 "data/maps/RanchBarn1/scripts.pory"
	waitmovement 0
# 46 "data/maps/RanchBarn1/scripts.pory"
	msgbox RanchBarn1_EventScript_TorchicRescue_Text_2
# 47 "data/maps/RanchBarn1/scripts.pory"
	closemessage
# 48 "data/maps/RanchBarn1/scripts.pory"
	delay 15
# 49 "data/maps/RanchBarn1/scripts.pory"
	applymovement 10, Common_Movement_WalkUp
# 50 "data/maps/RanchBarn1/scripts.pory"
	waitmovement 0
# 51 "data/maps/RanchBarn1/scripts.pory"
	applymovement 10, Common_Movement_FaceDown
# 52 "data/maps/RanchBarn1/scripts.pory"
	applymovement 8, Common_Movement_WalkLeft2
# 53 "data/maps/RanchBarn1/scripts.pory"
	waitmovement 0
# 54 "data/maps/RanchBarn1/scripts.pory"
	delay 15
# 55 "data/maps/RanchBarn1/scripts.pory"
	msgbox RanchBarn1_EventScript_TorchicRescue_Text_3
# 56 "data/maps/RanchBarn1/scripts.pory"
	closemessage
# 57 "data/maps/RanchBarn1/scripts.pory"
	delay 15
# 58 "data/maps/RanchBarn1/scripts.pory"
	playse SE_BANG
# 59 "data/maps/RanchBarn1/scripts.pory"
	waitse
# 60 "data/maps/RanchBarn1/scripts.pory"
	applymovement 10, Common_Movement_ExclamationMark
# 61 "data/maps/RanchBarn1/scripts.pory"
	waitmovement 0
# 62 "data/maps/RanchBarn1/scripts.pory"
	msgbox RanchBarn1_EventScript_TorchicRescue_Text_4
# 63 "data/maps/RanchBarn1/scripts.pory"
	closemessage
# 64 "data/maps/RanchBarn1/scripts.pory"
	applymovement 10, Common_Movement_JumpInPlaceDown
# 65 "data/maps/RanchBarn1/scripts.pory"
	waitmovement 0
# 66 "data/maps/RanchBarn1/scripts.pory"
	delay 15
# 67 "data/maps/RanchBarn1/scripts.pory"
	applymovement 10, ProtestorOutDoor
# 68 "data/maps/RanchBarn1/scripts.pory"
	applymovement OBJ_EVENT_ID_CAMERA, CameraFromRescue
# 69 "data/maps/RanchBarn1/scripts.pory"
	waitmovement 0
# 70 "data/maps/RanchBarn1/scripts.pory"
	special RemoveCameraObject
# 71 "data/maps/RanchBarn1/scripts.pory"
	waitmovement 0
# 72 "data/maps/RanchBarn1/scripts.pory"
	delay 10
# 73 "data/maps/RanchBarn1/scripts.pory"
	msgbox RanchBarn1_EventScript_TorchicRescue_Text_5
# 74 "data/maps/RanchBarn1/scripts.pory"
	closemessage
# 75 "data/maps/RanchBarn1/scripts.pory"
	delay 15
# 76 "data/maps/RanchBarn1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_WalkLeft
# 77 "data/maps/RanchBarn1/scripts.pory"
	waitmovement 0
# 78 "data/maps/RanchBarn1/scripts.pory"
	applymovement 10, Common_Movement_WalkDownFast
# 79 "data/maps/RanchBarn1/scripts.pory"
	waitmovement 0
# 80 "data/maps/RanchBarn1/scripts.pory"
	removeobject 10
# 81 "data/maps/RanchBarn1/scripts.pory"
	playse SE_EXIT
# 82 "data/maps/RanchBarn1/scripts.pory"
	waitse
# 83 "data/maps/RanchBarn1/scripts.pory"
	delay 30
# 84 "data/maps/RanchBarn1/scripts.pory"
	applymovement 8, TorchicToPlayer
# 85 "data/maps/RanchBarn1/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceUp
# 86 "data/maps/RanchBarn1/scripts.pory"
	waitmovement 0
# 87 "data/maps/RanchBarn1/scripts.pory"
	delay 30
# 88 "data/maps/RanchBarn1/scripts.pory"
	applymovement 8, Common_Movement_WalkDown
# 89 "data/maps/RanchBarn1/scripts.pory"
	waitmovement 0
# 90 "data/maps/RanchBarn1/scripts.pory"
	delay 10
# 91 "data/maps/RanchBarn1/scripts.pory"
	removeobject 8
# 92 "data/maps/RanchBarn1/scripts.pory"
	delay 5
# 93 "data/maps/RanchBarn1/scripts.pory"
	playse SE_BALL
# 94 "data/maps/RanchBarn1/scripts.pory"
	msgbox RanchBarn1_EventScript_TorchicRescue_Text_6
# 95 "data/maps/RanchBarn1/scripts.pory"
	waitse
# 96 "data/maps/RanchBarn1/scripts.pory"
	closemessage
# 97 "data/maps/RanchBarn1/scripts.pory"
	givemon SPECIES_TORCHIC, 15, 0, ITEM_POKE_BALL, NATURE_MODEST, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, MOVE_AERIAL_ACE, MOVE_QUICK_ATTACK, MOVE_SAND_ATTACK, MOVE_FLAME_CHARGE
# 98 "data/maps/RanchBarn1/scripts.pory"
	setflag FLAG_TORCHIC_RESCUE
# 99 "data/maps/RanchBarn1/scripts.pory"
	release
	end


# 103 "data/maps/RanchBarn1/scripts.pory"
CameraToRescue:
# 104 "data/maps/RanchBarn1/scripts.pory"
	walk_up
# 105 "data/maps/RanchBarn1/scripts.pory"
	walk_diag_northwest
# 105 "data/maps/RanchBarn1/scripts.pory"
	walk_diag_northwest
# 105 "data/maps/RanchBarn1/scripts.pory"
	walk_diag_northwest
	step_end

# 108 "data/maps/RanchBarn1/scripts.pory"
CameraFromRescue:
# 109 "data/maps/RanchBarn1/scripts.pory"
	walk_down
# 110 "data/maps/RanchBarn1/scripts.pory"
	walk_diag_southeast
# 110 "data/maps/RanchBarn1/scripts.pory"
	walk_diag_southeast
# 110 "data/maps/RanchBarn1/scripts.pory"
	walk_diag_southeast
	step_end

# 113 "data/maps/RanchBarn1/scripts.pory"
ProtestorOutDoor:
# 114 "data/maps/RanchBarn1/scripts.pory"
	walk_fast_left
# 115 "data/maps/RanchBarn1/scripts.pory"
	walk_fast_down
# 115 "data/maps/RanchBarn1/scripts.pory"
	walk_fast_down
# 115 "data/maps/RanchBarn1/scripts.pory"
	walk_fast_down
# 115 "data/maps/RanchBarn1/scripts.pory"
	walk_fast_down
# 116 "data/maps/RanchBarn1/scripts.pory"
	walk_fast_right
# 116 "data/maps/RanchBarn1/scripts.pory"
	walk_fast_right
# 116 "data/maps/RanchBarn1/scripts.pory"
	walk_fast_right
# 116 "data/maps/RanchBarn1/scripts.pory"
	walk_fast_right
# 117 "data/maps/RanchBarn1/scripts.pory"
	face_down
	step_end

# 120 "data/maps/RanchBarn1/scripts.pory"
TorchicToPlayer:
# 121 "data/maps/RanchBarn1/scripts.pory"
	walk_down
# 121 "data/maps/RanchBarn1/scripts.pory"
	walk_down
# 121 "data/maps/RanchBarn1/scripts.pory"
	walk_down
# 122 "data/maps/RanchBarn1/scripts.pory"
	walk_right
# 122 "data/maps/RanchBarn1/scripts.pory"
	walk_right
# 123 "data/maps/RanchBarn1/scripts.pory"
	face_down
	step_end

# 126 "data/maps/RanchBarn1/scripts.pory"
TorchicJump:
# 127 "data/maps/RanchBarn1/scripts.pory"
	jump_in_place_down
# 127 "data/maps/RanchBarn1/scripts.pory"
	jump_in_place_down
	step_end

RanchBarn1_EventScript_TorchicRescue_Text_0:
# 30 "data/maps/RanchBarn1/scripts.pory"
	.string "It's ok, little guy. I'll get you out\n"
	.string "soon!$"

RanchBarn1_EventScript_TorchicRescue_Text_1:
# 36 "data/maps/RanchBarn1/scripts.pory"
	.string "Tor tor!$"

RanchBarn1_EventScript_TorchicRescue_Text_2:
# 46 "data/maps/RanchBarn1/scripts.pory"
	.string "Come on out, buddy!$"

RanchBarn1_EventScript_TorchicRescue_Text_3:
# 55 "data/maps/RanchBarn1/scripts.pory"
	.string "That's better, right?\n"
	.string "Now, let me free the rest of your\l"
	.string "friends!$"

RanchBarn1_EventScript_TorchicRescue_Text_4:
# 62 "data/maps/RanchBarn1/scripts.pory"
	.string "QUIT MESSIN' WITH MY CHICKENS!$"

RanchBarn1_EventScript_TorchicRescue_Text_5:
# 73 "data/maps/RanchBarn1/scripts.pory"
	.string "Excuse me! I need to go deal with this\n"
	.string "farmer!$"

RanchBarn1_EventScript_TorchicRescue_Text_6:
# 94 "data/maps/RanchBarn1/scripts.pory"
	.string "The freed Torchic joined you!$"
