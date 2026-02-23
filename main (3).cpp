/*
 * Name: [Victor Gonzalez]
 * Date: February 22, 2026
 * Description: A program that turns USD amount into 
 * Ethereum (ETH) and Bitcoin (BTC) using constant exchange rates.
 */

#include <iostream>
#include <iomanip> // Needed for setprecision and fixed

using namespace std;

int main() {
    // Constants for conversion factors
    const double ETH_PER_DOLLAR = 0.00053;
    const double BTC_PER_DOLLAR = 0.000016;

    // Money to convert
    int dollars;

    // Input dollar amount
    cout << "Enter dollar amount to convert into Ethereum and Bitcoin:" << endl;
    cin >> dollars;

    // Calculations
    double totalEth = dollars * ETH_PER_DOLLAR;
    double totalBtc = dollars * BTC_PER_DOLLAR;

    // Output conversion will use 6 decimal places
    cout << fixed << setprecision(6);
    cout << "\nUsing the conversion rates of " << ETH_PER_DOLLAR << " Ethereum per dollar and " 
         << BTC_PER_DOLLAR << " Bitcoin per dollar:" << endl;

    // Output will have 4 decimal places
    cout << setprecision(4);
    cout << dollars << " dollars = " << totalEth << " Ethereum." << endl;
    cout << dollars << " dollars = " << totalBtc << " Bitcoin." << endl;

    return 0;
}