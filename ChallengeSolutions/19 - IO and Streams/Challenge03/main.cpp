#include <fstream>
#include <iostream>
#include <string>

bool find_word(const std::string& word, const std::string& target)
{
    std::size_t found = target.find(word);
    return found != std::string::npos;
}

int main()
{
    std::ifstream in_file {"romeoandjuliet.txt"};

    if (!in_file)
    {
        std::cerr << "Problem opening file" << std::endl;
        return 1;
    }

    std::string word {}, current_word {};
    int total_words {}, occurencies {};

    std::cout << "Enter the substring to search for: "; std::cin >> word;

    while (in_file >> current_word)
    {
        total_words++;
        if (find_word(word, current_word))
            occurencies++;
    }
    
    std::cout << total_words << " words were searched..." << std::endl;
    std::cout << "The substring " << word << " was found " << occurencies << " times" << std::endl;

    in_file.close();
    return 0;
}