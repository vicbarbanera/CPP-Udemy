#include <iostream>
#include <vector>

// minha funcao soma. o return pode declarar direto o resultado
int soma(int x, int y) { return x + y; }

std::vector<int> piclis() {

  return std::vector<int>{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
}

int main() {

  std::cout << soma(3, 5) << std::endl;

  // para printar cada valor do vetor:
  for (int value : piclis()) {
    std::cout << value << ' '; // para printar os valores em linha
  }

  return 0;
}