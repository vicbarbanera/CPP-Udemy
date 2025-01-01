#include "Dog.h"
#include <iostream>

int main() {

  Dog catiorro;
  std::cout << "O nome do cachorro sem paramentro e: " << catiorro.get_name()
            << std::endl;
  std::cout << "A idade do cachorro sem paramentro e: " << catiorro.get_age()
            << std::endl;
  std::cout << "A idade do cachorro em anos de humano e: "
            << catiorro.get_dog_years() << std::endl;

  Dog baltha("Pelota", 2);
  std::cout << "O nome do cachorro com paramentro e: " << baltha.get_name()
            << std::endl;
  std::cout << "A idade do cachorro com paramentro e: " << baltha.get_age()
            << std::endl;
  std::cout << "A idade do cachorro em anos de humano e: "
            << baltha.get_dog_years() << std::endl;

  return 0;
}