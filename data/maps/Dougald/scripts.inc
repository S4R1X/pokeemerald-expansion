Dougald_MapScripts::
	.byte 0


Dougald_EventScripts_UniversityBuildingSign::
# 4 "data/maps/Dougald/scripts.pory"
	lockall
# 5 "data/maps/Dougald/scripts.pory"
	msgbox Dougald_EventScripts_UniversityBuildingSign_Text_0
# 7 "data/maps/Dougald/scripts.pory"
	releaseall
	return


Gym_Trainer_Aspire::
# 11 "data/maps/Dougald/scripts.pory"
	lockall
# 12 "data/maps/Dougald/scripts.pory"
	faceplayer
# 13 "data/maps/Dougald/scripts.pory"
	msgbox Gym_Trainer_Aspire_Text_0
# 15 "data/maps/Dougald/scripts.pory"
	waitmessage
# 16 "data/maps/Dougald/scripts.pory"
	trainerbattle_single TRAINER_BRENDAN_ROUTE_103_TREECKO, Aspire_Intro, Aspire_Outro
# 17 "data/maps/Dougald/scripts.pory"
	msgbox PostBattleDialogue, MSGBOX_AUTOCLOSE
# 18 "data/maps/Dougald/scripts.pory"
	waitmessage
# 19 "data/maps/Dougald/scripts.pory"
	releaseall
	return


Dougald_EventScripts_UniversityBuildingSign_Text_0:
# 5 "data/maps/Dougald/scripts.pory"
	.string "Dougald University of\n"
	.string "Science and Technology$"

Gym_Trainer_Aspire_Text_0:
# 13 "data/maps/Dougald/scripts.pory"
	.string "I want to be a gym trainer, but I need \n"
	.string "to practice. Would you like to help me?$"

Aspire_Intro::
# 23 "data/maps/Dougald/scripts.pory"
	.string "One day, I will be the toughest trainer\n"
	.string "in all of Dougald!$"

Aspire_Outro::
# 28 "data/maps/Dougald/scripts.pory"
	.string "Wow, you really know you stuff!$"

PostBattleDialogue::
# 32 "data/maps/Dougald/scripts.pory"
	.string "I guess I still have a long way to go!\n"
	.string "Thanks for the battle!$"
