# this program is intended to be a copy of my C++ Module 2 Assignment is Python
# this program displays the Logo and Sale Prices for Gunters Mountain Shop

# Define the variables for sale items and assign prices
boot_SalePrice = 59.99
pullover_SalePrice = 10.50
gaiters_SalePrice = 12.25
cleats_SalePrice = 14.99

# Draw the logo
print('*'*41)
print(r'**        //\\                         **')
print(r'**       //  \\  //\\                  **')
print(r'**      //    \\//  \\      //\\       **')
print(r'**     //            \\    //  \\      **')
print(r'**    //              \\  //    \\     **')
print(r'**   //                \\//      \\    **')
print(r'**  //                            \\   **')
print('*'*41)
print('**  Welcome to Gunter\'s Mountain Shop  **')
print('*'*41)

# Prompt customer to enter the number of each product they would like to purchase
print(r'How many Hunter Climbing Boots would you like to purchase?')
boots_Purchased = int(input())
print(r'How many Fleece Pullovers would you like to purchase?')
pullovers_Purchased = int(input())
print(r'How many Snow Gaiters would you like to purchase?')
gaiters_Purchased = int(input())
print(r'How many Traction Cleats would you like to purchase?')
cleats_Purchased = int(input())
print('*'*60)

# Calculate the customer's total
boots_Total = (boot_SalePrice * boots_Purchased)
pullovers_Total = (pullover_SalePrice * pullovers_Purchased)
gaiters_Total = (gaiters_SalePrice * gaiters_Purchased)
cleats_Total = (cleats_SalePrice * cleats_Purchased)
purchase_Total = (boots_Total + pullovers_Total + gaiters_Total + cleats_Total)

# output the sale items and prices
print(r'Sale Items              Sale Prices')
print(r'Hunter Climbing Boots   $' + str(boot_SalePrice) + r'         Total = $' + str(round(boots_Total, 2)))
print(r'Fleece Pullovers        $' + str(pullover_SalePrice) + r'          Total = $' + str(round(pullovers_Total, 2)))
print(r'Snow Gaiters            $' + str(gaiters_SalePrice) + r'         Total = $' + str(round(gaiters_Total, 2)))
print(r'Traction Cleats         $' + str(cleats_SalePrice) + r'         Total = $' + str(round(cleats_Total, 2)))
print('*'*60)
print()
print(r'                                         Total = $' + str(round(purchase_Total,2)))







