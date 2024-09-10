.set LOCALID_VICTOR, 35
.set LOCALID_VICTORIA, 36
.set LOCALID_VIVI, 37
.set LOCALID_VICKY, 38

@ Sailing to and from Dewford uses local IDs from different maps
@ e.g. Route 104's sail to Dewford script references local IDs from Dewford's map
@ All of these local IDs are labeled here
.equ LOCALID_BRINEY_DEWFORD, 2
.equ LOCALID_BOAT_DEWFORD, 4

.equ LOCALID_BOAT_R109, 1
.equ LOCALID_BRINEY_R109, 2

.equ LOCALID_BOAT_R104, 7
.equ LOCALID_BRINEY_R104, 8

DewfordTown_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, DewfordTown_OnTransition
	map_script MAP_SCRIPT_ON_RESUME, DewfordTown_OnResume
	.byte 0

DewfordTown_OnTransition:
	setflag FLAG_VISITED_DEWFORD_TOWN
	call_if_eq VAR_DEWFORD_TOWN_STATE, 1, DewfordTown_EventScript_StormyInFront
	end

DewfordTown_OnResume:
	goto_if_not_defeated TRAINER_VICKY, DewfordTown_EventScript_SetWinstratesNotDefeated
	goto_if_defeated TRAINER_VICKY, DewfordTown_EventScript_SetWinstratesDefeated
	end

DewfordTown_EventScript_RemoveStormy::
	setflag FLAG_UNUSED_0x034
	end

DewfordTown_EventScript_SetWinstratesNotDefeated::
	clearflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VICTORIA_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VIVI_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
	cleartrainerflag TRAINER_VICTOR
	cleartrainerflag TRAINER_VICTORIA
	cleartrainerflag TRAINER_VIVI
	end

DewfordTown_EventScript_SetWinstratesDefeated::
	clearflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
	setflag FLAG_HIDE_ROUTE_111_VICTOR_WINSTRATE
	setobjectxyperm LOCALID_VICKY, 13, 17
	end

DewfordTown_EventScript_StormyInFront::
	setobjectxyperm 19, 42, 42
	setobjectxyperm 32, 15, 37
	setobjectxyperm 34, 14, 37
	setobjectxyperm 33, 15, 36
	setobjectmovementtype 32, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	setobjectmovementtype 34, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
	setobjectmovementtype 33, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
	call_if_eq VAR_UNUSED_0x40F8, 3, DewfordTown_EventScript_RemoveStormy
	end

DewfordTown_EventScript_Victor::
	lock
	faceplayer
	setflag FLAG_LANDMARK_WINSTRATE_FAMILY
	msgbox DewfordTown_Text_BattleOurFamily, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_BattleWinstrates
	msgbox DewfordTown_Text_IsThatSo, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_BattleWinstrates::
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	msgbox DewfordTown_Text_VictorIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_VICTOR, DewfordTown_Text_VictorDefeat
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	applymovement LOCALID_VICTOR, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox DewfordTown_Text_VictorPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_VICTOR, DewfordTown_Movement_WinstrateEnterHouse
	waitmovement 0
	removeobject LOCALID_VICTOR
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_WaitForNextWinstrate
	waitmovement 0
	addobject LOCALID_VICTORIA
	applymovement LOCALID_VICTORIA, DewfordTown_Movement_WinstrateExitHouse
	waitmovement 0
	msgbox DewfordTown_Text_VictoriaIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_VICTORIA, DewfordTown_Text_VictoriaDefeat
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	applymovement LOCALID_VICTORIA, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox DewfordTown_Text_VictoriaPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_VICTORIA, DewfordTown_Movement_WinstrateEnterHouse
	waitmovement 0
	removeobject LOCALID_VICTORIA
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_WaitForNextWinstrate
	waitmovement 0
	addobject LOCALID_VIVI
	applymovement LOCALID_VIVI, DewfordTown_Movement_WinstrateExitHouse
	waitmovement 0
	msgbox DewfordTown_Text_ViviIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_VIVI, DewfordTown_Text_ViviDefeat
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	applymovement LOCALID_VIVI, Common_Movement_WalkInPlaceFasterUp
	waitmovement 0
	msgbox DewfordTown_Text_ViviPostBattle, MSGBOX_DEFAULT
	closemessage
	applymovement LOCALID_VIVI, DewfordTown_Movement_WinstrateEnterHouse
	waitmovement 0
	removeobject LOCALID_VIVI
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_WaitForNextWinstrate
	waitmovement 0
	addobject LOCALID_VICKY
	applymovement LOCALID_VICKY, DewfordTown_Movement_WinstrateExitHouse
	waitmovement 0
	msgbox DewfordTown_Text_VickyIntro, MSGBOX_DEFAULT
	trainerbattle_no_intro TRAINER_VICKY, DewfordTown_Text_VickyDefeat
	waitmessage
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	clearflag FLAG_HIDE_ROUTE_111_VICKY_WINSTRATE
	setobjectxyperm LOCALID_VICKY, 13, 17
	giveitem ITEM_AIR_BALLOON
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	msgbox DewfordTown_Text_VickyPostBattle, MSGBOX_DEFAULT
	closemessage
	release
	end

DewfordTown_Movement_WinstrateEnterHouse:
	walk_in_place_faster_up
	walk_up
	step_end

DewfordTown_Movement_WinstrateExitHouse:
	walk_down
	step_end

DewfordTown_Movement_WaitForNextWinstrate:
	delay_16
	delay_16
	delay_16
	step_end

DewfordTown_Text_BattleOurFamily:
	.string "Hey there, kid.\p"
	.string "My family has been living in this cave\n"
	.string "after our home got swept away by the\l"
	.string "tides.\p"
	.string "I won't let you in, but if you can\n"
	.string "beat my whole family, we can give you\l"
	.string "a prize.\p"
	.string "How does that sound?$"

DewfordTown_Text_IsThatSo:
	.string "I understand.\n"
	.string "Come back if you change your mind.$"

DewfordTown_Text_VictorIntro:
	.string "Alright! You just made my week!$"

DewfordTown_Text_VictorDefeat:
	.string "Hahaha!\n"
	.string "Great showing, kid!$"

DewfordTown_Text_VictorPostBattle:
	.string "C'mon, Owen!\n"
	.string "We have a visitor!$"

DewfordTown_Text_VictoriaIntro:
	.string "Wow, I haven't seen anyone new in\n"
	.string "weeks!\p"
	.string "Are you good?$"

DewfordTown_Text_VictoriaDefeat:
	.string "Aw, man.\n"
	.string "Well, thanks for the rush!$"

DewfordTown_Text_VictoriaPostBattle:
	.string "I got beat!\n"
	.string "Who's next?$"

DewfordTown_Text_ViviIntro:
	.string "You beat my brother?\p"
	.string "I learned everything I know\n"
	.string "from him!$"

DewfordTown_Text_ViviDefeat:
	.string "You are tough!\n"
	.string "But can you beat my mom?$"

DewfordTown_Text_ViviPostBattle:
	.string "Mom!$"

DewfordTown_Text_VickyIntro:
	.string "So you're the tough trainer I've\n"
	.string "heard about!\p"
	.string "Before I take you on, I want to\n"
	.string "thank you for entertaining the\l"
	.string "rest of my family.\p"
	.string "We haven't had much joy since\n"
	.string "losing everything.\p"
	.string "Well, I guess it's my turn!\n"
	.string "Give me your best!$"

DewfordTown_Text_VickyDefeat:
	.string "Teehee, you are strong!\n"
	.string "Take this!$"

DewfordTown_Text_VickyPostBattle:
	.string "My daughter enjoyed playing\n"
	.string "with that for a while.\p"
	.string "Maybe another child would\n"
	.string "like it?$"

DewfordTown_EventScript_Briney::
	lock
	faceplayer
	goto_if_unset FLAG_DELIVERED_STEVEN_LETTER, DewfordTown_EventScript_ReturnToPetalburgPrompt
	message DewfordTown_Text_WhereAreWeBound
	waitmessage
	multichoicedefault 21, 6, MULTI_BRINEY_ON_DEWFORD, 2, FALSE
	switch VAR_RESULT
	case 0, DewfordTown_EventScript_ChoosePetalburg
	case 1, DewfordTown_EventScript_ChooseSlateport
	case 2, DewfordTown_EventScript_CancelSailSelect
	case MULTI_B_PRESSED, DewfordTown_EventScript_CancelSailSelect
	end

DewfordTown_EventScript_ChoosePetalburg::
	msgbox DewfordTown_Text_PetalburgWereSettingSail, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_SailToPetalburg
	release
	end

DewfordTown_EventScript_ChooseSlateport::
	msgbox DewfordTown_Text_SlateportWereSettingSail, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_SailToSlateport
	release
	end

DewfordTown_EventScript_CancelSailSelect::
	msgbox DewfordTown_Text_JustTellMeWhenYouNeedToSetSail, MSGBOX_DEFAULT
	closemessage
	release
	end

DewfordTown_EventScript_ReturnToPetalburgPrompt::
	msgbox DewfordTown_Text_SetSailBackToPetalburg, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_SailBackToPetalburg
	msgbox DewfordTown_Text_GoDeliverIllBeWaiting, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_SailBackToPetalburg::
	msgbox DewfordTown_Text_PetalburgWereSettingSail2, MSGBOX_DEFAULT
	closemessage
	goto DewfordTown_EventScript_SailToPetalburg
	end

DewfordTown_EventScript_Woman::
	msgbox DewfordTown_Text_TinyIslandCommunity, MSGBOX_NPC
	end

DewfordTown_EventScript_TownSign::
	msgbox DewfordTown_Text_TownSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_GymSign::
	msgbox DewfordTown_Text_GymSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_HallSign::
	msgbox DewfordTown_Text_HallSign, MSGBOX_SIGN
	end

DewfordTown_EventScript_OldRodFisherman::
	lock
	faceplayer
	goto_if_set FLAG_RECEIVED_OLD_ROD, DewfordTown_EventScript_HowsFishing
	msgbox DewfordTown_Text_GettingItchToFish, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_GiveOldRod
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_NotGettingItchToFish
	end

DewfordTown_EventScript_GiveOldRod::
	msgbox DewfordTown_Text_GiveYouOneOfMyRods, MSGBOX_DEFAULT
	giveitem ITEM_OLD_ROD
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_OLD_ROD
	msgbox DewfordTown_Text_ThrowInFishingAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_NotGettingItchToFish::
	msgbox DewfordTown_Text_ThatsTooBadThen, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_HowsFishing::
	message DewfordTown_Text_HowsYourFishing
	waitmessage
	multichoice 20, 8, MULTI_HOWS_FISHING, TRUE
	goto_if_eq VAR_RESULT, 0, DewfordTown_EventScript_FishingExcellent
	goto_if_eq VAR_RESULT, 1, DewfordTown_EventScript_FishingNotSoGood
	end

DewfordTown_EventScript_FishingExcellent::
	msgbox DewfordTown_Text_GreatHaulInSomeBigOnes, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_FishingNotSoGood::
	msgbox DewfordTown_Text_FishingAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_SailToPetalburg::
	call EventScript_BackupMrBrineyLocation
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 0
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
	waitmovement 0
	removeobject LOCALID_BRINEY_DEWFORD
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	call Common_EventScript_PlayBrineysBoatMusic
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToPetalburg
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToPetalburg
	waitmovement 0
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
	call Common_EventScript_StopBrineysBoatMusic
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatPetalburg
	waitmovement 0
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE104
	clearflag FLAG_HIDE_BRINEYS_HOUSE_MR_BRINEY
	clearflag FLAG_HIDE_BRINEYS_HOUSE_PEEKO
	clearflag FLAG_HIDE_ROUTE_104_MR_BRINEY_BOAT
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
	setvar VAR_BOARD_BRINEY_BOAT_STATE, 2
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	warp MAP_ROUTE104_MR_BRINEYS_HOUSE, 5, 4
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
	waitstate
	release
	end

DewfordTown_EventScript_SailToSlateport::
	call EventScript_BackupMrBrineyLocation
	setobjectsubpriority LOCALID_BRINEY_DEWFORD, MAP_DEWFORD_TOWN, 0
	setobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN, 1
	applymovement LOCALID_BRINEY_DEWFORD, DewfordTown_Movement_BrineyBoardBoat
	waitmovement 0
	removeobject LOCALID_BRINEY_DEWFORD
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_PlayerBoardBoat
	waitmovement 0
	hideobjectat OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	call Common_EventScript_PlayBrineysBoatMusic
	applymovement LOCALID_BOAT_DEWFORD, DewfordTown_Movement_SailToSlateport
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_SailToSlateport
	waitmovement 0
	call Common_EventScript_StopBrineysBoatMusic
	showobjectat OBJ_EVENT_ID_PLAYER, MAP_ROUTE109
	applymovement OBJ_EVENT_ID_PLAYER, DewfordTown_Movement_ExitBoatSlateport
	waitmovement 0
	setobjectxyperm LOCALID_BRINEY_R109, 21, 26
	addobject LOCALID_BRINEY_R109
	setobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109, 0
	applymovement LOCALID_BRINEY_R109, DewfordTown_Movement_BrineyExitBoat
	waitmovement 0
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY
	addobject LOCALID_BOAT_R109
	clearflag FLAG_HIDE_ROUTE_109_MR_BRINEY_BOAT
	setflag FLAG_HIDE_MR_BRINEY_BOAT_DEWFORD_TOWN
	hideobjectat LOCALID_BOAT_DEWFORD, MAP_DEWFORD_TOWN
	call_if_unset FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateportDeliverGoods
	call_if_set FLAG_DELIVERED_DEVON_GOODS, DewfordTown_EventScript_LandedSlateport
	closemessage
	copyvar VAR_BRINEY_LOCATION, VAR_0x8008
	resetobjectsubpriority OBJ_EVENT_ID_PLAYER, MAP_DEWFORD_TOWN
	resetobjectsubpriority LOCALID_BRINEY_R109, MAP_ROUTE109
	copyobjectxytoperm LOCALID_BRINEY_R109
	release
	end

DewfordTown_EventScript_LandedSlateportDeliverGoods::
	msgbox DewfordTown_Text_BrineyLandedInSlateportDeliverGoods, MSGBOX_DEFAULT
	return

DewfordTown_EventScript_LandedSlateport::
	msgbox DewfordTown_Text_BrineyLandedInSlateport, MSGBOX_DEFAULT
	return

DewfordTown_Movement_SailToPetalburg:
	walk_up
	walk_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_up
	walk_left
	walk_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_left
	walk_fast_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_faster_left
	walk_fast_left
	walk_fast_left
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_up
	walk_up
	walk_up
	walk_up
	step_end

DewfordTown_Movement_SailToSlateport:
	walk_right
	walk_fast_right
	walk_fast_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_faster_right
	walk_fast_right
	walk_fast_right
	walk_fast_up
	walk_fast_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_faster_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	walk_fast_up
	step_end

DewfordTown_Movement_PlayerBoardBoat:
	walk_right
	walk_up
	step_end

DewfordTown_Movement_ExitBoatPetalburg:
	walk_up
	walk_up
	walk_up
	step_end

DewfordTown_Movement_ExitBoatSlateport:
	walk_up
	walk_up
	walk_up
	walk_in_place_faster_down
	step_end

DewfordTown_Movement_BrineyBoardBoat:
	walk_up
	step_end

DewfordTown_Movement_BrineyExitBoat:
	walk_up
	walk_up
	step_end

DewfordTown_EventScript_TrendyPhraseBoy::
	lock
	faceplayer
	call Common_EventScript_BufferTrendyPhrase
	msgbox DewfordTown_Text_XIsTheBiggestHappeningThingRight, MSGBOX_YESNO
	goto_if_eq VAR_RESULT, YES, DewfordTown_EventScript_ConfirmTrendyPhrase
	goto_if_eq VAR_RESULT, NO, DewfordTown_EventScript_RejectTrendyPhrase
	end

DewfordTown_EventScript_ConfirmTrendyPhrase::
	msgbox DewfordTown_Text_YeahDefinitionOfInRightNow, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_RejectTrendyPhrase::
	msgbox DewfordTown_Text_TellMeWhatsNewAndIn, MSGBOX_DEFAULT
	setvar VAR_0x8004, EASY_CHAT_TYPE_TRENDY_PHRASE
	call Common_ShowEasyChatScreen
	lock
	faceplayer
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_EventScript_GiveNewTrendyPhrase
	goto_if_eq VAR_RESULT, FALSE, DewfordTown_EventScript_CancelNewTrendyPhrase
	end

DewfordTown_EventScript_GiveNewTrendyPhrase::
	incrementgamestat GAME_STAT_STARTED_TRENDS
	goto_if_eq VAR_0x8004, FALSE, DewfordTown_EventScript_PhraseNotTrendyEnough
	msgbox DewfordTown_Text_OfCourseIKnowAboutThat, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_CancelNewTrendyPhrase::
	msgbox DewfordTown_Text_HearOfAnyTrendsComeShareWithMe, MSGBOX_DEFAULT
	release
	end

DewfordTown_EventScript_PhraseNotTrendyEnough::
	msgbox DewfordTown_Text_XHuhIThinkYIsCool, MSGBOX_DEFAULT
	release
	end

DewfordTown_Text_TinyIslandCommunity:
	.string "DEWFORD is a tiny island community.\n"
	.string "If something gets trendy here,\l"
	.string "everyone picks up on it right away.$"

DewfordTown_Text_TownSign:
	.string "Seaspray Town\n"
	.string "“The sunniest resort in Ecodia.”$"

DewfordTown_Text_GymSign:
	.string "Seaspray Town Pokémon Gym\n"
	.string "Leader: Stormy\l"
	.string "“A master of the skies!”$"

DewfordTown_Text_HallSign:
	.string "DEWFORD HALL\n"
	.string "“Everyone's information exchange!”$"

Route104_Text_LandedInDewfordDeliverLetter:
	.string "MR. BRINEY: Ahoy!\n"
	.string "We've hit land in DEWFORD.\p"
	.string "I suppose you're off to deliver that\n"
	.string "LETTER to, who was it now, STEVEN!$"

DewfordTown_Text_SetSailBackToPetalburg:
	.string "MR. BRINEY: Have you delivered your\n"
	.string "LETTER?\p"
	.string "Or were you meaning to sail back to\n"
	.string "PETALBURG?$"

DewfordTown_Text_PetalburgWereSettingSail2:
	.string "MR. BRINEY: PETALBURG it is, then!\p"
	.string "Anchors aweigh!\n"
	.string "PEEKO, we're setting sail, my darling!$"

DewfordTown_Text_GoDeliverIllBeWaiting:
	.string "MR. BRINEY: Then you go on and deliver\n"
	.string "the LETTER. I'll be waiting.$"

DewfordTown_Text_BrineyLandedInDewford:
	.string "MR. BRINEY: Ahoy!\n"
	.string "We've hit land in DEWFORD!\p"
	.string "You just go on and tell me whenever\n"
	.string "you want to set sail again!$"

DewfordTown_Text_WhereAreWeBound:
	.string "MR. BRINEY: Ahoy!\n"
	.string "For you, I'll go out to sea anytime!\p"
	.string "Now, my friend, where are we bound?$"

DewfordTown_Text_PetalburgWereSettingSail:
	.string "MR. BRINEY: PETALBURG, is it?\p"
	.string "Anchors aweigh!\n"
	.string "PEEKO, we're setting sail, my darling!$"

DewfordTown_Text_SlateportWereSettingSail:
	.string "MR. BRINEY: SLATEPORT, is it?\p"
	.string "Anchors aweigh!\n"
	.string "PEEKO, we're setting sail, my darling!$"

DewfordTown_Text_JustTellMeWhenYouNeedToSetSail:
	.string "MR. BRINEY: You just tell me whenever\n"
	.string "you need to set sail again!$"

DewfordTown_Text_GettingItchToFish:
	.string "This is a renowned fishing spot.\n"
	.string "Are you getting the itch to fish?$"

DewfordTown_Text_GiveYouOneOfMyRods:
	.string "I hear you, and I like what\n"
	.string "you're saying!\p"
	.string "I'll give you one of my fishing RODS.$"

DewfordTown_Text_ThrowInFishingAdvice:
	.string "And, as an added bonus, I'll even throw\n"
	.string "in a little fishing advice!\p"
	.string "First, you want to face the water,\n"
	.string "then use the ROD.\p"
	.string "Focus your mind…\n"
	.string "If you get a bite, pull on the ROD.\p"
	.string "Sometimes you can snag something\n"
	.string "immediately, but with bigger catches,\l"
	.string "you need to time the pulls on your ROD\l"
	.string "to haul them in.$"

DewfordTown_Text_ThatsTooBadThen:
	.string "Oh, is that so?\n"
	.string "That's too bad, then.$"

DewfordTown_Text_HowsYourFishing:
	.string "Yo!\n"
	.string "How's your fishing?$"

DewfordTown_Text_GreatHaulInSomeBigOnes:
	.string "Is that right! That's great!\n"
	.string "Haul in some big ones!$"

DewfordTown_Text_FishingAdvice:
	.string "Oh, hey, don't get down on yourself!\n"
	.string "I'll give you a little fishing advice.\p"
	.string "First, you want to face the water,\n"
	.string "then use the ROD.\p"
	.string "Focus your mind…\n"
	.string "If you get a bite, pull the ROD.\p"
	.string "Sometimes you can snag something\n"
	.string "immediately, but with bigger catches,\l"
	.string "you need to time the pulls on your ROD\l"
	.string "to haul them in.$"

DewfordTown_Text_XIsTheBiggestHappeningThingRight:
	.string "I like what's hip, happening, and trendy.\n"
	.string "I'm always checking it out.\p"
	.string "Listen, have you heard about this new\n"
	.string "“{STR_VAR_1}”?\p"
	.string "That's right!\n"
	.string "Of course you know!\p"
	.string "I mean, sheesh,\n"
	.string "“{STR_VAR_1}”…\l"
	.string "It's the hottest thing in cool!\p"
	.string "Wherever you're from,\n"
	.string "“{STR_VAR_1}”\l"
	.string "is the biggest happening thing, right?$"

DewfordTown_Text_TellMeWhatsNewAndIn:
	.string "Hunh?\n"
	.string "It's not the hip and happening thing?\p"
	.string "Well, hey, you have to tell me,\n"
	.string "what's new and what's “in”?$"

DewfordTown_Text_OfCourseIKnowAboutThat:
	.string "Hunh?\n"
	.string "“{STR_VAR_2}”?\p"
	.string "… …\p"
	.string "…Uh… Yeah! That's right!\n"
	.string "Yeah, I knew that! Knew it all along!\p"
	.string "Of course I know about that!\n"
	.string "“{STR_VAR_2},” right?\p"
	.string "Yeah, that's it, it's there!\n"
	.string "Isn't “{STR_VAR_2}”\l"
	.string "the coolest, or what?\p"
	.string "It's the hippest thing in hip.\n"
	.string "You think I'd not know about it?\p"
	.string "“{STR_VAR_1}”…\n"
	.string "It's, like, so five minutes ago.\p"
	.string "Now, “{STR_VAR_2}” is\n"
	.string "what's vital and in tune with the times!$"

DewfordTown_Text_XHuhIThinkYIsCool:
	.string "Hmm…\n"
	.string "“{STR_VAR_2},” huh?\p"
	.string "But personally, I think\n"
	.string "“{STR_VAR_1}”\l"
	.string "is what's real in cool.$"

DewfordTown_Text_HearOfAnyTrendsComeShareWithMe:
	.string "Well, if you hear of any happening new\n"
	.string "trends, come share them with me, okay?$"

DewfordTown_Text_YeahDefinitionOfInRightNow:
	.string "Yeah, absolutely right!\p"
	.string "“{STR_VAR_1}” is the\n"
	.string "definition of “in” right now.$"

DewfordTown_OnLoad::
	return


DewfordTown_EventScript_OceanWoman::
	lock
	faceplayer
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	msgbox DewfordTown_EventScript_OceanWoman_Text_0
	closemessage
	waitmovement 0
	applymovement 1, WomanLookUp
	waitmovement 0
	release
	end


DewfordTown_EventScript_LastWinstrate::
	lock
	faceplayer
	msgbox DewfordTown_EventScript_LastWinstrate_Text_0
	release
	end


DewfordTown_EventScript_PushyMan::
	lockall
	special SpawnCameraObject
	applymovement OBJ_EVENT_ID_CAMERA, CameraUpTwo
	waitmovement 0
	addobject 19
	waitmovement 0
	applymovement 18, ManWalkInPlaceUp
	waitmovement 0
	msgbox DewfordTown_EventScript_PushyMan_Text_0
	waitmovement 0
	closemessage
	delay 30
	playse SE_PIN
	opendoor 42, 41
	waitdooranim
	msgbox DewfordTown_EventScript_PushyMan_Text_1
	closemessage
	playbgm MUS_DP_ENCOUNTER_INTENSE, FALSE
	applymovement 18, WalkLeft
	waitmovement 0
	applymovement 18, FaceRight
	waitmovement 0
	applymovement 18, Common_Movement_ExclamationMark
	waitmovement 0
	setobjectxy 19, 42, 41
	applymovement 19, WalkDown
	waitmovement 0
	closedoor 42, 41
	waitdooranim
	delay 30
	msgbox DewfordTown_EventScript_PushyMan_Text_2
	closemessage
	waitmovement 0
	applymovement 24, Common_Movement_ExclamationMark
	applymovement 27, Common_Movement_ExclamationMark
	applymovement 22, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement 24, Common_Movement_FaceLeft
	waitmovement 0
	applymovement 22, Common_Movement_FaceDown
	waitmovement 0
	applymovement 20, Common_Movement_FaceLeft
	waitmovement 0
	applymovement 26, Common_Movement_FaceRight
	waitmovement 0
	applymovement 20, Common_Movement_FaceDown
	waitmovement 0
	delay 120
	applymovement 22, Common_Movement_FaceOriginalDirection
	applymovement 24, Common_Movement_FaceOriginalDirection
	applymovement 20, Common_Movement_FaceOriginalDirection
	applymovement 26, Common_Movement_FaceOriginalDirection
	applymovement 20, Common_Movement_FaceOriginalDirection
	waitmovement 0
	applymovement 19, Common_Movement_WalkInPlaceFasterDown
	waitmovement 0
	msgbox DewfordTown_EventScript_PushyMan_Text_3
	closemessage
	delay 15
	applymovement OBJ_EVENT_ID_CAMERA, CameraDownTwo
	waitmovement 0
	special RemoveCameraObject
	fadescreenswapbuffers FADE_TO_BLACK
	playse SE_EXIT
	delay 120
	removeobject 18
	removeobject 20
	removeobject 21
	removeobject 22
	removeobject 23
	removeobject 24
	removeobject 26
	removeobject 27
	setflag FLAG_UNUSED_0x02E
	fadescreenswapbuffers FADE_FROM_BLACK
	fadedefaultbgm
	waitmovement 0
	addobject 32
	waitmovement 0
	addobject 33
	waitmovement 0
	addobject 34
	waitmovement 0
	setobjectxyperm 19, 42, 42
	waitmovement 0
	setobjectxyperm 32, 15, 37
	waitmovement 0
	setobjectxyperm 34, 14, 37
	waitmovement 0
	setobjectxyperm 33, 15, 36
	waitmovement 0
	setobjectmovementtype 32, MOVEMENT_TYPE_WALK_IN_PLACE_LEFT
	waitmovement 0
	setobjectmovementtype 34, MOVEMENT_TYPE_WALK_IN_PLACE_RIGHT
	waitmovement 0
	setobjectmovementtype 33, MOVEMENT_TYPE_WALK_IN_PLACE_DOWN
	waitmovement 0
	setvar VAR_DEWFORD_TOWN_STATE, 1
	releaseall
	end


DewfordTown_EventScript_Ursaring::
	lock
	faceplayer
	playmoncry SPECIES_GEODUDE, CRY_MODE_NORMAL
	waitmoncry
	msgbox DewfordTown_EventScript_Ursaring_Text_0
	setwildbattle SPECIES_GEODUDE, 18, ITEM_NONE, SPECIES_LUXIO, 18, ITEM_NONE
	dowildbattle
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	waitmovement 0
	delay 15
	addvar VAR_UNUSED_0x40F8, 1
	setobjectxyperm 19, 42, 42
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 33
	removeobject 34
	playse SE_EXIT
	fadescreenswapbuffers FADE_FROM_BLACK
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	fadedefaultbgm
	waitmovement 0
	delay 15
	applymovement 32, UpOneLeftOne
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, Common_Movement_FaceRight
	waitmovement 0
	playmoncry SPECIES_GYARADOS, CRY_MODE_NORMAL
	waitmoncry
	msgbox DewfordTown_EventScript_Ursaring_Text_1
	closemessage
	applymovement 32, RightEight
	waitmovement 0
	removeobject 32
	setflag FLAG_UNUSED_0x02F
	compare VAR_UNUSED_0x40F8, 3
	goto_if_eq DewfordTown_EventScript_Ursaring_2
DewfordTown_EventScript_Ursaring_1:
	waitmovement 0
	releaseall
	end

DewfordTown_EventScript_Ursaring_2:
	removeobject 19
	goto DewfordTown_EventScript_Ursaring_1


DewfordTown_EventScript_Manectric::
	lock
	faceplayer
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	playmoncry SPECIES_LUXIO, CRY_MODE_NORMAL
	waitmoncry
	msgbox DewfordTown_EventScript_Ursaring_Text_0
	setwildbattle SPECIES_GEODUDE, 18, ITEM_NONE, SPECIES_LUXIO, 18, ITEM_NONE
	dowildbattle
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	waitmovement 0
	delay 15
	addvar VAR_UNUSED_0x40F8, 1
	setobjectxyperm 19, 42, 42
	fadescreenswapbuffers FADE_TO_BLACK
	removeobject 33
	removeobject 34
	playse SE_EXIT
	fadescreenswapbuffers FADE_FROM_BLACK
	setflag FLAG_SAFE_FOLLOWER_MOVEMENT
	fadedefaultbgm
	waitmovement 0
	delay 15
	applymovement 32, UpOneLeftOne
	waitmovement 0
	applymovement OBJ_EVENT_ID_PLAYER, FaceRight
	waitmovement 0
	playmoncry SPECIES_GYARADOS, CRY_MODE_NORMAL
	waitmoncry
	msgbox DewfordTown_EventScript_Ursaring_Text_1
	closemessage
	applymovement 32, RightEight
	waitmovement 0
	removeobject 32
	setflag FLAG_UNUSED_0x02F
	compare VAR_UNUSED_0x40F8, 3
	goto_if_eq DewfordTown_EventScript_Manectric_2
DewfordTown_EventScript_Manectric_1:
	releaseall
	end

DewfordTown_EventScript_Manectric_2:
	removeobject 19
	goto DewfordTown_EventScript_Manectric_1


DewfordTown_EventScript_Charmander::
	lock
	goto_if_unset FLAG_SYS_POKEMON_GET, DewfordTown_EventScript_Charmander_2
	msgbox NoMore
DewfordTown_EventScript_Charmander_1:
	release
	end

DewfordTown_EventScript_Charmander_2:
	showmonpic SPECIES_MONFERNO, 10, 3
	msgbox DewfordTown_EventScript_Charmander_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_EventScript_Charmander_5
	hidemonpic
	msgbox Dewf_NotChosen
	goto DewfordTown_EventScript_Charmander_1

DewfordTown_EventScript_Charmander_5:
	givemon SPECIES_MONFERNO, 18
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq DewfordTown_EventScript_Charmander_8
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq DewfordTown_EventScript_Charmander_9
	hidemonpic
	msgbox DewfordTown_EventScript_Charmander_Text_3
	goto DewfordTown_EventScript_Charmander_1

DewfordTown_EventScript_Charmander_8:
	playfanfare MUS_OBTAIN_ITEM
	msgbox DewfordTown_EventScript_Charmander_Text_1
	callnative UpdateFollowingPokemon
	removeobject 8
	setflag FLAG_UNUSED_0x020
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_BADGE01_GET
	setvar VAR_UNUSED_0x40F9, 0
	setflag FLAG_UNUSED_0x02D
	call NicknamePartyMonDewf
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
	fadescreenswapbuffers FADE_TO_BLACK
	delay 60
	removeobject 6
	removeobject 7
	playse SE_M_SURF
	fadedefaultbgm
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox DewfordTown_EventScript_Charmander_Text_2
	goto DewfordTown_EventScript_Charmander_1

DewfordTown_EventScript_Charmander_9:
	playfanfare MUS_OBTAIN_ITEM
	msgbox DewfordTown_EventScript_Charmander_Text_1
	removeobject 8
	setflag FLAG_UNUSED_0x020
	setflag FLAG_SYS_POKEMON_GET
	setflag FLAG_BADGE01_GET
	setvar VAR_UNUSED_0x40F9, 0
	call NicknameBoxMonDewf
	goto DewfordTown_EventScript_Charmander_1


DewfordTown_EventScript_Mudkip::
	lock
	goto_if_unset FLAG_SYS_POKEMON_GET, DewfordTown_EventScript_Mudkip_2
	msgbox NoMore
DewfordTown_EventScript_Mudkip_1:
	release
	end

DewfordTown_EventScript_Mudkip_2:
	showmonpic SPECIES_MARSHTOMP, 10, 3
	msgbox DewfordTown_EventScript_Mudkip_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_EventScript_Mudkip_5
	hidemonpic
	msgbox Dewf_NotChosen
	goto DewfordTown_EventScript_Mudkip_1

DewfordTown_EventScript_Mudkip_5:
	givemon SPECIES_MARSHTOMP, 18
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq DewfordTown_EventScript_Mudkip_8
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq DewfordTown_EventScript_Mudkip_9
	hidemonpic
	msgbox DewfordTown_EventScript_Charmander_Text_3
	goto DewfordTown_EventScript_Mudkip_1

DewfordTown_EventScript_Mudkip_8:
	playfanfare MUS_OBTAIN_ITEM
	msgbox DewfordTown_EventScript_Mudkip_Text_1
	callnative UpdateFollowingPokemon
	setflag FLAG_SYS_POKEMON_GET
	removeobject 7
	setflag FLAG_UNUSED_0x021
	setflag FLAG_BADGE01_GET
	setvar VAR_UNUSED_0x40F9, 0
	setflag FLAG_UNUSED_0x02D
	call NicknamePartyMonDewf
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
	fadescreenswapbuffers FADE_TO_BLACK
	delay 60
	removeobject 6
	removeobject 8
	playse SE_M_SURF
	fadedefaultbgm
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox DewfordTown_EventScript_Charmander_Text_2
	goto DewfordTown_EventScript_Mudkip_1

DewfordTown_EventScript_Mudkip_9:
	playfanfare MUS_OBTAIN_ITEM
	msgbox DewfordTown_EventScript_Mudkip_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 7
	setflag FLAG_UNUSED_0x021
	setflag FLAG_BADGE01_GET
	setvar VAR_UNUSED_0x40F9, 0
	call NicknameBoxMonDewf
	goto DewfordTown_EventScript_Mudkip_1


DewfordTown_EventScript_Turtwig::
	lock
	goto_if_unset FLAG_SYS_POKEMON_GET, DewfordTown_EventScript_Turtwig_2
	msgbox NoMore
DewfordTown_EventScript_Turtwig_1:
	release
	end

DewfordTown_EventScript_Turtwig_2:
	showmonpic SPECIES_BAYLEEF, 10, 3
	msgbox DewfordTown_EventScript_Turtwig_Text_0, MSGBOX_YESNO
	compare VAR_RESULT, YES
	goto_if_eq DewfordTown_EventScript_Turtwig_5
	hidemonpic
	msgbox Dewf_NotChosen
	goto DewfordTown_EventScript_Turtwig_1

DewfordTown_EventScript_Turtwig_5:
	givemon SPECIES_BAYLEEF, 18
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq DewfordTown_EventScript_Turtwig_8
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq DewfordTown_EventScript_Turtwig_9
	hidemonpic
	msgbox DewfordTown_EventScript_Charmander_Text_3
	goto DewfordTown_EventScript_Turtwig_1

DewfordTown_EventScript_Turtwig_8:
	playfanfare MUS_OBTAIN_ITEM
	msgbox DewfordTown_EventScript_Turtwig_Text_1
	callnative UpdateFollowingPokemon
	setflag FLAG_SYS_POKEMON_GET
	removeobject 6
	setflag FLAG_UNUSED_0x022
	setflag FLAG_BADGE01_GET
	setvar VAR_UNUSED_0x40F9, 0
	setflag FLAG_UNUSED_0x02D
	call NicknamePartyMonDewf
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
	fadescreenswapbuffers FADE_TO_BLACK
	delay 60
	removeobject 7
	removeobject 8
	playse SE_M_SURF
	fadedefaultbgm
	fadescreenswapbuffers FADE_FROM_BLACK
	msgbox DewfordTown_EventScript_Charmander_Text_2
	goto DewfordTown_EventScript_Turtwig_1

DewfordTown_EventScript_Turtwig_9:
	playfanfare MUS_OBTAIN_ITEM
	msgbox DewfordTown_EventScript_Turtwig_Text_1
	setflag FLAG_SYS_POKEMON_GET
	removeobject 6
	setflag FLAG_UNUSED_0x022
	setflag FLAG_BADGE01_GET
	setvar VAR_UNUSED_0x40F9, 0
	call NicknameBoxMonDewf
	goto DewfordTown_EventScript_Turtwig_1


NicknamePartyMonDewf::
	msgbox NicknamePartyMonDewf_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMonDewf_1
	return

NicknamePartyMonDewf_1:
	call Common_EventScript_GetGiftMonPartySlot
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMonDewf::
	msgbox NicknamePartyMonDewf_Text_0, MSGBOX_YESNO
	hidemonpic
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMonDewf_2
NicknameBoxMonDewf_1:
	msgbox NicknameBoxMonDewf_Text_0
	return

NicknameBoxMonDewf_2:
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMonDewf_1


DewfordTown_EventScript_Stormy::
	lock
	faceplayer
	compare VAR_UNUSED_0x40F8, 0
	goto_if_eq DewfordTown_EventScript_Stormy_2
	compare VAR_UNUSED_0x40F8, 1
	goto_if_eq DewfordTown_EventScript_Stormy_3
	compare VAR_UNUSED_0x40F8, 2
	goto_if_eq DewfordTown_EventScript_Stormy_4
	compare VAR_UNUSED_0x40F8, 3
	goto_if_eq DewfordTown_EventScript_Stormy_5
DewfordTown_EventScript_Stormy_1:
	release
	end

DewfordTown_EventScript_Stormy_2:
	msgbox DewfordTown_EventScript_Stormy_Text_0
	goto DewfordTown_EventScript_Stormy_1

DewfordTown_EventScript_Stormy_3:
	msgbox DewfordTown_EventScript_Stormy_Text_1
	goto DewfordTown_EventScript_Stormy_1

DewfordTown_EventScript_Stormy_4:
	msgbox DewfordTown_EventScript_Stormy_Text_2
	goto DewfordTown_EventScript_Stormy_1

DewfordTown_EventScript_Stormy_5:
	msgbox DewfordTown_EventScript_Stormy_Text_3
	goto DewfordTown_EventScript_Stormy_1


WomanLookUp:
	face_up
	step_end

ManWalkInPlaceUp:
	walk_in_place_up
	walk_in_place_up
	walk_in_place_up
	walk_in_place_fast_up
	step_end

WalkLeft:
	walk_left
	step_end

FaceRight:
	face_right
	step_end

WalkDown:
	walk_down
	step_end

CameraUpTwo:
	walk_slow_diag_northwest
	walk_up
	step_end

CameraDownTwo:
	walk_slow_diag_southeast
	walk_down
	step_end

RightEight:
	walk_right
	walk_right
	walk_down
	walk_right
	walk_down
	walk_right
	walk_right
	walk_right
	walk_right
	walk_right
	step_end

UpOneLeftOne:
	walk_up
	face_left
	step_end

DewfordTown_EventScript_Aqua::
	lock
	faceplayer
	goto_if_unset FLAG_UNUSED_0x031, DewfordTown_EventScript_Aqua_2
	goto_if_set FLAG_UNUSED_0x031, DewfordTown_EventScript_Aqua_3
DewfordTown_EventScript_Aqua_1:
	release
	end

DewfordTown_EventScript_Aqua_2:
	msgbox DewfordTown_EventScript_Aqua_Text_0
	giveitem ITEM_KAYAK
	setflag FLAG_UNUSED_0x031
	closemessage
	waitmovement 0
	applymovement 25, Common_Movement_FaceDown
	waitmovement 0
	goto DewfordTown_EventScript_Aqua_1

DewfordTown_EventScript_Aqua_3:
	msgbox DewfordTown_EventScript_Aqua_Text_1
	closemessage
	waitmovement 0
	applymovement 25, Common_Movement_FaceDown
	waitmovement 0
	goto DewfordTown_EventScript_Aqua_1


DewfordTown_EventScript_Corphish::
	lock
	faceplayer
	playmoncry SPECIES_CORPHISH, CRY_MODE_NORMAL
	waitmoncry
	msgbox DewfordTown_EventScript_Corphish_Text_0
	applymovement 12, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


DewfordTown_EventScript_FatMan::
	lock
	faceplayer
	msgbox DewfordTown_EventScript_FatMan_Text_0
	release
	end


DewfordTown_EventScript_FamilyMan::
	lock
	faceplayer
	msgbox DewfordTown_EventScript_FamilyMan_Text_0
	release
	end


DewfordTown_EventScript_Beauty::
	lock
	faceplayer
	msgbox DewfordTown_EventScript_Beauty_Text_0
	release
	end


DewfordTown_EventScript_Fisher::
	lock
	faceplayer
	msgbox DewfordTown_EventScript_Fisher_Text_0
	closemessage
	applymovement 39, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


DewfordTown_EventScript_Hiker::
	lock
	faceplayer
	msgbox DewfordTown_EventScript_Hiker_Text_0
	release
	end


DewfordTown_EventScript_Boy::
	lock
	faceplayer
	msgbox DewfordTown_EventScript_Boy_Text_0
	release
	end


DewfordTown_EventScript_WomanInLine::
	lock
	faceplayer
	msgbox DewfordTown_EventScript_WomanInLine_Text_0
	closemessage
	applymovement 20, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


DewfordTown_EventScript_Boy1InLine::
	lock
	faceplayer
	msgbox DewfordTown_EventScript_Boy1InLine_Text_0
	closemessage
	applymovement 27, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


DewfordTown_EventScript_Boy2InLine::
	lock
	faceplayer
	msgbox DewfordTown_EventScript_Boy2InLine_Text_0
	closemessage
	applymovement 21, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


DewfordTown_EventScript_Boy3InLine::
	lock
	faceplayer
	msgbox DewfordTown_EventScript_Boy3InLine_Text_0
	closemessage
	applymovement 26, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


DewfordTown_EventScript_SailorInLine::
	lock
	faceplayer
	msgbox DewfordTown_EventScript_SailorInLine_Text_0
	closemessage
	applymovement 22, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


DewfordTown_EventScript_OceanWoman_Text_0:
	.string "Seaspray Town has always been a\n"
	.string "vacation destination for people\l"
	.string "across Ecodia.\p"
	.string "Now, due to rising sea levels, we have\n"
	.string "been cut off from the rest of the\l"
	.string "region.\p"
	.string "This path was our only way out!$"

DewfordTown_EventScript_LastWinstrate_Text_0:
	.string "Thank you again for giving us something\n"
	.string "to smile about.\p"
	.string "Good luck on the rest of your journey!$"

DewfordTown_EventScript_PushyMan_Text_0:
	.string "I've waited long enough, I want to get\n"
	.string "my family to safety.\p"
	.string "STORMY, WHERE ARE YOU?$"

DewfordTown_EventScript_PushyMan_Text_1:
	.string "You want me? Here I am!$"

DewfordTown_EventScript_PushyMan_Text_2:
	.string "Stormy: My Pokémon are missing! I can't\n"
	.string "fly anyone out of here before I get\l"
	.string "them back!$"

DewfordTown_EventScript_PushyMan_Text_3:
	.string "Stormy: Someone will have to find them\n"
	.string "before I can continue the evacuation,\l"
	.string "and before I reopen the Gym!$"

DewfordTown_EventScript_Ursaring_Text_0:
	.string "The Pokémon attacked!$"

DewfordTown_EventScript_Ursaring_Text_1:
	.string "The Gyarados thanked you!$"

DewfordTown_EventScript_Charmander_Text_0:
	.string "It's a Monferno!\l"
	.string "Do you want to pick up Monferno?$"

DewfordTown_EventScript_Charmander_Text_1:
	.string "Recieved Monferno!$"

DewfordTown_EventScript_Charmander_Text_2:
	.string "The other Pokémon were swept out to\n"
	.string "sea...$"

DewfordTown_EventScript_Charmander_Text_3:
	.string "No more room.$"

DewfordTown_EventScript_Mudkip_Text_0:
	.string "It's a Marshtomp!\l"
	.string "Do you want to pick up Marshtomp?$"

DewfordTown_EventScript_Mudkip_Text_1:
	.string "Recieved Marshtomp!$"

DewfordTown_EventScript_Turtwig_Text_0:
	.string "It's a Bayleef!\l"
	.string "Do you want to pick up Bayleef?$"

DewfordTown_EventScript_Turtwig_Text_1:
	.string "Recieved Bayleef!$"

NicknamePartyMonDewf_Text_0:
	.string "Give a nickname?$"

NicknameBoxMonDewf_Text_0:
	.string "Transferred to PC$"

DewfordTown_EventScript_Stormy_Text_0:
	.string "I don't know where my Pokémon are, but\n"
	.string "they must be somewhere in town.\p"
	.string "I won't reopen the Gym until they're\n"
	.string "found!$"

DewfordTown_EventScript_Stormy_Text_1:
	.string "I am still missing two Pokémon!$"

DewfordTown_EventScript_Stormy_Text_2:
	.string "Thank you for finding two of my\n"
	.string "Pokémon, but there's one left!$"

DewfordTown_EventScript_Stormy_Text_3:
	.string "You found them all!$"

DewfordTown_EventScript_Aqua_Text_0:
	.string "My home got flooded, I've lost\n"
	.string "everything.\p"
	.string "This is my last possession, you can have\n"
	.string "it.$"

DewfordTown_EventScript_Aqua_Text_1:
	.string "That kayak isn't seaworthy, trust me,\n"
	.string "I've tried.\p"
	.string "Maybe you can use it for something\n"
	.string "else?$"

DewfordTown_EventScript_Corphish_Text_0:
	.string "Cor cor!$"

DewfordTown_EventScript_FatMan_Text_0:
	.string "Technology is incredible!\p"
	.string "Humans have destroyed the natural\n"
	.string "environment, and now my beautiful town\l"
	.string "is flooded!$"

DewfordTown_EventScript_FamilyMan_Text_0:
	.string "My family got to the top of the waiting\n"
	.string "list for evacuation, but Stormy could\l"
	.string "only take three of us.\p"
	.string "I opted to stay behind, but now I don't\n"
	.string "know when I'll see them again.$"

DewfordTown_EventScript_Beauty_Text_0:
	.string "Seaspray Town used to have the most\n"
	.string "beautiful beaches, full of glittering\l"
	.string "sand.\p"
	.string "This truly was the best place to soak\n"
	.string "up the sun.\p"
	.string "Unfortunately, that's all in the past.$"

DewfordTown_EventScript_Fisher_Text_0:
	.string "The fishing here is great!$"

DewfordTown_EventScript_Hiker_Text_0:
	.string "I was hoping to scale these mountains\n"
	.string "to escape the floods, but I don't think\l"
	.string "that's possible.\p"
	.string "I guess I'll have to wait my turn to be\n"
	.string "evacuated, like everyone else.$"

DewfordTown_EventScript_Boy_Text_0:
	.string "Stormy handles all of the evacuations\n"
	.string "here. She used to take people for\l"
	.string "joyrides on her Pokémon to see the\l"
	.string "tropical scenery, but after the League\l"
	.string "declared a state of emergency, she\l"
	.string "began escorting people further inland.\p"
	.string "I hope it will be my turn soon!$"

DewfordTown_EventScript_WomanInLine_Text_0:
	.string "I want to leave!$"

DewfordTown_EventScript_Boy1InLine_Text_0:
	.string "I'm mostly here to support my mom. I'm\n"
	.string "sure we'll all get out of here\l"
	.string "eventually.$"

DewfordTown_EventScript_Boy2InLine_Text_0:
	.string "It's so cold and wet here!$"

DewfordTown_EventScript_Boy3InLine_Text_0:
	.string "I have to be strong for my little\n"
	.string "brother. He doesn't deserve to have to\l"
	.string "live here.$"

DewfordTown_EventScript_SailorInLine_Text_0:
	.string "Don't get me wrong, I love the ocean!\n"
	.string "But this is just too much.$"

Dewf_NotChosen::
	.string "You did not choose the Pokémon.$"

NoMore::
	.string "Better not be greedy!$"
