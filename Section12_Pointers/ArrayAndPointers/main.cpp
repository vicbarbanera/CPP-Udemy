#include <iostream>

int main() {

  int scores[]{100, 95, 89};

  std::cout
      << "Value of scores - the address of the first element of the array: "
      << scores << std::endl;

  // initializing the pointer with scores array
  int *score_ptr{scores};

  std::cout << "Value of score_ptr: " << score_ptr << std::endl;

  std::cout << "\n----- Array subscript notation -----\n";
  std::cout << "First element: " << scores[0] << std::endl;
  std::cout << "Second element: " << scores[1] << std::endl;
  std::cout << "Third element: " << scores[2] << std::endl;

  std::cout << "\n----- Pointer subscription notation -----\n";
  std::cout << "First element: " << score_ptr[0] << std::endl;
  std::cout << "Second element: " << score_ptr[1] << std::endl;
  std::cout << "Third element: " << score_ptr[2] << std::endl;

  std::cout << "\n----- Array offset notation -----\n";
  std::cout << "First element: " << *scores << std::endl;
  // utilizar parenteses para definir prioridade
  std::cout << "Second element: " << *(scores + 1) << std::endl;
  std::cout << "Third element: " << *(scores + 2) << std::endl;

  std::cout << "\n----- Pointer offset notation -----\n";
  std::cout << "First element: " << *score_ptr << std::endl;
  std::cout << "Second element: " << *(score_ptr + 1) << std::endl;
  std::cout << "Third element: " << *(score_ptr + 2) << std::endl;

  return 0;
}