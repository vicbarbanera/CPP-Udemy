#include <iostream>

void say_hello() {
  std::cout << "Hello!" << std::endl;
  return;
}

void func_copy(int value_copied) {
  std::cout << "Valor copiado " << value_copied << std::endl;
  value_copied += 50;
  std::cout << "Valor copiado atualizado " << value_copied << std::endl;
}

void agora_fudeu(int &value) {
  std::cout << "Value: " << value << std::endl;
  value += 100;
  std::cout << "Value atualizado: " << value << std::endl;
}

int main() {
  say_hello();

  int main_scope{10};
  std::cout << "Valor no main " << main_scope << std::endl;
  func_copy(main_scope);
  std::cout << "Valor no main, nao mudou " << main_scope << std::endl;

  agora_fudeu(main_scope);
  std::cout << "Valor no main: " << main_scope << std::endl;
  return 0;
}