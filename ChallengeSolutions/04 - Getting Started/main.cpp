#include <iostream>

int main()
{
    int num{0};

    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> num;

    std::cout << "\nAmazing!! That's my favorite number too!\n"
              << "No really!!, " << num << " is my favorite number!\n";

    return 0;
}