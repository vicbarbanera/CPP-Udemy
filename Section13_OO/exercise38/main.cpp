#include "Dog.h"
#include <iostream>

int main() {

  Dog catiorro;
  std::cout << "Name: " << catiorro.get_name() << std::endl;
  std::cout << "Age: " << catiorro.get_age() << std::endl;

  return 0;
}
