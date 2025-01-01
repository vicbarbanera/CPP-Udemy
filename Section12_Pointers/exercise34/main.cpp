#include <iostream>
#include <string>

// aqui a funcao recebe a variavel como constante
std::string reverse_string(const std::string &input) {
  std::string reversed;

  // tamanho da variavel input - 1 pq o index comeca em zero:
  for (int i = input.length() - 1; i >= 0; i--) {
    reversed += input[i];
  }

  return reversed;
}

int main() {

  std::string input = "Hello, World!";

  // a variavel input nao muda pq na funcao ela e' constante
  std::cout << "Input antes: " << input << std::endl;

  // aqui a variavel reversed recebe o return da funcao
  std::string reversed = reverse_string(input);

  // o print precisa ser da variavel reversed pq o resultado da funcao foi
  // armazenado nela
  std::cout << "Reversed: " << reversed << std::endl;

  return 0;
}