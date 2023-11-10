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


OldaleTown_House1_Text_Scientist::
	lock
	faceplayer
	msgbox OldaleTown_House1_Text_Scientist_Text_0
	release
	return


OldaleTown_House1_Text_Girl::
	lock
	faceplayer
	msgbox OldaleTown_House1_Text_Girl_Text_0
	release
	return


OldaleTown_House1_EventScript_SoilSign::
	lockall
	msgbox OldaleTown_House1_EventScript_SoilSign_Text_0
	releaseall
	return


OldaleTown_House1_Text_Woman_Text_0:
	.string "This library holds many records of\n"
	.string "events in ECODIA.\p"
	.string "People journey from far and wide to read\n"
	.string "about our history.$"

OldaleTown_House1_Text_Man_Text_0:
	.string "You're looking at some of the last few\n"
	.string "books around.\p"
	.string "Feast your eyes!$"

OldaleTown_House1_Text_Scientist_Text_0:
	.string "This soil core can tell us about the\n"
	.string "composition of the atmosphere decades\l"
	.string "ago.\p"
	.string "We are lucky the library preserved\n"
	.string "such a valuable artifact.$"

OldaleTown_House1_Text_Girl_Text_0:
	.string "I found treasure in the shelves!$"

OldaleTown_House1_EventScript_SoilSign_Text_0:
	.string "It's a cylinder of dirt with unreadable\n"
	.string "labels. What does it mean?$"
