#include <iostream>
#include <utility>

void swapPointers(int *ptr1, int *ptr2) {
  //-- Write your code below this line

  // using a temporary variable:
  //   int temp{*ptr1};
  //   *ptr1 = *ptr2;
  //   *ptr2 = temp;

  // not using a temporary variable:
  *ptr1 = *ptr1 + *ptr2;
  *ptr2 = *ptr1 - *ptr2;
  *ptr1 = *ptr1 - *ptr2;

  // using a swap function:
  // std::swap(*ptr1, *ptr2);

  //-- Write your code above this line
}

int main() {

  int a{5};
  int b{10};

  int *ptr1 = &a;

  int *ptr2 = &b;

  std::cout << "A = " << a << std::endl;
  std::cout << "B = " << b << std::endl;

  swapPointers(ptr1, ptr2);

  std::cout << "A = " << a << std::endl;
  std::cout << "B = " << b << std::endl;

  return 0;
}