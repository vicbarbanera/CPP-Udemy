#include <iostream>

int main() {

  int arr[]{10, 20, 30};

  int i{};

  while (i < sizeof(arr) / sizeof(arr[0])) {
    std::cout << arr[i] << std::endl;
    i++;
  }

  return 0;
}