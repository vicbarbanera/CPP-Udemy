#include <iostream>

void logical_operators(int age, bool parental_consent, bool ssn,
                       bool accidents) {

  // usar a ! antes do acidentes pq, se ele nao tiver acidente a variavel e'
  // falsa e dai vai falhar na logica. portanto precisa usar para validar a
  // condicao logica
  if ((age >= 18 && ssn && !accidents) ||
      (age > 15 && parental_consent && ssn && !accidents)) {
    std::cout << "Yes, you can work." << std::endl;
  } else {
    std::cout << "No, you cannot work." << std::endl;
  }

  return;
}
int main() {

  // escrever os testes - parametros, para validar as possibilidades acima
  logical_operators(18, true, true, false);  // can work
  logical_operators(18, false, true, false); // can work

  return 0;
}