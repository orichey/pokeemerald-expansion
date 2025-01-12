.set LOCALID_RIVAL, 2

Route103_MapScripts::
	.byte 0

Route103_OnTransition:
	call Common_EventScript_SetupRivalGfxId
	call ProfBirch_EventScript_UpdateLocation
	end

Route103_OnLoad:
	call_if_set FLAG_SYS_GAME_CLEAR, Route103_EventScript_OpenAlteringCave
	end

Route103_EventScript_OpenAlteringCave::
	setmetatile 45, 5, METATILE_General_CaveEntrance_Top, TRUE
	setmetatile 45, 6, METATILE_General_CaveEntrance_Bottom, FALSE
	return

Route103_EventScript_Rival::
	lockall
	checkplayergender
	goto_if_eq VAR_RESULT, MALE, Route103_EventScript_RivalMay
	goto_if_eq VAR_RESULT, FEMALE, Route103_EventScript_RivalBrendan
	end

Route103_EventScript_RivalMay::
	msgbox Route103_Text_MayRoute103Pokemon, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_MAY, TRUE
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	msgbox Route103_Text_MayLetsBattle, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, Route103_EventScript_StartMayBattleTreecko
	case 1, Route103_EventScript_StartMayBattleTorchic
	case 2, Route103_EventScript_StartMayBattleMudkip
	end

Route103_EventScript_RivalBrendan::
	msgbox Route103_Text_BrendanRoute103Pokemon, MSGBOX_DEFAULT
	closemessage
	playbgm MUS_ENCOUNTER_BRENDAN, TRUE
	applymovement LOCALID_RIVAL, Common_Movement_FacePlayer
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_ExclamationMark
	waitmovement 0
	applymovement LOCALID_RIVAL, Common_Movement_Delay48
	waitmovement 0
	msgbox Route103_Text_BrendanLetsBattle, MSGBOX_DEFAULT
	switch VAR_STARTER_MON
	case 0, Route103_EventScript_StartBrendanBattleTreecko
	case 1, Route103_EventScript_StartBrendanBattleTorchic
	case 2, Route103_EventScript_StartBrendanBattleMudkip
	end

Route103_EventScript_StartMayBattleTreecko::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TREECKO, Route103_Text_MayDefeated
	goto Route103_EventScript_AfterMayBattle
	end

Route103_EventScript_StartMayBattleTorchic::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_TORCHIC, Route103_Text_MayDefeated
	goto Route103_EventScript_AfterMayBattle
	end

Route103_EventScript_StartMayBattleMudkip::
	trainerbattle_no_intro TRAINER_MAY_ROUTE_103_MUDKIP, Route103_Text_MayDefeated
	goto Route103_EventScript_AfterMayBattle
	end

Route103_EventScript_StartBrendanBattleTreecko::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TREECKO, Route103_Text_BrendanDefeated
	goto Route103_EventScript_AfterBrendanBattle
	end

Route103_EventScript_StartBrendanBattleTorchic::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_TORCHIC, Route103_Text_BrendanDefeated
	goto Route103_EventScript_AfterBrendanBattle
	end

Route103_EventScript_StartBrendanBattleMudkip::
	trainerbattle_no_intro TRAINER_BRENDAN_ROUTE_103_MUDKIP, Route103_Text_BrendanDefeated
	goto Route103_EventScript_AfterBrendanBattle
	end

Route103_EventScript_AfterMayBattle::
	msgbox Route103_Text_MayTimeToHeadBack, MSGBOX_DEFAULT
	goto Route103_EventScript_RivalExit
	end

Route103_EventScript_AfterBrendanBattle::
	msgbox Route103_Text_BrendanTimeToHeadBack, MSGBOX_DEFAULT
	goto Route103_EventScript_RivalExit
	end

Route103_EventScript_RivalExit::
	closemessage
	switch VAR_FACING
	case DIR_SOUTH, Route103_EventScript_RivalExitFacingSouth
	case DIR_NORTH, Route103_EventScript_RivalExitFacingNorth
	case DIR_WEST, Route103_EventScript_RivalExitFacingEastOrWest
	case DIR_EAST, Route103_EventScript_RivalExitFacingEastOrWest
	end

Route103_EventScript_RivalExitFacingNorth::
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingNorth
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth1
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExitFacingNorth2
	waitmovement 0
	goto Route103_EventScript_RivalEnd
	end

Route103_EventScript_RivalExitFacingEastOrWest::
	applymovement OBJ_EVENT_ID_PLAYER, Route103_Movement_WatchRivalExitFacingEastOrWest
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
	waitmovement 0
	goto Route103_EventScript_RivalEnd
	end

Route103_EventScript_RivalExitFacingSouth::
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit1
	waitmovement 0
	playse SE_LEDGE
	applymovement LOCALID_RIVAL, Route103_Movement_RivalExit2
	waitmovement 0
	goto Route103_EventScript_RivalEnd
	end

Route103_EventScript_RivalEnd::
	removeobject LOCALID_RIVAL
	setvar VAR_BIRCH_LAB_STATE, 4
	clearflag FLAG_HIDE_LITTLEROOT_TOWN_BIRCHS_LAB_RIVAL
	setflag FLAG_DEFEATED_RIVAL_ROUTE103
	setvar VAR_OLDALE_RIVAL_STATE, 1
	clearflag FLAG_HIDE_OLDALE_TOWN_RIVAL
	savebgm MUS_DUMMY
	fadedefaultbgm
	releaseall
	end

Route103_Movement_RivalExitFacingNorth1:
	walk_left
	walk_down
	step_end

Route103_Movement_RivalExitFacingNorth2:
	jump_2_down
	delay_16
	walk_down
	walk_down
	walk_down
	walk_down
	step_end

Route103_Movement_WatchRivalExitFacingNorth:
	delay_16
	delay_4
	walk_in_place_faster_left
	delay_16
	walk_in_place_faster_down
	step_end

Route103_Movement_RivalExit1:
	walk_down
	step_end

Route103_Movement_RivalExit2:
	jump_2_down
	delay_16
	walk_down
	walk_down
	walk_down
	step_end

Route103_Movement_WatchRivalExitFacingEastOrWest:
	delay_16
	walk_in_place_faster_down
	step_end

Route103_EventScript_Boy::
	msgbox Route103_Text_ShouldHaveBroughtPotion, MSGBOX_NPC
	end

Route103_EventScript_Man::
	msgbox Route103_Text_ShortcutToOldale, MSGBOX_NPC
	end

Route103_EventScript_RouteSign::
	msgbox Route103_Text_RouteSign, MSGBOX_SIGN
	end

Route103_EventScript_Daisy::
	trainerbattle_single TRAINER_DAISY, Route103_Text_DaisyIntro, Route103_Text_DaisyDefeated
	msgbox Route103_Text_DaisyPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Amy::
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyIntro, Route103_Text_AmyDefeated, Route103_Text_AmyNotEnoughPokemon, Route102_EventScript_AmyRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_AmyRematch
	msgbox Route103_Text_AmyPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_AmyRegisterMatchCallAfterBattle::
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_AMY_AND_LIV_1
	release
	end

Route102_EventScript_AmyRematch::
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_AmyRematchIntro, Route103_Text_AmyRematchDefeated, Route103_Text_AmyRematchNotEnoughPokemon
	msgbox Route103_Text_AmyRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Liv::
	trainerbattle_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivIntro, Route103_Text_LivDefeated, Route103_Text_LivNotEnoughPokemon, Route102_EventScript_LivRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route102_EventScript_LivRematch
	msgbox Route103_Text_LivPostBattle, MSGBOX_AUTOCLOSE
	end

Route102_EventScript_LivRegisterMatchCallAfterBattle::
	msgbox Route103_Text_AmyLivRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_AMY_AND_LIV_1
	release
	end

Route102_EventScript_LivRematch::
	trainerbattle_rematch_double TRAINER_AMY_AND_LIV_1, Route103_Text_LivRematchIntro, Route103_Text_LivRematchDefeated, Route103_Text_LivRematchNotEnoughPokemon
	msgbox Route103_Text_LivRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Andrew::
	trainerbattle_single TRAINER_ANDREW, Route103_Text_AndrewIntro, Route103_Text_AndrewDefeated
	msgbox Route103_Text_AndrewPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Miguel::
	trainerbattle_single TRAINER_MIGUEL_1, Route103_Text_MiguelIntro, Route103_Text_MiguelDefeated, Route102_EventScript_MiguelRegisterMatchCallAfterBattle
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, Route103_EventScript_MiguelRematch
	msgbox Route103_Text_MiguelPostBattle, MSGBOX_DEFAULT
	release
	end

Route102_EventScript_MiguelRegisterMatchCallAfterBattle::
	special PlayerFaceTrainerAfterBattle
	waitmovement 0
	msgbox Route103_Text_MiguelRegister, MSGBOX_DEFAULT
	register_matchcall TRAINER_MIGUEL_1
	release
	end

Route103_EventScript_MiguelRematch::
	trainerbattle_rematch TRAINER_MIGUEL_1, Route103_Text_MiguelRematchIntro, Route103_Text_MiguelRematchDefeated
	msgbox Route103_Text_MiguelRematchPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Marcos::
	trainerbattle_single TRAINER_MARCOS, Route103_Text_MarcosIntro, Route103_Text_MarcosDefeated
	msgbox Route103_Text_MarcosPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Rhett::
	trainerbattle_single TRAINER_RHETT, Route103_Text_RhettIntro, Route103_Text_RhettDefeated
	msgbox Route103_Text_RhettPostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Pete::
	trainerbattle_single TRAINER_PETE, Route103_Text_PeteIntro, Route103_Text_PeteDefeated
	msgbox Route103_Text_PetePostBattle, MSGBOX_AUTOCLOSE
	end

Route103_EventScript_Isabelle::
	trainerbattle_single TRAINER_ISABELLE, Route103_Text_IsabelleIntro, Route103_Text_IsabelleDefeated
	msgbox Route103_Text_IsabellePostBattle, MSGBOX_AUTOCLOSE
	end

Route103_Text_MayRoute103Pokemon:
	.string "MAY: Let's see… The POKéMON found\n"
	.string "on ROUTE 103 include…$"

Route103_Text_MayLetsBattle:
	.string "Oh, hi, {PLAYER}{KUN}!\p"
	.string "…Oh, I see, my dad gave you\n"
	.string "a POKéMON as a gift.\p"
	.string "Since we're here, let's have a quick\n"
	.string "battle!\p"
	.string "I'll give you a taste of what being\n"
	.string "a TRAINER is like.$"

Route103_Text_MayDefeated:
	.string "Wow! That's great!\n"
	.string "{PLAYER}{KUN}, you're pretty good!$"

Route103_Text_MayTimeToHeadBack:
	.string "MAY: I think I know why my dad has\n"
	.string "an eye out for you now.\p"
	.string "I mean, you just got that POKéMON,\n"
	.string "but it already likes you.\p"
	.string "You might be able to befriend any\n"
	.string "kind of POKéMON easily.\p"
	.string "Well, it's time to head back to\n"
	.string "the LAB.$"

Route103_Text_BrendanRoute103Pokemon:
	.string "BRENDAN: Okay, so it's this one and\n"
	.string "that one that live on ROUTE 103…$"

Route103_Text_BrendanLetsBattle:
	.string "Hey, it's {PLAYER}!\p"
	.string "…Oh, yeah, Dad gave you a POKéMON.\p"
	.string "Since we're here, how about a little\n"
	.string "battle?\p"
	.string "I'll teach you what being a TRAINER's\n"
	.string "about!$"

Route103_Text_BrendanDefeated:
	.string "Huh, {PLAYER}, you're not too shabby.$"

Route103_Text_BrendanTimeToHeadBack:
	.string "BRENDAN: I think I get it.\n"
	.string "I think I know why my dad has his eye\l"
	.string "out for you now.\p"
	.string "Look, your POKéMON already likes you,\n"
	.string "even though you just got it.\p"
	.string "{PLAYER}, I get the feeling that you\n"
	.string "could befriend any POKéMON with ease.\p"
	.string "We should head back to the LAB.$"

Route103_Text_ShouldHaveBroughtPotion:
	.string "My POKéMON is staggeringly tired…\n"
	.string "I should have brought a POTION…$"

Route103_Text_ShortcutToOldale:
	.string "If you cross the sea from here,\n"
	.string "it'll be a shortcut to OLDALE TOWN.\p"
	.string "Fufufu, that's useful, isn't it?$"

Route103_Text_RouteSign:
	.string "ROUTE 103\n"
	.string "{DOWN_ARROW} OLDALE TOWN$"

Route103_EventScript_WalkingYoungster::
	lock
	faceplayer
	msgbox Route103_EventScript_WalkingYoungster_Text_0
	release
	end


Route103_EventScript_HappyFisher::
	lock
	faceplayer
	msgbox Route103_EventScript_HappyFisher_Text_0
	closemessage
	applymovement 15, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


Route103_EventScript_ItemLooker::
	lock
	faceplayer
	msgbox Route103_EventScript_ItemLooker_Text_0
	closemessage
	applymovement 10, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


Route103_EventScript_RunningGirl::
	lock
	faceplayer
	msgbox Route103_EventScript_RunningGirl_Text_0
	closemessage
	applymovement 11, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


Route103_EventScript_RunningBoy::
	lock
	faceplayer
	msgbox Route103_EventScript_RunningBoy_Text_0
	closemessage
	applymovement 8, Common_Movement_FaceOriginalDirection
	waitmovement 0
	release
	end


Route103_EventScript_DoubleBattlePartOne::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_1, IntroText_Francis, LoseText_Francis
	msgbox PostBattle_OldCouple1, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route103_EventScript_DoubleBattlePartTwo::
	trainerbattle_single TRAINER_SAWYER_1, IntroText_George, LoseText_George
	msgbox PostBattle_OldCouple2, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route103_EventScript_HidingBugTrainer::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_2, IntroText_Jonny, LoseText_Jonny
	msgbox PostBattle_Jonny, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route103_EventScript_KingTrainer::
	trainerbattle_single TRAINER_GRUNT_AQUA_HIDEOUT_3, IntroText_Kingston, LoseText_Kingston
	msgbox PostBattle_Kingston, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route103_EventScript_ScaryFlooding::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_2, IntroText_Terry, LoseText_Terry
	msgbox PostBattle_Terry, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route103_EventScript_Hiker1::
	trainerbattle_single TRAINER_GRUNT_SEAFLOOR_CAVERN_3, IntroText_Mark, LoseText_Mark
	msgbox PostBattle_Mark, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route103_EventScript_Camper1::
	trainerbattle_single TRAINER_GABRIELLE_1, IntroText_Anna, LoseText_Anna
	msgbox PostBattle_Anna, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route103_EventScript_Camper2::
	trainerbattle_single TRAINER_GRUNT_PETALBURG_WOODS, IntroText_Alec, LoseText_Alec
	msgbox PostBattle_Alec, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route103_EventScript_Hiker2::
	trainerbattle_single TRAINER_MARCEL, IntroText_Roger, LoseText_Roger
	msgbox PostBattle_Roger, MSGBOX_AUTOCLOSE
	waitmessage
	end


Route103_EventScript_WalkingYoungster_Text_0:
	.string "I was hoping to visit my friends in\n"
	.string "Seaspray Town, but I don't know that I\l"
	.string "can get through!$"

Route103_EventScript_HappyFisher_Text_0:
	.string "The sea levels have risen.\n"
	.string "More fish for me!$"

Route103_EventScript_ItemLooker_Text_0:
	.string "That item seems important, but I can't\n"
	.string "reach it!\p"
	.string "If only I could Surf...$"

Route103_EventScript_RunningGirl_Text_0:
	.string "I can't get to my boyfriend!$"

Route103_EventScript_RunningBoy_Text_0:
	.string "I can't get to my girlfriend!$"

IntroText_Kingston::
	.string "My Pokémon are strong against water. I\n"
	.string "feel like I'm the king of the hill!$"

LoseText_Kingston::
	.string "You've dethroned me!$"

PostBattle_Kingston::
	.string "Even though my Pokémon are successful,\n"
	.string "this sea level rise can't possibly be a\l"
	.string "good thing.\p"
	.string "The environment that was here\n"
	.string "previously has been destroyed!$"

IntroText_Terry::
	.string "This flooding is scary!$"

LoseText_Terry::
	.string "You're strong!$"

PostBattle_Terry::
	.string "Even I can remember a time when I could\n"
	.string "walk from Treefall City to Seaspray\l"
	.string "Town./pThat doesn't seem possible any\l"
	.string "more!$"

IntroText_Jonny::
	.string "Hah!\n"
	.string "I bet you didn't see me!$"

LoseText_Jonny::
	.string "Huh, you were ready!$"

PostBattle_Jonny::
	.string "There's a storm ahead. Good thing my\n"
	.string "Pokémon like the rain!$"

IntroText_George::
	.string "We escaped, why are you going south?$"

IntroText_Francis::
	.string "Disaster lies ahead!$"

LoseText_George::
	.string "You're strong!$"

LoseText_Francis::
	.string "Wow, maybe you can handle the storm!$"

PostBattle_OldCouple1::
	.string "We escaped from Seaspray Town. We don't\n"
	.string "see many people heading there.$"

PostBattle_OldCouple2::
	.string "I've never seen such stormy conditions.\n"
	.string "Hopefully the rain lets up soon.$"

IntroText_Mark::
	.string "These cliffs are steep!$"

LoseText_Mark::
	.string "Wahahaha!$"

PostBattle_Mark::
	.string "Not many are able to scale these\n"
	.string "mountains.\p"
	.string "People are trapped in Seaspray Town!$"

IntroText_Anna::
	.string "Did you try to sneak by me?$"

LoseText_Anna::
	.string "I should have let you pass...$"

PostBattle_Anna::
	.string "I hear rumbling from the cave down\n"
	.string "there.\p"
	.string "I wonder what it could be?$"

IntroText_Alec::
	.string "I saw you heading my way!$"

LoseText_Alec::
	.string "Are you going to Seaspray Town?$"

PostBattle_Alec::
	.string "I don't like the rain.$"

IntroText_Roger::
	.string "This rain is rough!$"

LoseText_Roger::
	.string "You were tougher!$"

PostBattle_Roger::
	.string "This weather along with the rising seas\n"
	.string "make for a bad combination.$"
