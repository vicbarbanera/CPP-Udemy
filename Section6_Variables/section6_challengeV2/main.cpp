#include <iostream>

void print_estimate(std::string str, int number_rooms, double room_price,
                    double tax) {
  double estimate{room_price * number_rooms};
  double total{(estimate * tax) + estimate};
  std::cout << "Number of " << str << " rooms: " << number_rooms << std::endl;
  std::cout << "Price per " << str << " room: " << room_price << std::endl;
  std::cout << "Cost: " << estimate << std::endl;
  std::cout << "Tax: " << estimate * tax << std::endl;
  std::cout << "==============================\n";
  std::cout << "Total Estimate: " << total << std::endl;
}

int main() {

  const double small_price{25.0};
  const double large_price{35.0};
  const double small_tax{0.04};
  const double large_tax{0.06};

  std::cout << "Hello! Welcome to Pics' cleaning services" << std::endl;
  std::cout << "=========================================\n";

  std::cout << "Please select an option below:\n";
  std::cout << "1 - Small room\n";
  std::cout << "2 - Large room\n";

  int user_opt;
  std::cin >> user_opt;

  int small_rooms{0};
  int large_rooms{0};

  switch (user_opt) {
  case 1:
    std::cout << "Enter the number of small rooms: " << std::endl;
    std::cin >> small_rooms;
    break;
  case 2:
    std::cout << "Enter the number of large rooms: " << std::endl;
    std::cin >> large_rooms;
    break;
  default:
    std::cout << "No option has been selected." << std::endl;
  }

  std::cout << "Estimate price for cleaning services:" << std::endl;

  if (small_rooms > 0) {
    print_estimate("small", small_rooms, small_price, small_tax);

  } else {
    print_estimate("large", large_rooms, large_price, large_tax);
  }

  std::cout << "This estimate is valid for 30 days." << std::endl;

  return 0;
}