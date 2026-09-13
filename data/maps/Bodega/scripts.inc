Bodega_MapScripts::
	.byte 0


You_Dont_Work_Here::
# 4 "data/maps/Bodega/scripts.pory"
	lock
# 5 "data/maps/Bodega/scripts.pory"
	applymovement 1, Cashiers_Only
# 6 "data/maps/Bodega/scripts.pory"
	msgbox You_Dont_Work_Here_Text_0
# 7 "data/maps/Bodega/scripts.pory"
	waitmessage
# 8 "data/maps/Bodega/scripts.pory"
	applymovement OBJ_EVENT_ID_PLAYER, Access_Denied
# 9 "data/maps/Bodega/scripts.pory"
	applymovement 1, Return_To_Register
# 10 "data/maps/Bodega/scripts.pory"
	waitmovement
# 11 "data/maps/Bodega/scripts.pory"
	release
	return


Sell_Rat::
# 15 "data/maps/Bodega/scripts.pory"
	lock
# 16 "data/maps/Bodega/scripts.pory"
	faceplayer
# 17 "data/maps/Bodega/scripts.pory"
	goto_if_set FLAG_RECIEVED_WIERD_RAT, Sell_Rat_2
# 26 "data/maps/Bodega/scripts.pory"
	msgbox Sell_Rat_Text_1, MSGBOX_YESNO
# 29 "data/maps/Bodega/scripts.pory"
	waitmessage
# 30 "data/maps/Bodega/scripts.pory"
	compare VAR_RESULT, YES
	goto_if_eq Sell_Rat_5
# 63 "data/maps/Bodega/scripts.pory"
	msgbox Sell_Rat_Text_6
# 64 "data/maps/Bodega/scripts.pory"
	waitmessage
Sell_Rat_4:
# 66 "data/maps/Bodega/scripts.pory"
	applymovement 2, Return_To_Register
# 67 "data/maps/Bodega/scripts.pory"
	waitmovement
# 68 "data/maps/Bodega/scripts.pory"
	release
	return

Sell_Rat_2:
# 18 "data/maps/Bodega/scripts.pory"
	msgbox Sell_Rat_Text_0
# 20 "data/maps/Bodega/scripts.pory"
	waitmessage
# 21 "data/maps/Bodega/scripts.pory"
	applymovement 2, Return_To_Register
# 22 "data/maps/Bodega/scripts.pory"
	waitmovement
# 23 "data/maps/Bodega/scripts.pory"
	release
	return

Sell_Rat_5:
# 31 "data/maps/Bodega/scripts.pory"
	checkmoney 1500
# 32 "data/maps/Bodega/scripts.pory"
	compare VAR_RESULT, TRUE
	goto_if_eq Sell_Rat_8
# 58 "data/maps/Bodega/scripts.pory"
	msgbox Sell_Rat_Text_5
# 59 "data/maps/Bodega/scripts.pory"
	waitmessage
	goto Sell_Rat_4

Sell_Rat_8:
# 33 "data/maps/Bodega/scripts.pory"
	givemon SPECIES_RATTATA_ALOLA, 3
# 34 "data/maps/Bodega/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PARTY
	goto_if_eq Sell_Rat_12
# 42 "data/maps/Bodega/scripts.pory"
	compare VAR_RESULT, MON_GIVEN_TO_PC
	goto_if_eq Sell_Rat_13
# 51 "data/maps/Bodega/scripts.pory"
	hidemonpic
# 52 "data/maps/Bodega/scripts.pory"
	msgbox Sell_Rat_Text_4
# 53 "data/maps/Bodega/scripts.pory"
	waitmessage
Sell_Rat_11:
# 55 "data/maps/Bodega/scripts.pory"
	waitmessage
	goto Sell_Rat_4

Sell_Rat_12:
# 35 "data/maps/Bodega/scripts.pory"
	msgbox Sell_Rat_Text_2
# 36 "data/maps/Bodega/scripts.pory"
	waitmessage
# 37 "data/maps/Bodega/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 38 "data/maps/Bodega/scripts.pory"
	msgbox Sell_Rat_Text_3
# 39 "data/maps/Bodega/scripts.pory"
	setflag FLAG_RECIEVED_WIERD_RAT
# 40 "data/maps/Bodega/scripts.pory"
	call NicknamePartyMon
	goto Sell_Rat_11

Sell_Rat_13:
# 43 "data/maps/Bodega/scripts.pory"
	msgbox Sell_Rat_Text_2
# 44 "data/maps/Bodega/scripts.pory"
	waitmessage
# 45 "data/maps/Bodega/scripts.pory"
	playfanfare MUS_OBTAIN_ITEM
# 46 "data/maps/Bodega/scripts.pory"
	msgbox Sell_Rat_Text_3
# 47 "data/maps/Bodega/scripts.pory"
	setflag FLAG_RECIEVED_WIERD_RAT
# 48 "data/maps/Bodega/scripts.pory"
	call NicknameBoxMon
	goto Sell_Rat_11


Buy_Goods::
	return


# 76 "data/maps/Bodega/scripts.pory"
Cashiers_Only:
# 77 "data/maps/Bodega/scripts.pory"
	face_down
	step_end

# 80 "data/maps/Bodega/scripts.pory"
Access_Denied:
# 81 "data/maps/Bodega/scripts.pory"
	walk_right
	step_end

# 84 "data/maps/Bodega/scripts.pory"
Return_To_Register:
# 85 "data/maps/Bodega/scripts.pory"
	face_right
	step_end

You_Dont_Work_Here_Text_0:
# 6 "data/maps/Bodega/scripts.pory"
	.string "Hey kid, you know this is employees only!$"

Sell_Rat_Text_0:
# 18 "data/maps/Bodega/scripts.pory"
	.string "I'll let you know if I find\n"
	.string "any think else in my dumpster.$"

Sell_Rat_Text_1:
# 26 "data/maps/Bodega/scripts.pory"
	.string "Check out this weird rat I\n"
	.string "found in the dumpster outback.\l"
	.string "I'll sell it to you for 1500p.$"

Sell_Rat_Text_2:
# 35 "data/maps/Bodega/scripts.pory"
	.string "eheh, thanks for the cash! Enjoy the rat.$"

Sell_Rat_Text_3:
# 38 "data/maps/Bodega/scripts.pory"
	.string "Recieved Rattata$"

Sell_Rat_Text_4:
# 52 "data/maps/Bodega/scripts.pory"
	.string "No More Room$"

Sell_Rat_Text_5:
# 58 "data/maps/Bodega/scripts.pory"
	.string "I am not running a charity!$"

Sell_Rat_Text_6:
# 63 "data/maps/Bodega/scripts.pory"
	.string "Ugh, fine.$"
