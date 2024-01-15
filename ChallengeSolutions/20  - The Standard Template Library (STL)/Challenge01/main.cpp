#include <cctype>
#include <deque>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

bool is_palindrome(const std::string& str);

int main()
{
    std::vector<std::string> samples {
        "a", "aa", "aba", "abba", "abbcbba", "ab", "abc", "radar", "bob", "ana",
        "avid diva", "Amore, Roma", "A Toyota's a toyota", "A Santa at NASA", "C++",
        "A man, a plan, a cat, a ham, a yak, a yam, a hat, a canal-Panama!", "This is a palindrome", "palindrome" 
    };

    // Set a format width based on the longest sample word
    size_t width {0};
    for (const std::string &str : samples)
    {
        if (str.length() > width)
            width = str.length() + 2;
    }

    std::cout << std::boolalpha;
    std::cout << std::setw(width) << std::left
              << "String" << "Result" 
              << std::endl;

    for(const std::string& str : samples)
    {
            std::cout << std::setw(width) << std::left 
                  << str << is_palindrome(str) 
                  << std::endl;
    }

    std::cout << std::endl;

    return 0;
}

bool is_palindrome(const std::string& str)
{
    std::deque<char> temp;

    for (char c : str)
    {
        if (std::isalpha(c))
            temp.push_back(std::toupper(c));
    }

    while (temp.size() > 1)
    {
        if (temp.front() != temp.back())
            return false;

        temp.pop_front();
        temp.pop_back();
    }
    return true;
}
