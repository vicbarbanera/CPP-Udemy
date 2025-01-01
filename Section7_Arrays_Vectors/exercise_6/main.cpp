#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec{10, 20, 30, 40, 50};
  vec.at(0) = 100;
  vec.at(4) = 1000;

  for (int i : vec) {
    std::cout << i << std::endl;
  }
  return 0;
}
