#include <iostream>
#include <vector>

// 1. criar um vetor de inteiros, printar o primeiro elemento do vetor e o
// ultimo
// 2. somar todos os elementos do vetor e mostrar a soma
// 3. criar uma string assinar 'chuveiro'; mostrar cada charactere onde o index
// seja par
// 4. mostrar o reverso da string item 3 'chuveiro' na mesma linha e dps mostrar
// piclis
// 5. mostrar o character do meio da string 'chuveiro'
// 6. mostrar a metade da string chuveiro: chuv - eiro

int main() {

  std::cout << "\n----- exercise 1 -----" << std::endl;

  std::vector<int> ints{1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

  std::cout << "First element: " << ints[0] << std::endl;
  std::cout << "Last element: " << ints[ints.size() - 1] << std::endl;

  std::cout << "\n----- exercise 2 -----" << std::endl;

  int soma{};

  for (size_t index{}; index < ints.size(); index++) {
    soma += ints[index];
  }

  std::cout << "The sum of all elements is: " << soma << std::endl;

  std::cout << "\n----- exercise 3 -----" << std::endl;

  std::string s{"chuveiro"};

  for (size_t i{}; i < s.length(); i++) {
    if (i % 2 == 0) {
      std::cout << "charactere: " << s[i] << " at index: " << i << std::endl;
    }
  }

  std::cout << "\n----- exercise 4 -----" << std::endl;

  int i{};

  for (i = s.length() - 1; i >= 0; i--) {
    std::cout << s[i];
  }
  std::cout << std::endl;
  std::cout << "Piclis." << std::endl;

  std::cout << "\n----- exercise 5 -----" << std::endl;

  size_t metade{};

  metade = s.length() / 2;
  std::cout << metade << std::endl;
  std::cout << "The character at the middle of the string is: " << s[metade]
            << std::endl;

  std::cout << "\n----- exercise 6 -----" << std::endl;

  std::string s1{};
  std::string s2{};

  for (size_t i{}; i < s.length(); i++) {
    if (i < metade) {
      s1 += s[i];

    } else {
      s2 += s[i];
    }
  }
  std::cout << "First half is: " << s1;
  std::cout << std::endl;
  std::cout << "Second half is: " << s2;

  return 0;
}