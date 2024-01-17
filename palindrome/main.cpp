#include <iostream>

int main() {

  std::string palavra{};

  std::cout << "Enter a word: ";
  // std::cin >> palavra;
  std::getline(std::cin, palavra, '\n');

  std::cout << "-----" << std::endl;
  std::cout << "Let's validate if this word is a Palindrome..." << std::endl;

  std::string palindrome{};

  // aqui precisa ser tamanho do vetor -1 pq os vetores comecam com 0:
  for (int i = palavra.size() - 1; i >= 0; --i) {
    palindrome += palavra[i];
  }

  std::cout << "The word you have entered: " << palavra << std::endl;
  std::cout << palindrome << std::endl;

  std::cout << palavra.length() << std::endl;
  std::cout << palindrome.length() << std::endl;

  std::cout << std::endl;

  if (palavra == palindrome) {
    std::cout << "The word you have entered is a palindrome." << std::endl;

  } else {
    std::cout << "Sorry, " << palavra << " and " << palindrome
              << " are not a palindrome." << std::endl;
  }

  return 0;
}