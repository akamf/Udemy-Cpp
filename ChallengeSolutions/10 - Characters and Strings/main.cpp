#include <iostream>
#include <string>


int main()
{
    const std::string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    std::string cipher_key{"iRxVtuXqHjJyfpOaZzFcsmGKBvTwdkLYDhWlNnSebMrgCUEoPQ"};

    std::string encrypted_word{}, user_word{};

    std::cout << "Enter a word to encrypt: "; std::cin >> user_word;
    for (char c : user_word)
    {
        for (int i=0; i < alphabet.size(); i++)
        {
            if (c == alphabet.at(i))
                encrypted_word += cipher_key.at(i);
        }
    }

    std::cout << "\nEncrypted word: " << encrypted_word << "\nOriginal word: " << user_word << "\n";
    return 0;
}