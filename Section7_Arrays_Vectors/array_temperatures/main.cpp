#include <iostream>

int main() {

  // o compilador vai determinar o tamanho do array:
  double temperatures[]{27.5, 30.1, 35.4, 40.0};

  std::cout << "The first temperature is: " << temperatures[0] << std::endl;

  // vamos mudar o valor da primeira temperatura - sintax: array_name[index]
  temperatures[0] = 18.7;

  std::cout << "The first temperature is now: " << temperatures[0] << std::endl;

  return 0;
}