#include <iostream>

int main()
{
    int SMALL_ROOM_FEE{25}, LARGE_ROOM_FEE{35}, ESTIMATE_VALID_TIME{30};
    double TAX_RATE{0.06};  // 6%

    int num_small_rooms{0}, num_large_rooms{0};

    std::cout << "Frank's Carpet Cleaning Service\nCharges:\n"
              << "\t$" << SMALL_ROOM_FEE << " per small room\n"
              << "\t$" << LARGE_ROOM_FEE << " per large room\n"
              << "Sales tax rate is " << (TAX_RATE * 100) << "%\n"
              << "Estimates are valid for " << ESTIMATE_VALID_TIME << " days\n\n"
              << "Enter how many small rooms you would like to be cleaned: ";
    std::cin >> num_small_rooms;
    std::cout << "Enter how many large rooms you would like to be cleaned: ";
    std::cin >> num_large_rooms;

    int total_room_fee{(num_small_rooms*SMALL_ROOM_FEE)+(num_large_rooms*LARGE_ROOM_FEE)};
    double tax{total_room_fee*TAX_RATE};

    std::cout << "\n\n=== ESTIMATE ======================="
              << "\nNumber of small rooms: " << num_small_rooms
              << "\nNumber of large rooms: " << num_large_rooms
              << "\nPrice per small room: $" << SMALL_ROOM_FEE
              << "\nPrice per large room: $" << LARGE_ROOM_FEE
              << "\nCost: $" << total_room_fee
              << "\nTax: $" << tax << "\n==============================="
              << "\nTotal estimate: $" << (total_room_fee + tax)
              << "\nThis estimate is valid for " << ESTIMATE_VALID_TIME << " days\n\n";

    return 0;
}