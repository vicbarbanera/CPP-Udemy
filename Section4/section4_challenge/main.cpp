#include <iostream>

int main() {

    int favorite_number;

    std::cout << "Enter your favorite number: ";

    std::cin >> favorite_number;

    std::cout << "Amazing! That is my favorite number too." << std::endl;

    std::cout << "No really! " << favorite_number << " is my favorite number." << std::endl;

    return 0;

}