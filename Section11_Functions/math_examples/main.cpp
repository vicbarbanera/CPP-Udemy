#include <cmath> //required
#include <iostream>

int main() {

  double num{};
  std::cout << "Enter a number - double: ";
  std::cin >> num;

  // calc the square root
  std::cout << "The square root of " << num << " is: " << sqrt(num)
            << std::endl;

  // calc the cubed root
  std::cout << "The cubed root of " << num << " is: " << cbrt(num) << std::endl;

  // calc the sine
  std::cout << "The sine of " << num << " is: " << sin(num) << std::endl;

  // calc the cosine
  std::cout << "The cosine of " << num << " is: " << cos(num) << std::endl;

  // calc ceiling of the number - it will show the next integer
  std::cout << "The ceil of " << num << " is: " << ceil(num) << std::endl;

  // calc flooring of the number
  std::cout << "The floor of " << num << " is: " << floor(num) << std::endl;

  // calc the rounding of the number
  std::cout << "The round of " << num << " is: " << round(num) << std::endl;

  // now we will ask user to enter a number that we will do the power (potencia)
  double power{};
  std::cout << "Enter a power to raise " << num << " to: ";
  std::cin >> power;

  std::cout << num << " raised to the " << power
            << " power is: " << pow(num, power) << std::endl;
  return 0;
}