#include <iostream>

int main()
{
    const int small_room_fee{25}, large_room_fee{35}, estimate_validation{30};
    const double tax_rate{0.06};

    int num_small_rooms{0}, num_large_rooms{0};

    std::cout << "Frank's Carpet Cleaning Service\nCharges:\n"
              << "\t$" << small_room_fee << " per small room\n"
              << "\t$" << large_room_fee << " per large room\n"
              << "Sales tax rate is " << (tax_rate * 100) << "%\n"
              << "Estimates are valid for " << estimate_validation << " days\n\n"
              << "Enter how many small rooms you would like to be cleaned: ";
    std::cin >> num_small_rooms;
    std::cout << "Enter how many large rooms you would like to be cleaned: ";
    std::cin >> num_large_rooms;

    int total_room_fee = (num_small_rooms * small_room_fee) + (num_large_rooms * large_room_fee);
    double tax = total_room_fee * tax_rate;

    std::cout << "\n\n=== ESTIMATE ======================="
              << "\nNumber of small rooms: " << num_small_rooms
              << "\nNumber of large rooms: " << num_large_rooms
              << "\nPrice per small room: $" << small_room_fee
              << "\nPrice per large room: $" << large_room_fee
              << "\nCost: $" << total_room_fee
              << "\nTax: $" << tax << "\n==============================="
              << "\nTotal estimate: $" << (total_room_fee + tax)
              << "\nThis estimate is valid for " << estimate_validation << " days\n\n";

    return 0;
}