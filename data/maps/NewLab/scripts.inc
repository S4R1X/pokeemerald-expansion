NewLab_MapScripts::
	.byte 0


NewLab_EventScript_PokeballOne::
# 5 "data/maps/NewLab/scripts.pory"
	lockall
# 6 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SELECTED_JANGMO_O, NewLab_EventScript_PokeballOne_4
NewLab_EventScript_PokeballOne_3:
# 36 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_3
NewLab_EventScript_PokeballOne_1:
# 38 "data/maps/NewLab/scripts.pory"
	waitmessage
# 39 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballOne_2:
# 7 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_JANGMO_O, 5, 3
# 8 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_0, MSGBOX_YESNO
# 9 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_PokeballOne_9
# 31 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 32 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_4:
# 6 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SELECTED_FLABEBE, NewLab_EventScript_PokeballOne_6
	goto NewLab_EventScript_PokeballOne_3

NewLab_EventScript_PokeballOne_6:
# 6 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SELECTED_ARON, NewLab_EventScript_PokeballOne_2
	goto NewLab_EventScript_PokeballOne_3

NewLab_EventScript_PokeballOne_9:
# 10 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_JANGMO_O, 5
# 11 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_PokeballOne_12
# 18 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_PokeballOne_13
# 26 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 27 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_2
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_12:
# 12 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 13 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_1
# 14 "data/maps/NewLab/scripts.pory"
	removeobject 1
# 15 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SELECTED_JANGMO_O
# 16 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	goto NewLab_EventScript_PokeballOne_1

NewLab_EventScript_PokeballOne_13:
# 19 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 20 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_1
# 21 "data/maps/NewLab/scripts.pory"
	removeobject 1
# 22 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SELECTED_JANGMO_O
# 23 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	goto NewLab_EventScript_PokeballOne_1


NewLab_EventScript_PokeballTwo::
# 45 "data/maps/NewLab/scripts.pory"
	lockall
# 46 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SELECTED_JANGMO_O, NewLab_EventScript_PokeballTwo_4
NewLab_EventScript_PokeballTwo_3:
# 76 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_3
NewLab_EventScript_PokeballTwo_1:
# 78 "data/maps/NewLab/scripts.pory"
	waitmessage
# 79 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballTwo_2:
# 47 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_FLABEBE, 5, 3
# 48 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballTwo_Text_0, MSGBOX_YESNO
# 49 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_PokeballTwo_9
# 71 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 72 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_4:
# 46 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SELECTED_FLABEBE, NewLab_EventScript_PokeballTwo_6
	goto NewLab_EventScript_PokeballTwo_3

NewLab_EventScript_PokeballTwo_6:
# 46 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SELECTED_ARON, NewLab_EventScript_PokeballTwo_2
	goto NewLab_EventScript_PokeballTwo_3

NewLab_EventScript_PokeballTwo_9:
# 50 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_FLABEBE, 5
# 51 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_PokeballTwo_12
# 58 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_PokeballTwo_13
# 66 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 67 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_2
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_12:
# 52 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 53 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballTwo_Text_1
# 54 "data/maps/NewLab/scripts.pory"
	removeobject 2
# 55 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SELECTED_FLABEBE
# 56 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	goto NewLab_EventScript_PokeballTwo_1

NewLab_EventScript_PokeballTwo_13:
# 59 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 60 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballTwo_Text_1
# 61 "data/maps/NewLab/scripts.pory"
	removeobject 2
# 62 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SELECTED_FLABEBE
# 63 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	goto NewLab_EventScript_PokeballTwo_1


NewLab_EventScript_PokeballThree::
# 85 "data/maps/NewLab/scripts.pory"
	lockall
# 86 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SELECTED_JANGMO_O, NewLab_EventScript_PokeballThree_4
NewLab_EventScript_PokeballThree_3:
# 116 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_3
NewLab_EventScript_PokeballThree_1:
# 118 "data/maps/NewLab/scripts.pory"
	waitmessage
# 119 "data/maps/NewLab/scripts.pory"
	releaseall
	end

NewLab_EventScript_PokeballThree_2:
# 87 "data/maps/NewLab/scripts.pory"
	showmonpic SPECIES_ARON, 5, 3
# 88 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballThree_Text_0, MSGBOX_YESNO
# 89 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NewLab_EventScript_PokeballThree_9
# 111 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 112 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_NotChosen
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_4:
# 86 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SELECTED_FLABEBE, NewLab_EventScript_PokeballThree_6
	goto NewLab_EventScript_PokeballThree_3

NewLab_EventScript_PokeballThree_6:
# 86 "data/maps/NewLab/scripts.pory"
	goto_if_unset FLAG_SELECTED_ARON, NewLab_EventScript_PokeballThree_2
	goto NewLab_EventScript_PokeballThree_3

NewLab_EventScript_PokeballThree_9:
# 90 "data/maps/NewLab/scripts.pory"
	givemon SPECIES_ARON, 5
# 91 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq NewLab_EventScript_PokeballThree_12
# 98 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq NewLab_EventScript_PokeballThree_13
# 106 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 107 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballOne_Text_2
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_12:
# 92 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 93 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballThree_Text_1
# 94 "data/maps/NewLab/scripts.pory"
	removeobject 3
# 95 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SELECTED_ARON
# 96 "data/maps/NewLab/scripts.pory"
	call NicknamePartyMon
	goto NewLab_EventScript_PokeballThree_1

NewLab_EventScript_PokeballThree_13:
# 99 "data/maps/NewLab/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 100 "data/maps/NewLab/scripts.pory"
	msgbox NewLab_EventScript_PokeballThree_Text_1
# 101 "data/maps/NewLab/scripts.pory"
	removeobject 3
# 102 "data/maps/NewLab/scripts.pory"
	setflag FLAG_SELECTED_ARON
# 103 "data/maps/NewLab/scripts.pory"
	call NicknameBoxMon
	goto NewLab_EventScript_PokeballThree_1


NicknamePartyMon::
# 126 "data/maps/NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 127 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 128 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknamePartyMon_1
	return

NicknamePartyMon_1:
# 129 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_GetGiftMonPartySlot
# 130 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_NameReceivedPartyMon
	return


NicknameBoxMon::
# 138 "data/maps/NewLab/scripts.pory"
	msgbox NicknamePartyMon_Text_0, MSGBOX_YESNO
# 139 "data/maps/NewLab/scripts.pory"
	hidemonpic
# 140 "data/maps/NewLab/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq NicknameBoxMon_2
NicknameBoxMon_1:
# 143 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_TransferredToPC
	return

NicknameBoxMon_2:
# 141 "data/maps/NewLab/scripts.pory"
	call Common_EventScript_NameReceivedBoxMon
	goto NicknameBoxMon_1


NewLab_EventScript_PokeballOne_Text_0:
# 8 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Jangmo-o?$"

NewLab_EventScript_PokeballOne_Text_1:
# 13 "data/maps/NewLab/scripts.pory"
	.string "Recieved Jangmo-o$"

NewLab_EventScript_PokeballOne_Text_2:
# 27 "data/maps/NewLab/scripts.pory"
	.string "No More Room$"

NewLab_EventScript_PokeballOne_Text_3:
# 36 "data/maps/NewLab/scripts.pory"
	.string "These pokemon are for another trainer.$"

NewLab_EventScript_PokeballTwo_Text_0:
# 48 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Flabebe?$"

NewLab_EventScript_PokeballTwo_Text_1:
# 53 "data/maps/NewLab/scripts.pory"
	.string "Recieved Flabebe$"

NewLab_EventScript_PokeballThree_Text_0:
# 88 "data/maps/NewLab/scripts.pory"
	.string "Do you want to choose Aron?$"

NewLab_EventScript_PokeballThree_Text_1:
# 93 "data/maps/NewLab/scripts.pory"
	.string "Recieved Aron$"

NicknamePartyMon_Text_0:
# 126 "data/maps/NewLab/scripts.pory"
	.string "Give it a nickname?$"

NewLab_NotChosen::
# 147 "data/maps/NewLab/scripts.pory"
	.string "You did not choose the Pokemon$"
