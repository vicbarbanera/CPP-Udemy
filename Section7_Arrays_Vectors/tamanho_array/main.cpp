#include <iostream>

int main() {

  // declarar um array e pegar seu tamanho:
  int arr[5]{1, 2, 3, 4, 5};

  // printar o tamanho do array
  // tamanho do array vai ser o array dividido pelo tamanho do seu tipo
  std::cout << sizeof(arr) / sizeof(arr[0]) << std::endl;
  std::cout << sizeof(arr) / sizeof(int) << std::endl;
  std::cout << std::size(arr) << std::endl;

  return 0;
}