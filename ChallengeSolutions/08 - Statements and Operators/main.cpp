#include <iostream>
#include <string>


int main()
{
    const int dollar{100}, quarter{25}, dime{10}, nickel{5};
    int num_dollars{0}, num_quarters{0}, num_dimes{0}, num_nickels{0}, num_pennies{0};
    int cents{0}, buff{0};

    std::cout << "Enter an amount in cents: "; std::cin >> cents;

    num_dollars = cents / dollar;
    buff = cents % dollar;
    num_quarters = buff / quarter;
    buff %= quarter;
    num_dimes = buff / dime;
    buff %= dime;
    num_nickels = buff / nickel;
    buff %= nickel;
    num_pennies = buff;

    std::cout << "\ndollars: " << num_dollars
              << "\nquarters: " << num_quarters
              << "\ndimes: " << num_dimes
              << "\nnickels" << num_nickels
              << "\npennies: " << num_pennies;

    return 0;
}