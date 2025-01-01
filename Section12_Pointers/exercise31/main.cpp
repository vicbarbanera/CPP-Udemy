#include <iostream>

void multiply_with_pointer(int *ptr, int multiplier) { *ptr *= multiplier; }

int main() {

  int num1{10}, multiplier{2};
  int *piclis = &num1;
  multiply_with_pointer(piclis, multiplier);
  // para printar, e' preciso deferir o ponteiro (usar *) para mostrar o valor:
  std::cout << "Result: " << *piclis << std::endl;

  // sem usar *, ou seja, sem deferir o ponteiro - vai printar a memoria:
  std::cout << "Result - sem deferir ponteiro: " << piclis << std::endl;

  return 0;
}