# 1 "data/maps/TestMap/scripts.pory"

# 2 "data/maps/TestMap/scripts.pory"
TestMap_MapScripts::
# 3 "data/maps/TestMap/scripts.pory"
    .byte 0

Test_EventScript_FullArt::
# 7 "data/maps/TestMap/scripts.pory"
	lock
# 8 "data/maps/TestMap/scripts.pory"
	applymovement 0, Common_Movement_FacePlayer
# 9 "data/maps/TestMap/scripts.pory"
	waitmovement 0
# 10 "data/maps/TestMap/scripts.pory"
	dynmultichoice 0, 0, TRUE, 3, 0, DYN_MULTICHOICE_CB_NONE, Test_EventScript_FullArt_Text_0, Test_EventScript_FullArt_Text_1, Test_EventScript_FullArt_Text_2
# 11 "data/maps/TestMap/scripts.pory"
	compare VAR_RESULT, 0
	goto_if_eq Test_EventScript_FullArt_2
# 14 "data/maps/TestMap/scripts.pory"
	compare VAR_RESULT, 1
	goto_if_eq Test_EventScript_FullArt_3
# 17 "data/maps/TestMap/scripts.pory"
	compare VAR_RESULT, 2
	goto_if_eq Test_EventScript_FullArt_4
Test_EventScript_FullArt_1:
# 20 "data/maps/TestMap/scripts.pory"
	callnative OpenScreenshotsFromScript
# 21 "data/maps/TestMap/scripts.pory"
	delay 30
# 22 "data/maps/TestMap/scripts.pory"
	msgbox Test_EventScript_FullArt_Text_3
# 23 "data/maps/TestMap/scripts.pory"
	release
	end

Test_EventScript_FullArt_2:
# 12 "data/maps/TestMap/scripts.pory"
	setvar VAR_0x8000, 0
	goto Test_EventScript_FullArt_1

Test_EventScript_FullArt_3:
# 15 "data/maps/TestMap/scripts.pory"
	setvar VAR_0x8000, 1
	goto Test_EventScript_FullArt_1

Test_EventScript_FullArt_4:
# 18 "data/maps/TestMap/scripts.pory"
	setvar VAR_0x8000, 2
	goto Test_EventScript_FullArt_1


Test_EventScript_FullArt_Text_0:
# 10 "data/maps/TestMap/scripts.pory"
	.string "Mountain!$"

Test_EventScript_FullArt_Text_1:
# 10 "data/maps/TestMap/scripts.pory"
	.string "Fire!$"

Test_EventScript_FullArt_Text_2:
# 10 "data/maps/TestMap/scripts.pory"
	.string "Hamtaro!$"

Test_EventScript_FullArt_Text_3:
# 22 "data/maps/TestMap/scripts.pory"
	.string "Yowza!$"
