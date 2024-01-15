// Note:
// If you have trouble reading input, you can clear std::cin and 
// ignore everything in the buffer with:

// std::cin.clear();
// std::cin.ignore(std::numeric_limits<std::streamsize>::max(),'\n');

// Make sure you #include <limits> to use it.
#include <iostream>

template <typename T>
T max(T x, T y)
{
    return (x > y) ? x : y;
}


int main()
{
    int num01 {10}, num02 {20};
    char c01 {'A'}, c02 {'h'};
    double d01 {100.721}, d02 {76.4123};

    std::cout << "INT: " << max<int>(num01, num02) << std::endl;
    std::cout << "CHAR: " << max<char>(c01, c02) << std::endl;
    std::cout << "DOUBLE: " << max<double>(d01, d02) << std::endl;

    return 0;
}