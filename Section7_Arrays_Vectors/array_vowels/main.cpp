#include <iostream>

int main() {

  // o compilador vai identificar o tamanho do array
  char vowels[]{'a', 'e', 'i', 'o', 'u'};

  // exibir a vogal no index 0 - vowel[index]
  std::cout << "The first vowel is: " << vowels[0] << std::endl;
  std::cout << "The last vowel is: " << vowels[4] << std::endl;

  return 0;
}