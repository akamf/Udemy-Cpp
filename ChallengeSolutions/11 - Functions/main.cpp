#include <algorithm>
#include <iostream>
#include <limits>
#include <vector>


void display_menu();
char get_menu_option();
bool validate_number(int& num);

void add_number(int& num, std::vector<int>& numbers);
double calculate_mean(std::vector<int>& numbers);
void display_numbers(const std::vector<int>& numbers);
int get_largest_number(std::vector<int>& numbers);
int get_smallest_number(std::vector<int>& numbers);

int main()
{
    char option{};
    double mean{};
    int num{}, largest_num{}, smallest_num{};
    std::vector<int> numbers{};

    do
    {
        display_menu();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');  // Ignore all instream to the end of line
        option = get_menu_option();

        switch (option)
        {
            case 'P':
                display_numbers(numbers);
                break;
            case 'A':
                std::cout << "Enter a number to add: "; std::cin >> num;
                add_number(num, numbers);
                break;
            case 'M':
                mean = calculate_mean(numbers);
                
                if (mean)
                    std::cout << "The mean number is: " << mean << "\n\n";
                else
                    std::cout << "The mean number is: " << mean << "\n\n";

                break;
            case 'S':
                smallest_num = get_smallest_number(numbers);

                if (smallest_num)
                    std::cout << "The smallest number is " << smallest_num << "\n\n";
                else
                    std::cout << "Unable to determine the smallest number - the list is empty\n\n";

                break;
            case 'L':
                largest_num = get_largest_number(numbers);

                if (largest_num)
                    std::cout << "The largest number is " << largest_num << "\n\n";
                else
                    std::cout << "Unable to determine the largest number - the list is empty\n\n";

                break;
            case 'Q':
                std::cout << "Goodbye!\n";
                break;
            default:
                std::cout << "Enter a valid option!\n\n";
                break;
        }

    } while (option != 'Q');
     

    return 0;
}


void display_menu()
{
    std::cout << "=== MENU ================="
        << "\nP - Print numbers"
        << "\nA - Add a number"
        << "\nM - Display mean of the numbers"
        << "\nS - Display the smallest number"
        << "\nL - Display the largest number"
        << "\nQ - Quit\n\n";
}
char get_menu_option()
{
    char option{};

    std::cout << "Enter your choice: "; std::cin >> option;
    option = std::toupper(option);

    return option;
}
bool validate_number(int& num)
{
    return !std::cin.fail();
}

void add_number(int& num, std::vector<int>& numbers)
{
    if (validate_number(num))
    {
        // See if the number occurs in the vector, to prevent multiple entries
        if (std::count(numbers.begin(), numbers.end(), num))
            std::cout << num << " already exists in the list!\n\n";
        else
        {
            numbers.push_back(num);
            std::cout << num << " aded!\n\n";
        }
    }
    else
    {
        std::cout << "Only numbers are valid!\n\n";
        std::cin.clear();
    }
}
double calculate_mean(std::vector<int>& numbers)
{
    if (numbers.empty())
        return 0;
    
    double m{};
    int total{};

    for (int& x : numbers)
        total += x;

    m = static_cast<double>(total / numbers.size());
    return m;
}
void display_numbers(const std::vector<int>& numbers)
{
    if (numbers.empty())
        std::cout << "[] - the list is empty\n\n";
    else
    {
        std::cout << "[ ";
        for (int num : numbers)
            std::cout << num << " ";
        std::cout << "]\n\n";
    }
}
int get_largest_number(std::vector<int>& numbers)
{
    if (numbers.empty())
        return 0;
    
    int largest{numbers.at(0)};
    for (int num : numbers)
    {
        if (num > largest)
            largest = num;
    }
    return largest;
}
int get_smallest_number(std::vector<int>& numbers)
{
    if (numbers.empty())
        return 0;
    
    int smallest{numbers.at(0)};
    for (int num : numbers)
    {
        if (num < smallest)
            smallest = num;
    }
    return smallest;
}