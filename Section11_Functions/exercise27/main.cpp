#include <iostream>
#include <string>

int sum_of_digits(int n) {
  // Write your code below this line

  if (n <= 0)
    return 0;

  std::string str = std::to_string(n);

  if (str.length() == 1)
    return (str[0] - '0') + sum_of_digits(0);

  return (str[0] - '0') + sum_of_digits(std::stoi(str.substr(1)));

  // Write your code above this line
}

int main() {

  std::cout << sum_of_digits(1234) << std::endl;

  std::cout << sum_of_digits(9999) << std::endl;

  return 0;
}