#include "Practice.h"
#include <iostream>
#include <string>

void Animal::speak() {
  if (name == "Piclis") {
    std::cout << "tururuu" << std::endl;
  } else {
    std::cout << "Meow Meow" << std::endl;
  }
}

int main() {

  // Animal piclis("Piclis");
  // std::cout << "Animal name is: " << piclis.get_name() << std::endl;
  // piclis.speak();

  // Animal borges("Borges");
  // std::cout << "Animal name is: " << borges.get_name() << std::endl;
  // borges.speak();

  // Animal copia_de_pics(piclis);
  // std::cout << "Nome de Copia de Pics: " << copia_de_pics.get_name()
  //           << std::endl;

  Gato catto("Botis", 5, "tomba");
  std::cout << "Nome do gato e " << catto.get_name() << " de idade "
            << catto.get_age() << " e tipo " << catto.get_tipo() << std::endl;

  Gato piratinha(catto, "Piratinha", 4);
  std::cout << "Nome do gato e " << piratinha.get_name() << " de idade "
            << piratinha.get_age() << " e tipo " << piratinha.get_tipo()
            << std::endl;

  Gato bigas(catto, "Bigas");
  std::cout << "Nome do gato e " << bigas.get_name() << " de idade "
            << bigas.get_age() << " e tipo " << bigas.get_tipo() << std::endl;

  Gato tailess(catto, "Sem rabo", 8);
  std::cout << "Nome do gato e " << tailess.get_name() << " de idade "
            << tailess.get_age() << " e tipo " << tailess.get_tipo()
            << std::endl;

  return 0;
}
