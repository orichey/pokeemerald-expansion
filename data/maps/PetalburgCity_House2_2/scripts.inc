# 1 "data/maps/PetalburgCity_House2_2/scripts.pory"

# 2 "data/maps/PetalburgCity_House2_2/scripts.pory"
PetalburgCity_House2_2_MapScripts::
# 3 "data/maps/PetalburgCity_House2_2/scripts.pory"
	.byte 0

PetalburgCity_House2_2_EventScript_Cut::
# 7 "data/maps/PetalburgCity_House2_2/scripts.pory"
	lockall
# 8 "data/maps/PetalburgCity_House2_2/scripts.pory"
	faceplayer
# 9 "data/maps/PetalburgCity_House2_2/scripts.pory"
	msgbox PetalburgCity_House2_2_EventScript_Cut_Text_0
# 10 "data/maps/PetalburgCity_House2_2/scripts.pory"
	applymovement 1, Common_Movement_FaceOriginalDirection
# 11 "data/maps/PetalburgCity_House2_2/scripts.pory"
	releaseall
	end


PetalburgCity_House2_2_EventScript_Cut_Text_0:
# 9 "data/maps/PetalburgCity_House2_2/scripts.pory"
	.string "Are you here for Cut too?\p"
	.string "Argh, I'd give you one, but one of those\n"
	.string "goons in orange stole my whole stock!\p"
	.string "This whole city used to rely on me for\n"
	.string "my HMs, but I can't be of use any more.\p"
	.string "I'm sorry, kid. I don't know where that\n"
	.string "hooligan got off to.$"
