#include <iostream>
#include <vector>

int main()
{
    char option{};
    double mean{};
    int num{}, total{}, smallest_num{}, largest_num{};
    std::vector<int> numbers;

    do
    {
        std::cout << "=== MENU ================="
                << "\nP - Print numbers"
                << "\nA - Add a number"
                << "\nM - Display mean of the numbers"
                << "\nS - Display the smallest number"
                << "\nL - Display the largest number"
                << "\nQ - Quit"
                << "\n\nEnter your choice: "; std::cin >> option;
        
        option = std::toupper(option);

        switch (option)
        {
        case 'P':
            if (numbers.empty())
                std::cout << "[] - the list is empty\n\n";
            else
            {
                std::cout << "[ ";
                for (int num : numbers)
                    std::cout << num << " ";
                std::cout << "]\n\n";
            }
            break;
        case 'A':
            std::cout << "Enter a number to add: "; std::cin >> num;
            numbers.push_back(num);
            std::cout << num << " added\n";
            break;
        case 'M':
            
            if (numbers.empty())
                std::cout << "Unable to calculate the mean - no data\n\n";
            else
            {
                total = 0;
                for (int num : numbers)
                    total += num;
                
                mean = static_cast<double>(total / numbers.size());
                std::cout << "The mean number is: " << mean << "\n\n";
            }

            break;
        case 'S':
            if (numbers.empty())
                std::cout << "Unable to determine the smallest number - list is empty\n\n";
            else
            {
                smallest_num = numbers.at(0);
                for (int num : numbers)
                {
                    if (num < smallest_num)
                        smallest_num = num;
                }
                std::cout << "The smallest number is " << smallest_num << "\n\n";
            }

            break;
        case 'L':
            if (numbers.empty())
                std::cout << "Unable to determine the largest number - list is empty\n\n";
            else
            {
                largest_num = numbers.at(0);
                for (int num : numbers)
                {
                    if (num > largest_num)
                        largest_num = num;
                }
                std::cout << "The largest number is " << largest_num << "\n\n";
            }

            break;
        case 'Q':
            std::cout << "Goodbye!";
            break;
        default:
            std::cout << "Enter a valid option!\n\n";
            break;
        }
    } while (option != 'Q');
    
    return 0;
}