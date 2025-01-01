#include "Dog.h"
#include <iostream>

int main() {

  Dog catiorro;
  catiorro.set_name("Lakus");
  catiorro.set_age(10);
  std::cout << "O nome do cachorro e': " << catiorro.get_name() << std::endl;
  std::cout << "A idade do cachorro e': " << catiorro.get_age() << std::endl;

  return 0;
}