#include <iostream>

void reverse_array(int *arr, int size) {

  for (int i = 0, j = size - 1; i < j; i++, j--) {
    std::cout << "i: " << i << " e j: " << j << std::endl;
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
  }
}

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6};
  int size = sizeof(arr) / sizeof(arr[0]);
  std::cout << "Array: ";
  for (int i = 0; i < size; i++) {
    std::cout << arr[i];
  }
  std::cout << std::endl;

  reverse_array(arr, size);
  std::cout << "Reverse: ";
  for (int i = 0; i < size; i++) {
    std::cout << arr[i];
  }
  std::cout << std::endl;

  return 0;
}