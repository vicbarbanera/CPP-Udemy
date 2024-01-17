#include <iostream>

void my_function(std::string name) {
  std::cout << name << " Piqueiros" << std::endl;
}

// You can use a default parameter value, by using the equals sign (=)

void country(std::string country = "Brasil") {
  std::cout << country << std::endl;
}

int main() {

  my_function("Filis");
  my_function("Vic");

  country("Bahamas");
  country("Irlanda");
  country();
  country("Polinesia");

  return 0;
}