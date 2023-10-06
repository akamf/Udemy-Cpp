#include <algorithm>
#include <iostream>
#include <string>

void process_string(std::string& str);
bool is_palindrome(const std::string& str);

int main()
{
    std::string test01 {"A Santa at NASA"}, test02 {"A Toyota's a toyota"}, test03 {"A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!"}, test04 {"This is IT! Fail!"};
    process_string(test01);
    process_string(test02);
    process_string(test03);
    process_string(test04);

    if (is_palindrome(test01))
        std::cout << test01 << " is a palindrome" << std::endl;
    else
        std::cout << test01 << " is not a palindrome" << std::endl;

    if (is_palindrome(test02))
        std::cout << test02 << " is a palindrome" << std::endl;
    else
        std::cout << test02 << " is not a palindrome" << std::endl;
    if (is_palindrome(test03))
        std::cout << test03 << " is a palindrome" << std::endl;
    else
        std::cout << test03 << " is not a palindrome" << std::endl;

    if (is_palindrome(test04))
        std::cout << test04 << " is a palindrome" << std::endl;
    else
        std::cout << test04 << " is not a palindrome" << std::endl;

    return 0;
}

void process_string(std::string& str)
{
    std::string result {};
    for (char c : str)
    {
        if (std::isalpha(c))
            result += std::toupper(c);
    }
    str = result;
}
bool is_palindrome(const std::string& str)
{
    size_t reverse_counter {};
    for (size_t i = 0; i < str.length(); i++)
    {
        reverse_counter = (str.length() - 1) - i;
        if (str.at(i) != str.at(reverse_counter))
            return false;
    }
    return true;
}