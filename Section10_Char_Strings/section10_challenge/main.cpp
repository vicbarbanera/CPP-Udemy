#include <iostream>

const std::string alphabet{
    "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
const std::string key{"XZNLWEBGJHQDYVTKFUOMPCIASRxznlwebgjhqdyvtkfuompciasr"};

int main() {

  std::string secret_message{"I'll meet you at Billy's house at 10AM"};

  std::string encrypted_message{};

  for (size_t i{0}; i < secret_message.length(); i++) {

    size_t index = alphabet.find(secret_message[i]);
    // se o index encontrado for DIFERENTE DE NAO ENCONTRADO , entao a condicao
    // e' verdadeira:
    if (index != std::string::npos) {
      std::cout << "index: " << index << ", alphabet: " << alphabet[index]
                << ", key: " << key[index] << std::endl;
      encrypted_message += key[index];
    } else {
      encrypted_message += secret_message[i];
    }
  }

  std::cout << "\nEncrypted message: " << encrypted_message << std::endl;

  std::string decrypted_message{};

  for (size_t i{}; i < encrypted_message.length(); i++) {
    size_t index = key.find(encrypted_message[i]);
    if (index != std::string::npos) {
      decrypted_message += alphabet[index];
    } else {
      decrypted_message += encrypted_message[i];
    }
  }

  std::cout << "Decrypted message: " << decrypted_message << std::endl;

  return 0;
}
