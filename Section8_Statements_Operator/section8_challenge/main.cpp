#include <iostream>

// 1 dollar is 100 cents
// 1 quarter is 25 cents
// 1 dime is 10 cents
// 1 nickel is 5 cents
// 1 penny is 1 cent

int main() {

  int amount{};

  std::cout << "Enter the amount in cents: ";

  std::cin >> amount;

  int dollar{}, quarter{}, dime{}, nickel{}, penny{};

  if (amount >= 100) {
    dollar = amount / 100;
    amount %= 100;
  }

  if (amount >= 25) {
    quarter = amount / 25;
    amount %= 25;
  }

  if (amount >= 10) {
    dime = amount / 10;
    amount %= 10;
  }

  if (amount >= 5) {
    nickel = amount / 5;
    amount %= 5;
  }

  penny = amount;

  std::cout << "You can provide this change as follows:" << std::endl;
  std::cout << "Dollars: " << dollar << std::endl;
  std::cout << "Quarter: " << quarter << std::endl;
  std::cout << "Dime: " << dime << std::endl;
  std::cout << "Nickel: " << nickel << std::endl;
  std::cout << "Pennies: " << penny << std::endl;

  return 0;
}
