#include <iomanip> // LIBARY FOR SORTING THE TABLE
#include <iostream>
using namespace std;

int main() {
  string itemName[3]; // ARRAY FOR THE ITEMS NAME
  int itemQuantity[3], taxRate; // ARRAY FOR THE ITEMS QUANTITY
  double itemPrice[3]; // ITEM PRICE ARRAY 
  double totalPrice = 0, finalPrice = 0, payment = 0; // TOTAL PRICE, FINAL PRICE, PAYMENT
  cout << "----- Panther Express Cashier's Calculator -----\n";
  for (int item = 0; item <= 2; ++item) { // LOOPS 3 ITEMS FOR THE USER TO INPUT ALL 3 ITEMS
    cout << "Unit Name: ";
    cin >> itemName[item];
    cout << "Unit Price for " << itemName[item] << ": ";
    cin >> itemPrice[item];
    cout << "Unit Quantity for " << itemName[item] << ": ";
    cin >> itemQuantity[item];
    cout << "\n";
  }

  cout << "Tax Rate (in whole numbers): "; // TAX RATE
  cin >> taxRate;
  cout << "\n$----- cost summary -----$\n";
  const char separator = ' '; // SETS THE SEPARATOR TO A SPACE
  const int nameWidth = 15; // SETS THE WIDTH OF THE NAME TO 15
  const int numWidth = 12; // SETS THE WIDTH OF THE NUMBERS TO 12
  cout << left << setw(nameWidth) << setfill(separator) << "Item"; // PRINTS THE ITEM NAME
  cout << left << setw(numWidth) << setfill(separator) << "Price"; // PRINTS THE PRICE
  cout << left << setw(numWidth) << setfill(separator) << "Quantity"; // PRINTS THE QUANITITY
  cout << left << setw(numWidth) << setfill(separator) << "Cost"; // PRINTS THE COST 
  cout << "\n------------------------------------------------\n";
  for (int item = 0; item <= 2; ++item) { // LOOPS 3 TIMES TO DISPLAY THE TABLE FOR ALL 3 ITEMS
    cout << left << setw(nameWidth) << setfill(separator) << itemName[item];
    cout << left << setw(numWidth) << setfill(separator) << itemPrice[item];
    cout << left << setw(numWidth) << setfill(separator) << itemQuantity[item];
    cout << left << setw(numWidth) << setfill(separator)
         << itemPrice[item] * itemQuantity[item];
    cout << "\n";
  }
  cout << "\n$----- cost pre tax -----$\n";
  for (int item = 0; item <= 2; ++item) {
    totalPrice = totalPrice + (itemPrice[item] * itemQuantity[item]);  // CALCULATES THE COST
  }
  cout << "$" << totalPrice;
  
  cout << "\n\n$----- cost w/ tax -----$\n";
  finalPrice = totalPrice * (1 + (taxRate / 100.0)); // CALCULATES THE FINAL COST WITH TAX
  cout << "$" << finalPrice;
  cout << "\n------------------------------------------------\n";
  cout << "How much money did you receive?\n"; // USER INPUTS THE MONEY THEY RECEIVED
  cin >> payment;
  cout << "\n\n$----- Change -----$\n";

  double change = payment - finalPrice; // CALCULATES THE CHANGE
  cout << "$" << change;
  cout << "\n------------------------------------------------\n";
  cout << "\n\nDenominations...\n\n";
  int dollars = change;
  double cents = change - dollars;
  
  int hundredBills = dollars / 100; // The code calculates the number of hundred dollar bills by dividing the total amount by 100 and calculates the remainder.
  dollars %= 100;
  
  int twentyBills = dollars / 20;
  dollars %= 20;
  
  int tenBills = dollars / 10;
  dollars %= 10;
  
  int fiveBills = dollars / 5;
  dollars %= 5;
  
  int oneBills = dollars;
  
  int quarters = cents / 0.25;
  cents -= quarters * 0.25;
  
  int dimes = cents / 0.1;
  cents -= dimes * 0.1;
  
  int nickels = cents / 0.05;
  cents -= nickels * 0.05;
  
  int pennies = cents * 100;

  // prints the change in exact bills
  cout << "Hundred dollar bills: " << hundredBills << endl;
  cout << "Twenty dollar bills: " << twentyBills << endl;
  cout << "Ten dollar bills: " << tenBills << endl;
  cout << "Five dollar bills: " << fiveBills << endl;
  cout << "One dollar bills: " << oneBills << endl;
  cout << "Quarters: " << quarters << endl;
  cout << "Dimes: " << dimes << endl;
  cout << "Nickels: " << nickels << endl;
  cout << "Pennies: " << pennies + 1 << endl;
  
}
