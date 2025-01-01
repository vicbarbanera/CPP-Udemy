#include <iostream>

int main() {

  int *data = new int[5];

  for (int i = 0; i < 5; i++)
    *(data + i) = i * 2;

  for (int i = 0; i <= 4; i++)
    std::cout << data[i] << " ";
  std::cout << std::endl;

  delete[] data;

  return 0;
}