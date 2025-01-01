#include <iostream>

int findMaxElement(int *arr, int size) {

  // iniciar a variavel temporaria com o primeiro elemento do array
  int temp{arr[0]};

  // iniciar o for com o segundo elemento do array para comparar com a variavel
  // temporaria
  for (int i = 1; i < size; i++) {
    if (temp < arr[i]) {
      temp = arr[i];
    }
  }
  return temp;
}

int main() {

  // um array e' sempre um ponteiro
  // int arr[] = {12, 45, 67, 23, 9};
  int arr[] = {-5, -12, -3, -8, -1}; // teste com um array de numeros negativos

  int size = sizeof(arr) / sizeof(arr[0]);

  int maxElement = findMaxElement(arr, size);
  std::cout << "Max Element is: " << maxElement << std::endl;
  return 0;
}