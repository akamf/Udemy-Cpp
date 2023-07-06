#include "CustomString.h"


int main()
{
    std::cout << std::boolalpha << std::endl;

    CustomString a{"darth vader"};
    CustomString b{"darth vader"};

    std::cout << (a == b) << std::endl;
    std::cout << (a != b) << std::endl;

    b = "padme";
    std::cout << (a == b) << std::endl;
    std::cout << (a != b) << std::endl;
    std::cout << (a < b) << std::endl;
    std::cout << (a > b) << std::endl;

    CustomString s1{"OBI-WAN"};
    std::cout << s1 << std::endl;
    s1 = -s1;
    std::cout << s1 << std::endl;

    s1 = s1 + "*****";
    std::cout << s1 << std::endl;

    s1 += "-----";
    std::cout << s1 << std::endl;

    CustomString s2{"Yoda"};
    s1 = s2 * 3;
    std::cout << s1 << std::endl;

    CustomString s3{"Chewbacca"};
    s3 *= 5;
    std::cout << s3 << std::endl;

    CustomString s = "Anakin";
    ++s;
    std::cout << s << std::endl;

    s = -s;
    std::cout << s << std::endl;

    CustomString result{};
    result = ++s;
    std::cout << s << std::endl;
    std::cout << result << std::endl;

    s = "Darth Maul";
    s++;
    std::cout << s << std::endl;

    s = -s;
    std::cout << s << std::endl;
    result = s++;
    std::cout << s << std::endl;
    std::cout << result << std::endl;

    return 0;
}