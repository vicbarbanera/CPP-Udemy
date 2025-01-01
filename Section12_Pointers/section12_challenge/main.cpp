#include <iostream>

void print(const int *const arr, int); // prototipo da funcao

int *apply_all(const int *const arr1, size_t, const int *const arr2,
               size_t); // prototipo

int main() {

  const size_t array1_size{5};
  const size_t array2_size{3};

  int array1[]{1, 2, 3, 4, 5};
  int array2[]{10, 20, 30};

  std::cout << "Array 1: ";
  print(array1, array1_size);

  std::cout << "Array 2: ";
  print(array2, array2_size);

  int *results = apply_all(array1, array1_size, array2, array2_size);

  constexpr size_t results_size{array1_size * array2_size};

  std::cout << "Result: ";
  print(results, results_size);

  delete[] results;

  std::cout << std::endl;

  return 0;
}

void print(const int *const arr, int size) {
  std::cout << "[ ";
  for (int i = 0; i < size; i++) {
    std::cout << arr[i] << " ";
  }
  std::cout << "]" << std::endl;
}

int *apply_all(const int *const arr1, size_t arr1_size, const int *const arr2,
               size_t arr2_size) {
  // criar um bloco de memoria no heap para iniciar o ponteiro
  int *new_array = new int[arr2_size * arr1_size];
  // variavel index criada para iterar o contador de index para o novo array
  size_t index{0};
  for (int i = 0; i < arr2_size; i++) {
    for (int j = 0; j < arr1_size; j++) {
      // std::cout << "arr2 x arr1 = " << arr2[i] * arr1[j] << " ";
      new_array[index] = arr2[i] * arr1[j];
      // a cada iteracao, somar +1 no index para armazenar no novo array
      index++;
    }
  }
  return new_array;
}