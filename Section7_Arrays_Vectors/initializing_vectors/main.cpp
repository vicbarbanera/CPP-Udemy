#include <iostream>
#include <vector>

int main() {

  // iniciando um vetor com paramentros entre parenteses significa que:
  // primeiro parametro: tamanho do vetor
  // segundo parametro significa o valor que todas as posicoes serao iniciadas
  std::vector<double> hi_temperatures(365, 80.0);

  for (int i = 0; i < hi_temperatures.size(); i++) {
    std::cout << hi_temperatures[i] << ' ';
  }

  return 0;
}