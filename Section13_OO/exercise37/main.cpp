#include "Dog.h"
#include <iostream>

int main() {

  Dog catiorro;
  catiorro.set_name("Lakus");
  catiorro.set_age(10);

  std::cout << "O nome do cachorro e' " << catiorro.get_name() << std::endl;
  std::cout << "A idade e' " << catiorro.get_age() << std::endl;
  std::cout << "A idade em tempo humano e' " << catiorro.get_human_years()
            << std::endl;
  std::cout << catiorro.speak();

  return 0;
}