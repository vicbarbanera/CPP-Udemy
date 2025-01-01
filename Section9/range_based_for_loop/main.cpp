#include <iostream>

int main() {

  std::string s{"Victoria"};

  int n{0};
  while (n < s.length()) {
    std::cout << "index = " << n << ", valor = " << s[n] << std::endl;
    std::cout << "o tipo da variavel n e': " << typeid(n).name() << std::endl;
    std::cout << "o tipo da variavel s[index] e': " << typeid(s[n]).name()
              << std::endl;
    ++n;
  }

  // pra fazer o for na string, precisamos usar o char para pegar o caractere
  // ou podemos usar auto

  for (char c : s) { // for (auto c : s)
    std::cout << c << std::endl;
  }

  return 0;
}