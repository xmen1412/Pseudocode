MAIN PROGRAM

procedure prcBurger
procedure prcFriedChicken
procedure prcFrenchFries
procedure prcIceCream
procedure prcDrink
procedure prcBurgerPackage
procedure prcFriedChickenPackage
numeric nGrandTotal
Begin
nGrandTotal = 0
	numeric nCash, nChange
	character cRepeat, cChoice
	cRepeat = "Y"
	while (cRepeat = "Y")
	begin
		display "================================="
		display "=           Welcome To          ="
		display "=     UNICORN FIRED CHICKEN     ="
		display "=             Depok             ="
		display "================================="
		display "=========== Menu List ==========="
		display "================================="
		display "|	   1. Burger                 |"
		display "|	   2. Fried Chicken          |"
		display "|	   3. French Fries           |"
		display "|	   4. Ice Cream              |"
		display "|	   5. Drink                  |"
		display "|	   6. Burger Package         |"
		display "|	   7. Fried Chicken Package  |"
		display "================================="
		display "      INSERT YOUR CHOICE         "
		display "================================="
		accept cChoice
		switch (cChoice)
		begin
			case 1 :
				Call prcBurger
				display "Do you want to choose again? (Y/N)"
				accept cRepeat
				if cRepeat = 'N'
					begin
						call prcTotal
					end
				endif
				break
			case 2 :
				call prcFried_Chicken
				display "Do you want to choose again? (Y/N)"
				accept cRepeat
				if cRepeat = 'N'
					begin
						call prcTotal
					end
				endif
				break
			case 3 :
				call prcFrench_Fries
				display "Do you want to choose again? (Y/N)"
				accept cRepeat
				if cRepeat = 'N'
					begin
						call prcTotal
					end
				endif
				break
			case 4 :
				call prcIce_Cream
				display "Do you want to choose again? (Y/N)"
				accept cRepeat
				if cRepeat = 'N'
					begin
						call prcTotal
					end
				endif
				break
			case 5 :
				call prcDrink
				display "Do you want to choose again? (Y/N)"
				accept cRepeat
				if cRepeat = 'N'
					begin
						call prcTotal
					end
				endif
				break
			case 6 :
				call prcBurger_Package
				display "Do you want to choose again? (Y/N)"
				accept cRepeat
				if cRepeat = 'N'
					begin
						call prcTotal
					end
				endif
				break
			case 7 :
				call prcFried_Chicken_Package
				display "Do you want to choose again? (Y/N)"
				accept cRepeat
				if cRepeat = 'N'
					begin
						call prcTotal
					end
				endif
				break
			default
				display "ERROR"
		end
	end
	display "Thank You"
End

procedure prcBurger
Begin
	character cChoice, cRepeat
	numeric nPrice 1, nPrice2, nPrice3, nPrice4, nPrice5, nPrice6, nTotal, nAmount, nCash, nChange
	nPrice1 = 25000
	nPrice2 = 35000
	nPrice3 = 45000
	nPrice4 = 25000
	nPrice5 = 25000
	nPrice6 = 25000
	cRepeat = "Y"
	while (cRepeat = "Y")
	begin
		display "------------------------------------"
		display "-          Welcome To              -"
		display "-    UNICORN FRIED CHICKEN         -"
		display "-            Depok                 -"
		display "------------------------------------"
		display "------------------------------------"
		display "------------------------------------"
		display "| 1. Cheese Burger        Rp 25.000|" 
		display "| 2. Double Cheese Burger Rp 35.000|" 
		display "| 3. Triple Cheese Burger Rp 45.000|" 
		display "| 4. Beef Burger          Rp 25.000|" 
		display "| 5. Chicken Burger       Rp 25.000|" 
		display "| 6. Fish Fillet Burger   Rp 25.000|" 
		display "------------------------------------"
		display "        INSERT YOUR CHOICE          "
		display "------------------------------------"
		accept cChoice
		switch (cChoice)
		begin
			case 1 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice1
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
				break
			case 2 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice2
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
				break
			case 3 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice3
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
				break
			case 4 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice4
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
				break
			case 5 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice5
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
				break
			case 6 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice6
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
				break
			default
				display "ERROR"
				break
		end
	end
End


procedure prcFriedChicken
Begin
	character cChoice, cRepeat
	numeric nPrice 1, nPrice2, nPrice3, nTotal, nAmount, nCash, nChange
	nPrice1 = 15000
	nPrice2 = 15000
	nPrice3 = 15000
	cRepeat = "Y"
	while (cRepeat = "Y")
	begin
		display "------------------------------------"
		display "-          Welcome To              -"
		display "-    UNICORN FRIED CHICKEN         -"
		display "-            Depok                 -"
		display "------------------------------------"
		display "------------------------------------"
		display "------------------------------------"
		display "| 1. Spicy Fried Chicken  Rp 15.000|" 
		display "| 2. Crispy Fried Chicken Rp 15.000|" 
		display "| 3. Normal Fried Chicken Rp 12.000|" 
		display "------------------------------------"
		display "        INSERT YOUR CHOICE          "
		display "------------------------------------"
		accept cChoice
		switch (cChoice)
		begin
			case 1 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice1
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			case 2 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice2
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			case 3 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice3
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			default
				display "ERROR"
		end
	end
End


procedure prcFrenchFries
Begin
	character cChoice, cRepeat
	numeric nPrice 1, nPrice2, nPrice3, nPrice4, nTotal, nAmount, nCash, nChange
	nPrice1 = 10000
	nPrice2 = 15000
	nPrice3 = 20000
	nPrice4 = 30000
	cRepeat = "Y"
	while (cRepeat = "Y")
	begin
		display "------------------------------------"
		display "-           Welcome To             -"
		display "-    UNICORN FRIED CHICKEN         -"
		display "-            Depok                 -"
		display "------------------------------------"
		display "------------------------------------"
		display "------------------------------------"
		display "| 1. Small                Rp 10.000|" 
		display "| 2. Large                Rp 15.000|" 
		display "| 3. XLarge               Rp 20.000|" 
		display "| 4. XXLarge              Rp 30.000|" 
		display "------------------------------------"
		display "        INSERT YOUR CHOICE          "
		display "------------------------------------"
		accept cChoice
		switch (cChoice)
		begin
			case 1 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice1
				display "Your total is" nTotal
				display "Please insert your cash"
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			case 2 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice2
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			case 3 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice3
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			case 4 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice4
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			default
				display "ERROR"
		end
	end
End

procedure prcIceCream
Begin
	character cChoice, cRepeat
	numeric nPrice 1, nPrice2, nPrice3, nTotal, nAmount, nCash, nChange
	nPrice1 = 5000
	nPrice2 = 10000
	nPrice3 = 15000
	cRepeat = "Y"
	while (cRepeat = "Y")
	begin
		display "------------------------------------"
		display "-           Welcome To             -"
		display "-    UNICORN FRIED CHICKEN         -"
		display "-            Depok                 -"
		display "------------------------------------"
		display "------------------------------------"
		display "------------------------------------"
		display "| 1. Ice Cream Cone       Rp 5.000 |" 
		display "| 2. Ice Cream Sundae     Rp 10.000|" 
		display "| 3. Ice Cream UFlurry    Rp 15.000|" 
		display "------------------------------------"
		display "        INSERT YOUR CHOICE          "
		display "------------------------------------"
		accept cChoice
		switch (cChoice)
		begin
			case 1 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice1
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			case 2 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice2
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			case 3 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice3
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			default
				display 'ERROR'
		end
	end
End


procedure prcDrink
Begin
	character cChoice, cRepeat
	numeric nPrice 1, nPrice2, nPrice3, nPrice4, nPrice5, nTotal, nAmount, nCash, nChange
	nPrice1 = 10000
	nPrice2 = 10000
	nPrice3 = 10000
	nPrice4 = 10000
	nPrice5 = 10000
	cRepeat = "Y"
	while (cRepeat = "Y")
	begin
		display "------------------------------------"
		display "-           Welcome To             -"
		display "-    UNICORN FRIED CHICKEN         -"
		display "-            Depok                 -"
		display "------------------------------------"
		display "------------------------------------"
		display "------------------------------------"
		display "| 1. Mineral Water        Rp 10.000|" 
		display "| 2. Lemon Tea            Rp 10.000|" 
		display "| 3. Coca Cola            Rp 10.000|" 
		display "| 4. Sprite               Rp 10.000|" 
		display "| 5. Pepsi                Rp 10.000|" 
		display "------------------------------------"
		display "        INSERT YOUR CHOICE          "
		display "------------------------------------"
		accept cChoice
		switch (cChoice)
		begin
			case 1 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice1
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			case 2 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice2
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			case 3 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice3
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			case 4 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice4
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			case 5 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice5
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			default
				display "ERROR"
		end
	end
End

procedure prcBurger_Package
Begin
	character cChoice, cRepeat
	numeric nPrice 1, nPrice2, nPrice3, nTotal, nAmount, nCash, nChange
	nPrice1 = 45000
	nPrice2 = 60000
	nPrice3 = 70000
	cRepeat = "Y"
	while (cRepeat = "Y")
	begin
		display "------------------------------------"
		display "-           Welcome To             -"
		display "-    UNICORN FRIED CHICKEN         -"
		display "-            Depok                 -"
		display "------------------------------------"
		display "------------------------------------"
		display "------------------------------------"
		display "| 1. Apackage             Rp 45.000|" 
		display "| 2. Bpackage             Rp 60.000|" 
		display "| 3. Cpackage             Rp 70.000|" 
		display "------------------------------------"
		display "        INSERT YOUR CHOICE          "
		display "------------------------------------"
		accept cChoice
		switch (cChoice)
		begin
			case 1 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice1
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			case 2 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice2
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			case 3 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice3
				display "Your total is" nTotal
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			default
				display "ERROR"
		end
	end
End

procedure prcApackage
Begin
	character cChoice
	display "------------------------------------"
	display "-           Welcom To              -"
	display "-    UNICORN FRIED CHICKEN         -"
	display "-            Depok                 -"
	display "------------------------------------"
	display "------------------------------------"
	display "------------------------------------"
	display "| Cheese Burger  +  French Fries   |"
	display "|   Soft Drink / Mineral Water     |"
	display "------------------------------------"
	display "        INSERT YOUR CHOICE          "
	display "------------------------------------"
	accept cChoice
	switch (cChoice)
End

procedure prcBpackage
Begin
	character cChoice
	display "---------------------------------------"
	display "-           Welcom To                 -"
	display "-    UNICORN FRIED CHICKEN            -"
	display "-            Depok                    -"
	display "---------------------------------------"
	display "---------------------------------------"
	display "---------------------------------------"
	display "| Double Cheese Burger + French Fries |"
	display "|    Soft Drink / Mineral Water       |"
	display "---------------------------------------"
	display "        INSERT YOUR CHOICE             "
	display "---------------------------------------"
	accept cChoice
	switch (cChoice)
End

procedure prcCpackage
Begin
	character cChoice
	display "---------------------------------------"
	display "-           Welcom To                 -"
	display "-    UNICORN FRIED CHICKEN            -"
	display "-            Depok                    -"
	display "---------------------------------------"
	display "---------------------------------------"
	display "---------------------------------------"
	display "| Triple Cheese Burger + French Fries |"
	display "|    Soft Drink / Mineral Water       |"
	display "---------------------------------------"
	display "        INSERT YOUR CHOICE             "
	display "---------------------------------------"
	accept cChoice
	switch (cChoice)
End

procedure prcFried_Chicken_Package
Begin
	character cChoice, cRepeat
	numeric nPrice 1, nPrice2, nPrice3, nTotal, nAmount, nCash, nChange
	nPrice1 = 25000
	nPrice2 = 30000
	nPrice3 = 30000
	cRepeat = "Y"
	while (cRepeat = "Y")
	begin
		display "------------------------------------"
		display "-           Welcom To              -"
		display "-    UNICORN FRIED CHICKEN         -"
		display "-            Depok                 -"
		display "------------------------------------"
		display "------------------------------------"
		display "------------------------------------"
		display "| 1. Apackage             Rp 25.000|" 
		display "| 2. Bpackage             Rp 30.000|" 
		display "| 3. Cpackage             Rp 30.000|" 
		display "------------------------------------"
		display "        INSERT YOUR CHOICE          "
		display "------------------------------------"
		accept cChoice
		switch (cChoice)
		begin
			case 1 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice1
				display "Your total is" nTotal
				display "Please insert your cash"
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			case 2 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice2
				display "Your total is" nTotal
				display "Please insert your cash"
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			case 3 :
				display "How many would you buy?"
				accept nAmount
				nTotal = nAmount * nPrice3
				display "Your total is" nTotal
				display "Please insert your cash"
				nGrandTotal = nGrandTotal + nTotal
				cRepeat = 'N'
			break
			default
				display "ERROR"
		end
	end
End

procedure prcApackage
Begin
	character cChoice
	display "---------------------------------------"
	display "-           Welcom To                 -"
	display "-    UNICORN FRIED CHICKEN            -"
	display "-            Depok                    -"
	display "---------------------------------------"
	display "---------------------------------------"
	display "---------------------------------------"
	display "| Normal Fried Chicken + French Fries |"
	display "|    Soft Drink / Mineral Water       |"
	display "---------------------------------------"
	display "        INSERT YOUR CHOICE             "
	display "---------------------------------------"
	accept cChoice
	switch (cChoice)
End

procedure prcBpackage
Begin
	character cChoice
	display "---------------------------------------"
	display "-           Welcom To                 -"
	display "-    UNICORN FRIED CHICKEN            -"
	display "-            Depok                    -"
	display "---------------------------------------"
	display "---------------------------------------"
	display "---------------------------------------"
	display "| Crispy Fried Chicken + French Fries |"
	display "|    Soft Drink / Mineral Water       |"
	display "---------------------------------------"
	display "        INSERT YOUR CHOICE             "
	display "---------------------------------------"
	accept cChoice
	switch (cChoice)
End

procedure prcCpackage
Begin
	character cChoice
	display "---------------------------------------"
	display "-           Welcom To                 -"
	display "-    UNICORN FRIED CHICKEN            -"
	display "-            Depok                    -"
	display "---------------------------------------"
	display "---------------------------------------"
	display "---------------------------------------"
	display "|  Spicy Fried Chicken + French Fries |"
	display "|    Soft Drink / Mineral Water       |"
	display "---------------------------------------"
	display "        INSERT YOUR CHOICE             "
	display "---------------------------------------"
	accept cChoice
	switch (cChoice)
End


----------------------------------------------------------------------------------------
procedure PrcTotal
begin
	numeric nMark, nGrandTotal, nChange, nCash, nChange
	nMark = 0
	while nMark = 0
	begin
		display "Your Total is" nGrandTotal
		display "Please insert your cash"
		accept nCash
		if nCash < nGrandTotal
			begin
				display "Not enough money"
			end
		else
			begin
				if nCash > nGrandTotal
					begin
						nChange = nGrandTotal - nCash
						display "here is your change" nChange
					end
				else
					begin
						display "Thanks"
					end
				endif
				nGrandTotal = 0
				nMark = 1
			end
		endif
	end
end
----------------------------------------------------------------------------------------
 