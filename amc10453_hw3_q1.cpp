// amc10453_hw3_q1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//variable for first item and second item
//bool for club card
//tax rate percentage 
//

#include <iostream>
using namespace std;

int main()
{
    double firstItemPrice, secondItemPrice;
    double basePrice, priceAfterDiscounts, taxAmount, totalPrice;
    string hasClubCard;
    float taxRate;


    cout << "Enter price of first item: "; cin >> firstItemPrice;
    cout << "Enter price of second item: "; cin >> secondItemPrice;
    cout << "Does customer have a club card? (Y/N): "; cin >> hasClubCard;
    cout << "Enter tax rate, e.g. 5.5 for 5.5% tax: "; cin >> taxRate;

    
    double basePrice = firstItemPrice + secondItemPrice;
    cout << "Base price: " << basePrice << endl;

    // Apply buy-one-get-one-half-off promotion
    double lowerPrice = min(firstItemPrice, secondItemPrice);
    priceAfterDiscounts = basePrice - (lowerPrice / 2); // Half off the lower priced item

    // Check if user has club card
    if (hasClubCard == "Y" || hasClubCard == "y")
    {
        priceAfterDiscounts *= 0.9;  // 10% discount
    }

    cout << "Price after discounts: " << priceAfterDiscounts << endl;

    taxAmount = priceAfterDiscounts * (taxRate / 100);  // Calculate tax amount
    totalPrice = priceAfterDiscounts + taxAmount;       // Add tax to price after discounts

    totalPrice = static_cast<int>(totalPrice * 100000) / 100000.00;

    cout << "Total price: " << totalPrice << endl;

    return 0;
}

