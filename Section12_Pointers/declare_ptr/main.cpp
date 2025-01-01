#include <iostream>
#include <string>
#include <vector>

int main() {

  int num{10};

  // int *num_ptr{}; //ponteiro aponta para qualquer lugar - nao recomendado

  int *num_ptr{&num};

  // int *num_ptr{nullptr};

  //  num_ptr = &num;

  std::cout << "Value of num is': " << num << std::endl;
  std::cout << "Size of num is: " << sizeof num << std::endl;
  std::cout << "Address of num is': " << &num << std::endl;

  std::cout << "Here we show the same address for the variable num: " << num_ptr
            << std::endl;
  std::cout << "Pointer address is: " << &num_ptr << std::endl;
  std::cout << "Value that is stored in the memory the pointer is pointing': "
            << *num_ptr << std::endl;

  std::cout << "------------------------\n";
  // Deferencing a Pointer:
  *num_ptr = 55;

  std::cout << "Value of num is now: " << num << std::endl;
  std::cout << "Value that is stored in the memory the pointer is pointing': "
            << *num_ptr << std::endl;

  std::cout << "------------------------\n";
  std::vector<std::string> stooges{"Kito", "Pico", "Fito"};
  std::vector<std::string> *vector_ptr{nullptr};

  vector_ptr = &stooges;

  // Print first element of the vector through the pointer

  std::cout << "First element is: " << (*vector_ptr)[0] << std::endl;

  std::cout << "Stooges: \n";
  for (auto stooge : *vector_ptr) {
    std::cout << stooge << std::endl;
  }

  return 0;
}