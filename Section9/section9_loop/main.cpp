#include <iostream>

int main() {

  // increment by 1
  for (int i{0}; i <= 10; i++) {
    std::cout << i << std::endl;
  }
  std::cout << "=====" << std::endl;

  // increment by 2
  for (int i{0}; i <= 10; i += 2) {
    std::cout << i << std::endl;
  }

  std::cout << "=====" << std::endl;

  // decrement by 1
  for (int i{10}; i >= 0; i--) {
    std::cout << i << std::endl;
  }

  return 0;
}