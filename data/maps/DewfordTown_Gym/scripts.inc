DewfordTown_Gym_MapScripts::
	.byte 0

DewfordTown_Gym_EventScript_Roxanne::
	trainerbattle_single TRAINER_ROXANNE_1, DewfordTown_Gym_Text_RoxanneIntro, DewfordTown_Gym_Text_RoxanneDefeat, DewfordTown_Gym_EventScript_RoxanneDefeated, NO_MUSIC
	specialvar VAR_RESULT, ShouldTryRematchBattle
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_RoxanneRematch
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, DewfordTown_Gym_EventScript_GiveRockTomb
	msgbox DewfordTown_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_RoxanneDefeated::
	message DewfordTown_Gym_Text_ReceivedStoneBadge
	waitmessage
	fadescreenspeed FADE_TO_BLACK, 24
	setrespawn HEAL_LOCATION_DEWFORD_TOWN
	special GameClear
	releaseall
	end

DewfordTown_Gym_EventScript_GiveRockTomb::
	giveitem ITEM_TM_ROCK_TOMB
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
	msgbox DewfordTown_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_RoxanneRematch::
	trainerbattle_rematch_double TRAINER_ROXANNE_1, DewfordTown_Gym_Text_RoxannePreRematch, DewfordTown_Gym_Text_RoxanneRematchDefeat, DewfordTown_Gym_Text_RoxanneRematchNeedTwoMons
	msgbox DewfordTown_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Josh::
	trainerbattle_single TRAINER_JOSH, DewfordTown_Gym_Text_JoshIntro, DewfordTown_Gym_Text_JoshDefeat
	msgbox DewfordTown_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Tommy::
	trainerbattle_single TRAINER_TOMMY, DewfordTown_Gym_Text_TommyIntro, DewfordTown_Gym_Text_TommyDefeat
	msgbox DewfordTown_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Ben::
	trainerbattle_single TRAINER_BEN, DewfordTown_Gym_Text_BenIntro, DewfordTown_Gym_Text_BenDefeat
	msgbox DewfordTown_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Quincy::
	trainerbattle_single TRAINER_QUINCY, DewfordTown_Gym_Text_QuincyIntro, DewfordTown_Gym_Text_QuincyDefeat
	msgbox DewfordTown_Gym_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
	end

DewfordTown_Gym_EventScript_Katelynn::
	trainerbattle_single TRAINER_KATELYNN, DewfordTown_Gym_Text_KatelynnIntro, DewfordTown_Gym_Text_KatelynnDefeat
	msgbox DewfordTown_Gym_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
	end


DewfordTown_Gym_EventScript_GymGuide::
	lock
	faceplayer
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_GymGuidePostVictory::
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
	release
	end

DewfordTown_Gym_EventScript_LeftGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_RightGymStatue::
	lockall
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
	goto DewfordTown_Gym_EventScript_GymStatue
	end

DewfordTown_Gym_EventScript_GymStatueCertified::
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_EventScript_GymStatue::
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
	releaseall
	end

DewfordTown_Gym_EventScript_RegisterRoxanne::
	lockall
	pokenavcall DewfordTown_Gym_Text_RoxanneRegisterCall
	waitmessage
	delay 30
	playfanfare MUS_REGISTER_MATCH_CALL
	msgbox DewfordTown_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
	waitfanfare
	closemessage
	delay 30
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
	releaseall
	end

DewfordTown_Gym_Text_GymGuideAdvice:
	.string "Yo! Champ in the making!\p"
	.string "I speak for everyone in Seaspray Town\n"
	.string "when I say thank you for getting\l"
	.string "Stormy's Pokémon back!\p"
	.string "I know you're here for a battle,\n"
	.string "so let me give you some advice.\p"
	.string "The trainers here, for the most part,\n"
	.string "use Flying-type Pokémon.\p"
	.string "However, the flooding has inspired\n"
	.string "some trainers to use Water-types\l"
	.string "as well!\p"
	.string "Good luck, {PLAYER}!$"

DewfordTown_Gym_Text_GymGuidePostVictory:
	.string "Wow! What a thrilling victory!\n"
	.string "Great work on beating this hack!$"

DewfordTown_Gym_Text_JoshIntro:
	.string "My Flying Pokémon flew me to this\n"
	.string "platform!\p"
	.string "They will carry me to victory too!$"

DewfordTown_Gym_Text_JoshDefeat:
	.string "Maybe I should diversify my team…$"

DewfordTown_Gym_Text_JoshPostBattle:
	.string "Stormy's Flying-type Pokémon are\n"
	.string "even stronger than mine!$"

DewfordTown_Gym_Text_TommyIntro:
	.string "I thought this was a Flying-type\n"
	.string "Gym!\p"
	.string "Why is it raining in here?$"

DewfordTown_Gym_Text_TommyDefeat:
	.string "Wow! You blew me out of the water!$"

DewfordTown_Gym_Text_TommyPostBattle:
	.string "You got to me, but where do you go\n"
	.string "from here?$"

DewfordTown_Gym_Text_BenIntro:
	.string "You're trying to go through us?$"

DewfordTown_Gym_Text_BenDefeat:
	.string "You're strong!$"

DewfordTown_Gym_Text_BenPostBattle:
	.string "Stormy will knock you down!$"

DewfordTown_Gym_Text_QuincyIntro:
	.string "Good luck!$"

DewfordTown_Gym_Text_QuincyDefeat:
	.string "Well done!$"

DewfordTown_Gym_Text_QuincyPostBattle:
	.string "You might have what it takes…$"

DewfordTown_Gym_Text_KatelynnIntro:
	.string "This is a Flying-type Gym?\p"
	.string "Why is there water everywhere?$"

DewfordTown_Gym_Text_KatelynnDefeat:
	.string "Ack!\n"
	.string "You got me!$"

DewfordTown_Gym_Text_KatelynnPostBattle:
	.string "I thought I might have a chance to\n"
	.string "catch someone off guard with my\l"
	.string "Water-type Pokémon.\p"
	.string "I guess not!$"

DewfordTown_Gym_Text_RoxanneIntro:
	.string "Thank you for saving my Pokémon!\p"
	.string "People in this town are always trying\n"
	.string "to get me to evacuate them away\l"
	.string "before it's their turn, but I'm\l"
	.string "shocked anyone would resort to theft!\p"
	.string "Anyways, I guess you're here for a\n"
	.string "battle. Shall we?$"

DewfordTown_Gym_Text_RoxanneDefeat:
	.string "Incredible!\n"
	.string "You blew me away!\p"
	.string "Maybe I should put you in charge of\n"
	.string "flying people back to the mainland…$"

DewfordTown_Gym_Text_ReceivedStoneBadge:
	.string "Congratulations, {PLAYER}!\p"
	.string "You have beat my submission\n"
	.string "for this competition!\p"
	.string "Keep an eye out for further\n"
	.string "development on Pokémon\l"
	.string "Collapse!$"

DewfordTown_Gym_Text_StoneBadgeInfoTakeThis:
	.string "Congratulations on beating this hack!\p"
	.string "Keep an eye out for further development!$"

DewfordTown_Gym_Text_ExplainRockTomb:
	.string "That TECHNICAL MACHINE, TM39,\n"
	.string "contains ROCK TOMB.\p"
	.string "It not only inflicts damage by dropping\n"
	.string "rocks, it also lowers SPEED.\p"
	.string "If you use a TM, it instantly teaches\n"
	.string "the move to a POKéMON.\p"
	.string "Remember, a TM can be used only once,\n"
	.string "so think before you use it.$"

DewfordTown_Gym_Text_RoxannePostBattle:
	.string "Since you are so strong, you should\n"
	.string "challenge other GYM LEADERS.\p"
	.string "By battling many TRAINERS, you should\n"
	.string "learn many things.$"

DewfordTown_Gym_Text_GymStatue:
	.string "Seaspray Town Pokémon Gym$"

DewfordTown_Gym_Text_GymStatueCertified:
	.string "Seaspray Town Pokémon Gym\p"
	.string "Stormy's certified trainers:\n"
	.string "{PLAYER}$"

DewfordTown_Gym_Text_RoxanneRegisterCall:
	.string "… … … … … …\n"
	.string "… … … … … Beep!\p"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
	.string "I heard from BRAWLY that you're\n"
	.string "moving up through the ranks of\l"
	.string "TRAINERS at an incredible clip.\p"
	.string "Well, I'd rather not think that\n"
	.string "I can't beat you.\p"
	.string "I promise, I will shape up my GYM\n"
	.string "so that you may challenge us again.\p"
	.string "I hope you'll be looking forward to\n"
	.string "that occasion as much as me!\p"
	.string "… … … … … …\n"
	.string "… … … … … Click!$"

DewfordTown_Gym_Text_RegisteredRoxanne:
	.string "Registered GYM LEADER ROXANNE\n"
	.string "in the POKéNAV.$"

DewfordTown_Gym_Text_RoxannePreRematch:
	.string "ROXANNE: I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become. Let us battle!$"

DewfordTown_Gym_Text_RoxanneRematchDefeat:
	.string "Grr…\n"
	.string "Again, I have lost…$"

DewfordTown_Gym_Text_RoxannePostRematch:
	.string "ROXANNE: I still have much to learn\n"
	.string "when it comes to battling POKéMON.\p"
	.string "That awareness makes me love battling\n"
	.string "all that much more!$"

DewfordTown_Gym_Text_RoxanneRematchNeedTwoMons:
	.string "ROXANNE: I'm so glad to see you again.\n"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
	.string "I'm sure we've both experienced many\n"
	.string "battles since we last met.\p"
	.string "I would like to see how much better\n"
	.string "we've become…\p"
	.string "Oh, no…\n"
	.string "You only have one POKéMON with you?\p"
	.string "Please return with at least one more\n"
	.string "POKéMON.$"
