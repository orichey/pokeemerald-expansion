OldaleTown_House1_MapScripts::
	.byte 0

OldaleTown_House1_EventScript_Woman::
	msgbox OldaleTown_House1_Text_LeftPokemonGoesOutFirst, MSGBOX_NPC
	end

OldaleTown_House1_Text_LeftPokemonGoesOutFirst:
	.string "When a POKéMON battle starts, the one\n"
	.string "at the left of the list goes out first.\p"
	.string "So, when you get more POKéMON in your\n"
	.string "party, try switching around the order\l"
	.string "of your POKéMON.\p"
	.string "It could give you an advantage.$"

OldaleTown_House1_Text_Woman::
	lock
	faceplayer
	msgbox OldaleTown_House1_Text_Woman_Text_0
	release
	return


OldaleTown_House1_Text_Man::
	lock
	faceplayer
	msgbox OldaleTown_House1_Text_Man_Text_0
	release
	return


OldaleTown_House1_Text_Woman_Text_0:
	.string "It's hard to know where our next meal is\n"
	.string "coming from.\p"
	.string "We're debating moving to a bigger city,\n"
	.string "like our neighbors did.$"

OldaleTown_House1_Text_Man_Text_0:
	.string "Believe it or not, many people used to\n"
	.string "live in DESOLA TOWN. However, a lack of\l"
	.string "economic opportunities drove many\l"
	.string "people out.\p"
	.string "Now, we just serve as a rest stop for\n"
	.string "travelers between TREEFALL WOODS and\l"
	.string "the mountains.$"
