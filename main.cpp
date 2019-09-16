// This Program Displays The Logo and Sale Prices for Gunters Mountain Shop - Tyler Trice,     // COP2000, 9/15/2019
#include <iostream>
#include <iomanip>
using namespace std;


int main()
 {

  // Define variables for sale items and initialize the values to the sale prices

  double bootSalePrice = 59.99, pulloverSalePrice = 10.50, gaitersSalePrice = 12.25, cleatsSalePrice = 14.99;
  double bootsTotal, pulloversTotal, gaitersTotal, cleatsTotal, purchaseTotal;

  int bootsPurchased, pulloversPurchased, gaitersPurchased, cleatsPurchased;

  // Output the logo

  cout << "*****************************************\n";
  cout << "**        //\\                          **\n";    
  cout << "**       //  \\  //\\                    **\n";     
  cout << "**      //    \\//  \\      //\\          **\n";
  cout << "**     //           \\    //  \\         **\n";
  cout << "**    //             \\  //    \\        **\n";
  cout << "**   //               \\//      \\       **\n";
  cout << "**  //                          \\      **\n";
  cout << "*****************************************\n";
  cout << "**  Welcome to Gunter's Mountain Shop  **\n";
  cout << "*****************************************\n";
  cout << endl;

  // Prompt customer to enter the number of each product they would like to purchase
  cout << "How many Hunter Climbing Boots would you like to purchase? ";
  cin >> bootsPurchased;
  cout << "How many Fleece Pullovers would you like to purchase? ";
  cin >> pulloversPurchased;
  cout << "How many Snow Gaiters would you like to purchase? ";
  cin >> gaitersPurchased;
  cout << "How many Traction Cleats would you like to purchase? ";
  cin >> cleatsPurchased;
  cout << "********************************************************\n";
  cout << endl;

  // Calculate The total
  bootsTotal = (bootSalePrice * bootsPurchased);
  pulloversTotal = (pulloverSalePrice * pulloversPurchased);
  gaitersTotal = (gaitersPurchased * gaitersSalePrice);
  cleatsTotal = (cleatsPurchased * cleatsSalePrice);
  purchaseTotal = (bootsTotal + pulloversTotal + gaitersTotal + cleatsTotal);

  // Output the sale items and the prices
  cout << "Sale Items               Sale Price\n";
  // Hunter Climbing Boots
  cout << "Hunter Climbing Boots    $" << bootSalePrice << "    Total = $" << setprecision(2) << fixed << bootsTotal << endl;
  // Fleece Pullovers
  cout << "Fleece Pullovers         $" << pulloverSalePrice << "    Total = $" << setprecision(2) << fixed << pulloversTotal<< endl;
  // Snow Gaiters
  cout << "Snow Gaiters             $" << gaitersSalePrice << "    Total = $" << setprecision(2) << fixed << gaitersTotal << endl;
  // Traction Cleats
  cout << "Traction Cleats          $" << cleatsSalePrice << "    Total = $" << setprecision(2) << fixed << cleatsTotal << endl;
  
  cout << "********************************************************\n";
  cout << endl; 
  cout << setw(45) << setprecision(2) << fixed << right << "Total = $" << purchaseTotal;

return 0;
} 