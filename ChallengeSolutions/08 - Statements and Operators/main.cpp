#include <iostream>


int main()
{
    int DOLLAR{100}, QUARTER{25}, DIME{10}, NICKEL{5}, PENNY{1};
    int num_dollars{0}, num_quarters{0}, num_dimes{0}, num_nickels{0}, num_pennies{0};
    int cents{0}, buff{0};

    std::cout << "Enter an amount in cents: "; std::cin >> cents;

    num_dollars = cents / DOLLAR;
    buff = cents % DOLLAR;
    num_quarters = buff / QUARTER;
    buff %= QUARTER;
    num_dimes = buff / DIME;
    buff %= DIME;
    num_nickels = buff / NICKEL;
    buff %= NICKEL;
    num_pennies = buff / PENNY;

    std::cout << "\ndollars: " << num_dollars
              << "\nquarters: " << num_quarters
              << "\ndimes: " << num_dimes
              << "\nnickels" << num_nickels
              << "\npennies: " << num_pennies;

    return 0;
}