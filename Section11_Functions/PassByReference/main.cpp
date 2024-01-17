#include <iostream>
#include <string>
#include <vector>

void pass_by_ref1(int &num);
void pass_by_ref2(std::string &str);
void pass_by_ref3(std::vector<std::string> &vec);
void print_vector(const std::vector<std::string> &vec);

int main() {

  int pics{10};
  int filis{20};
  std::cout << "Pics: " << pics << std::endl;
  std::cout << "Referencia: " << &pics << std::endl;
  pass_by_ref1(pics);
  std::cout << "Pass by ref 1: " << pics << std::endl;
  std::cout << "Referencia: " << &pics << std::endl;

  std::cout << "Filis: " << filis << std::endl;
  std::cout << "Referencia: " << &filis << std::endl;
  pass_by_ref1(filis);
  std::cout << "Pass by ref 1: " << filis << std::endl;
  std::cout << "Referencia: " << &filis << std::endl;
  return 0;
}

void pass_by_ref1(int &num) {
  num = 1000;
} // referencia da memoria - &num e' um alias para o actual parameter
