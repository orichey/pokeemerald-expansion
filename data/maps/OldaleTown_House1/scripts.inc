# 1 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_MapScripts::
# 2 "data/maps/OldaleTown_House1/scripts.pory"
	.byte 0
# 3 "data/maps/OldaleTown_House1/scripts.pory"

# 4 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_EventScript_Woman::
# 5 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_Text_LeftPokemonGoesOutFirst, MSGBOX_NPC
# 6 "data/maps/OldaleTown_House1/scripts.pory"
	end
# 7 "data/maps/OldaleTown_House1/scripts.pory"

# 8 "data/maps/OldaleTown_House1/scripts.pory"
OldaleTown_House1_Text_LeftPokemonGoesOutFirst:
# 9 "data/maps/OldaleTown_House1/scripts.pory"
	.string "When a POKéMON battle starts, the one\n"
# 10 "data/maps/OldaleTown_House1/scripts.pory"
	.string "at the left of the list goes out first.\p"
# 11 "data/maps/OldaleTown_House1/scripts.pory"
	.string "So, when you get more POKéMON in your\n"
# 12 "data/maps/OldaleTown_House1/scripts.pory"
	.string "party, try switching around the order\l"
# 13 "data/maps/OldaleTown_House1/scripts.pory"
	.string "of your POKéMON.\p"
# 14 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It could give you an advantage.$"

OldaleTown_House1_Text_Woman::
# 19 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 20 "data/maps/OldaleTown_House1/scripts.pory"
	faceplayer
# 21 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_Text_Woman_Text_0
# 22 "data/maps/OldaleTown_House1/scripts.pory"
	release
	return


OldaleTown_House1_Text_Man::
# 26 "data/maps/OldaleTown_House1/scripts.pory"
	lock
# 27 "data/maps/OldaleTown_House1/scripts.pory"
	faceplayer
# 28 "data/maps/OldaleTown_House1/scripts.pory"
	msgbox OldaleTown_House1_Text_Man_Text_0
# 29 "data/maps/OldaleTown_House1/scripts.pory"
	release
	return


OldaleTown_House1_Text_Woman_Text_0:
# 21 "data/maps/OldaleTown_House1/scripts.pory"
	.string "It's hard to know where our next meal is\n"
	.string "coming from.\p"
	.string "We're debating moving to a bigger city,\n"
	.string "like our neighbors did.$"

OldaleTown_House1_Text_Man_Text_0:
# 28 "data/maps/OldaleTown_House1/scripts.pory"
	.string "Believe it or not, many people used to\n"
	.string "live in Desola Town. However, a lack of\l"
	.string "economic opportunities drove many\l"
	.string "people out.\p"
	.string "Now, we just serve as a rest stop for\n"
	.string "travelers between Treefall Woods and\l"
	.string "the mountains.$"
