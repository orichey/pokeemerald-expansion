# 1 "data/maps/DewfordTown_Gym/scripts.pory"

# 2 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_MapScripts::
# 3 "data/maps/DewfordTown_Gym/scripts.pory"
	.byte 0
# 4 "data/maps/DewfordTown_Gym/scripts.pory"

# 5 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Roxanne::
# 6 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_ROXANNE_1, DewfordTown_Gym_Text_RoxanneIntro, DewfordTown_Gym_Text_RoxanneDefeat, DewfordTown_Gym_EventScript_RoxanneDefeated, NO_MUSIC
# 7 "data/maps/DewfordTown_Gym/scripts.pory"
	specialvar VAR_RESULT, ShouldTryRematchBattle
# 8 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, TRUE, DewfordTown_Gym_EventScript_RoxanneRematch
# 9 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_unset FLAG_RECEIVED_TM_ROCK_TOMB, DewfordTown_Gym_EventScript_GiveRockTomb
# 10 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RoxannePostBattle, MSGBOX_DEFAULT
# 11 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 12 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 13 "data/maps/DewfordTown_Gym/scripts.pory"

# 14 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RoxanneDefeated::
# 15 "data/maps/DewfordTown_Gym/scripts.pory"
	message DewfordTown_Gym_Text_ReceivedStoneBadge
# 16 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 17 "data/maps/DewfordTown_Gym/scripts.pory"
	setvar VAR_DEWFORD_TOWN_STATE, 2
# 18 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 19 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 20 "data/maps/DewfordTown_Gym/scripts.pory"

# 21 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GiveRockTomb::
# 22 "data/maps/DewfordTown_Gym/scripts.pory"
	giveitem ITEM_TM_ROCK_TOMB
# 23 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_eq VAR_RESULT, FALSE, Common_EventScript_ShowBagIsFull
# 24 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_RECEIVED_TM_ROCK_TOMB
# 25 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_ExplainRockTomb, MSGBOX_DEFAULT
# 26 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 27 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 28 "data/maps/DewfordTown_Gym/scripts.pory"

# 29 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RoxanneRematch::
# 30 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_rematch_double TRAINER_ROXANNE_1, DewfordTown_Gym_Text_RoxannePreRematch, DewfordTown_Gym_Text_RoxanneRematchDefeat, DewfordTown_Gym_Text_RoxanneRematchNeedTwoMons
# 31 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RoxannePostRematch, MSGBOX_AUTOCLOSE
# 32 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 33 "data/maps/DewfordTown_Gym/scripts.pory"

# 34 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Josh::
# 35 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_JOSH, DewfordTown_Gym_Text_JoshIntro, DewfordTown_Gym_Text_JoshDefeat
# 36 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_JoshPostBattle, MSGBOX_AUTOCLOSE
# 37 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 38 "data/maps/DewfordTown_Gym/scripts.pory"

# 39 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Tommy::
# 40 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_TOMMY, DewfordTown_Gym_Text_TommyIntro, DewfordTown_Gym_Text_TommyDefeat
# 41 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_TommyPostBattle, MSGBOX_AUTOCLOSE
# 42 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 43 "data/maps/DewfordTown_Gym/scripts.pory"

# 44 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Ben::
# 45 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_BEN, DewfordTown_Gym_Text_BenIntro, DewfordTown_Gym_Text_BenDefeat
# 46 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_BenPostBattle, MSGBOX_AUTOCLOSE
# 47 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 48 "data/maps/DewfordTown_Gym/scripts.pory"

# 49 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Quincy::
# 50 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_QUINCY, DewfordTown_Gym_Text_QuincyIntro, DewfordTown_Gym_Text_QuincyDefeat
# 51 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_QuincyPostBattle, MSGBOX_AUTOCLOSE
# 52 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 53 "data/maps/DewfordTown_Gym/scripts.pory"

# 54 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_Katelynn::
# 55 "data/maps/DewfordTown_Gym/scripts.pory"
	trainerbattle_single TRAINER_KATELYNN, DewfordTown_Gym_Text_KatelynnIntro, DewfordTown_Gym_Text_KatelynnDefeat
# 56 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_KatelynnPostBattle, MSGBOX_AUTOCLOSE
# 57 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 58 "data/maps/DewfordTown_Gym/scripts.pory"

# 59 "data/maps/DewfordTown_Gym/scripts.pory"

# 60 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuide::
# 61 "data/maps/DewfordTown_Gym/scripts.pory"
	lock
# 62 "data/maps/DewfordTown_Gym/scripts.pory"
	faceplayer
# 63 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_DEFEATED_RUSTBORO_GYM, DewfordTown_Gym_EventScript_GymGuidePostVictory
# 64 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuideAdvice, MSGBOX_DEFAULT
# 65 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 66 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 67 "data/maps/DewfordTown_Gym/scripts.pory"

# 68 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymGuidePostVictory::
# 69 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymGuidePostVictory, MSGBOX_DEFAULT
# 70 "data/maps/DewfordTown_Gym/scripts.pory"
	release
# 71 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 72 "data/maps/DewfordTown_Gym/scripts.pory"

# 73 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_LeftGymStatue::
# 74 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 75 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 76 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 77 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 78 "data/maps/DewfordTown_Gym/scripts.pory"

# 79 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RightGymStatue::
# 80 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 81 "data/maps/DewfordTown_Gym/scripts.pory"
	goto_if_set FLAG_BADGE02_GET, DewfordTown_Gym_EventScript_GymStatueCertified
# 82 "data/maps/DewfordTown_Gym/scripts.pory"
	goto DewfordTown_Gym_EventScript_GymStatue
# 83 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 84 "data/maps/DewfordTown_Gym/scripts.pory"

# 85 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatueCertified::
# 86 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatueCertified, MSGBOX_DEFAULT
# 87 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 88 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 89 "data/maps/DewfordTown_Gym/scripts.pory"

# 90 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_GymStatue::
# 91 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_GymStatue, MSGBOX_DEFAULT
# 92 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 93 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 94 "data/maps/DewfordTown_Gym/scripts.pory"

# 95 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_EventScript_RegisterRoxanne::
# 96 "data/maps/DewfordTown_Gym/scripts.pory"
	lockall
# 97 "data/maps/DewfordTown_Gym/scripts.pory"
	pokenavcall DewfordTown_Gym_Text_RoxanneRegisterCall
# 98 "data/maps/DewfordTown_Gym/scripts.pory"
	waitmessage
# 99 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 100 "data/maps/DewfordTown_Gym/scripts.pory"
	playfanfare MUS_REGISTER_MATCH_CALL
# 101 "data/maps/DewfordTown_Gym/scripts.pory"
	msgbox DewfordTown_Gym_Text_RegisteredRoxanne, MSGBOX_DEFAULT
# 102 "data/maps/DewfordTown_Gym/scripts.pory"
	waitfanfare
# 103 "data/maps/DewfordTown_Gym/scripts.pory"
	closemessage
# 104 "data/maps/DewfordTown_Gym/scripts.pory"
	delay 30
# 105 "data/maps/DewfordTown_Gym/scripts.pory"
	setflag FLAG_ENABLE_ROXANNE_MATCH_CALL
# 106 "data/maps/DewfordTown_Gym/scripts.pory"
	clearflag FLAG_ENABLE_ROXANNE_FIRST_CALL
# 107 "data/maps/DewfordTown_Gym/scripts.pory"
	releaseall
# 108 "data/maps/DewfordTown_Gym/scripts.pory"
	end
# 109 "data/maps/DewfordTown_Gym/scripts.pory"

# 110 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuideAdvice:
# 111 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Yo! Champ in the making!\p"
# 112 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I speak for everyone in Seaspray Town\n"
# 113 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "when I say thank you for getting\l"
# 114 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Stormy's Pokémon back!\p"
# 115 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I know you're here for a battle,\n"
# 116 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so let me give you some advice.\p"
# 117 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "The trainers here, for the most part,\n"
# 118 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "use Flying-type Pokémon.\p"
# 119 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "However, the flooding has inspired\n"
# 120 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "some trainers to use Water-types\l"
# 121 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "as well!\p"
# 122 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Good luck, {PLAYER}!$"
# 123 "data/maps/DewfordTown_Gym/scripts.pory"

# 124 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymGuidePostVictory:
# 125 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow! What a thrilling victory!\n"
# 126 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Great work on beating this hack!$"
# 127 "data/maps/DewfordTown_Gym/scripts.pory"

# 128 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JoshIntro:
# 129 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "My Flying Pokémon flew me to this\n"
# 130 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "platform!\p"
# 131 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "They will carry me to victory too!$"
# 132 "data/maps/DewfordTown_Gym/scripts.pory"

# 133 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JoshDefeat:
# 134 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Maybe I should diversify my team…$"
# 135 "data/maps/DewfordTown_Gym/scripts.pory"

# 136 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_JoshPostBattle:
# 137 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Stormy's Flying-type Pokémon are\n"
# 138 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "even stronger than mine!$"
# 139 "data/maps/DewfordTown_Gym/scripts.pory"

# 140 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TommyIntro:
# 141 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I thought this was a Flying-type\n"
# 142 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Gym!\p"
# 143 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Why is it raining in here?$"
# 144 "data/maps/DewfordTown_Gym/scripts.pory"

# 145 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TommyDefeat:
# 146 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Wow! You blew me out of the water!$"
# 147 "data/maps/DewfordTown_Gym/scripts.pory"

# 148 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_TommyPostBattle:
# 149 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You got to me, but where do you go\n"
# 150 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "from here?$"
# 151 "data/maps/DewfordTown_Gym/scripts.pory"

# 152 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BenIntro:
# 153 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You're trying to go through us?$"
# 154 "data/maps/DewfordTown_Gym/scripts.pory"

# 155 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BenDefeat:
# 156 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You're strong!$"
# 157 "data/maps/DewfordTown_Gym/scripts.pory"

# 158 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_BenPostBattle:
# 159 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Stormy will knock you down!$"
# 160 "data/maps/DewfordTown_Gym/scripts.pory"

# 161 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_QuincyIntro:
# 162 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Good luck!$"
# 163 "data/maps/DewfordTown_Gym/scripts.pory"

# 164 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_QuincyDefeat:
# 165 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Well done!$"
# 166 "data/maps/DewfordTown_Gym/scripts.pory"

# 167 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_QuincyPostBattle:
# 168 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You might have what it takes…$"
# 169 "data/maps/DewfordTown_Gym/scripts.pory"

# 170 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KatelynnIntro:
# 171 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "This is a Flying-type Gym?\p"
# 172 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Why is there water everywhere?$"
# 173 "data/maps/DewfordTown_Gym/scripts.pory"

# 174 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KatelynnDefeat:
# 175 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Ack!\n"
# 176 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You got me!$"
# 177 "data/maps/DewfordTown_Gym/scripts.pory"

# 178 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_KatelynnPostBattle:
# 179 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I thought I might have a chance to\n"
# 180 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "catch someone off guard with my\l"
# 181 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Water-type Pokémon.\p"
# 182 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I guess not!$"
# 183 "data/maps/DewfordTown_Gym/scripts.pory"

# 184 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RoxanneIntro:
# 185 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Thank you for saving my Pokémon!\p"
# 186 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "People in this town are always trying\n"
# 187 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "to get me to evacuate them away\l"
# 188 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "before it's their turn, but I'm\l"
# 189 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "shocked anyone would resort to theft!\p"
# 190 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Anyways, I guess you're here for a\n"
# 191 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "battle. Shall we?$"
# 192 "data/maps/DewfordTown_Gym/scripts.pory"

# 193 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RoxanneDefeat:
# 194 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Incredible!\n"
# 195 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You blew me away!\p"
# 196 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Maybe I should put you in charge of\n"
# 197 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "flying people back to the mainland…$"
# 198 "data/maps/DewfordTown_Gym/scripts.pory"

# 199 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ReceivedStoneBadge:
# 200 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Congratulations, {PLAYER}!\p"
# 201 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You have beat my submission\n"
# 202 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "for this competition!\p"
# 203 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Keep an eye out for further\n"
# 204 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "development on Pokémon\l"
# 205 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Collapse!$"
# 206 "data/maps/DewfordTown_Gym/scripts.pory"

# 207 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_StoneBadgeInfoTakeThis:
# 208 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Congratulations on beating this hack!\p"
# 209 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Keep an eye out for further development!$"
# 210 "data/maps/DewfordTown_Gym/scripts.pory"

# 211 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_ExplainRockTomb:
# 212 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That TECHNICAL MACHINE, TM39,\n"
# 213 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "contains ROCK TOMB.\p"
# 214 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "It not only inflicts damage by dropping\n"
# 215 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "rocks, it also lowers SPEED.\p"
# 216 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "If you use a TM, it instantly teaches\n"
# 217 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "the move to a POKéMON.\p"
# 218 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Remember, a TM can be used only once,\n"
# 219 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so think before you use it.$"
# 220 "data/maps/DewfordTown_Gym/scripts.pory"

# 221 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RoxannePostBattle:
# 222 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Since you are so strong, you should\n"
# 223 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "challenge other GYM LEADERS.\p"
# 224 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "By battling many TRAINERS, you should\n"
# 225 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "learn many things.$"
# 226 "data/maps/DewfordTown_Gym/scripts.pory"

# 227 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatue:
# 228 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Seaspray Town Pokémon Gym$"
# 229 "data/maps/DewfordTown_Gym/scripts.pory"

# 230 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_GymStatueCertified:
# 231 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Seaspray Town Pokémon Gym\p"
# 232 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Stormy's certified trainers:\n"
# 233 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "{PLAYER}$"
# 234 "data/maps/DewfordTown_Gym/scripts.pory"

# 235 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RoxanneRegisterCall:
# 236 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …\n"
# 237 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … Beep!\p"
# 238 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "ROXANNE: Oh, hello, {PLAYER}?\n"
# 239 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "This is ROXANNE of RUSTBORO CITY.\p"
# 240 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I heard from BRAWLY that you're\n"
# 241 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "moving up through the ranks of\l"
# 242 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "TRAINERS at an incredible clip.\p"
# 243 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Well, I'd rather not think that\n"
# 244 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I can't beat you.\p"
# 245 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I promise, I will shape up my GYM\n"
# 246 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "so that you may challenge us again.\p"
# 247 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I hope you'll be looking forward to\n"
# 248 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "that occasion as much as me!\p"
# 249 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … …\n"
# 250 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "… … … … … Click!$"
# 251 "data/maps/DewfordTown_Gym/scripts.pory"

# 252 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RegisteredRoxanne:
# 253 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Registered GYM LEADER ROXANNE\n"
# 254 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "in the POKéNAV.$"
# 255 "data/maps/DewfordTown_Gym/scripts.pory"

# 256 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RoxannePreRematch:
# 257 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 258 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 259 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 260 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 261 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 262 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "we've become. Let us battle!$"
# 263 "data/maps/DewfordTown_Gym/scripts.pory"

# 264 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RoxanneRematchDefeat:
# 265 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Grr…\n"
# 266 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Again, I have lost…$"
# 267 "data/maps/DewfordTown_Gym/scripts.pory"

# 268 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RoxannePostRematch:
# 269 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "ROXANNE: I still have much to learn\n"
# 270 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "when it comes to battling POKéMON.\p"
# 271 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "That awareness makes me love battling\n"
# 272 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "all that much more!$"
# 273 "data/maps/DewfordTown_Gym/scripts.pory"

# 274 "data/maps/DewfordTown_Gym/scripts.pory"
DewfordTown_Gym_Text_RoxanneRematchNeedTwoMons:
# 275 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "ROXANNE: I'm so glad to see you again.\n"
# 276 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm ROXANNE, the GYM LEADER here.\p"
# 277 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I'm sure we've both experienced many\n"
# 278 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "battles since we last met.\p"
# 279 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "I would like to see how much better\n"
# 280 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "we've become…\p"
# 281 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Oh, no…\n"
# 282 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "You only have one POKéMON with you?\p"
# 283 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "Please return with at least one more\n"
# 284 "data/maps/DewfordTown_Gym/scripts.pory"
	.string "POKéMON.$"
