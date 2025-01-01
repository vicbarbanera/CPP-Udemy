#include <iostream>

int main() {

    const double small_price {25.0};
    const double large_price {35.0};
    const double tax {0.06};

    std::cout << "Hello! Welcome to Pics' cleaning services" << std::endl;
    std:: cout << "=========================================\n";

    std::cout << "How many small rooms would you like cleaned: ";
    int small_rooms;
    std::cin >> small_rooms;

    std::cout << "How many large rooms would you like cleaned: ";
    int large_rooms;
    std::cin >> large_rooms;

    std::cout << std::endl;

    std::cout << "Estimate for carpet cleaning services:" << std::endl;
    std::cout << "Number of small rooms: " << small_rooms << std::endl;
    std::cout << "Number of large rooms: " << large_rooms << std::endl;
    std::cout << "Price per small room: " << small_price << std::endl;
    std::cout << "Price per large room: " << large_price << std::endl;
    std::cout << "Cost: " << (small_rooms * small_price) + (large_rooms * large_price) << std::endl;
    std::cout << "Tax: " << ((small_rooms * small_price) + (large_rooms * large_price)) * tax << std::endl;
    std::cout << "==============================\n";
    std::cout << "Total Estimate: " << (((small_rooms * small_price) + (large_rooms * large_price)) * tax) + (small_rooms * small_price) + (large_rooms * large_price) << std::endl;
    std::cout << "This estimate is valid for 30 days." << std::endl;
    
    return 0;
}