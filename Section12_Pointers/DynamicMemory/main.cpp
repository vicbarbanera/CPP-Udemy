#include <iostream>

// all dynamic allocation happens on the HEAP memory!!!

int main() {

  // create an int pointer
  int *int_ptr{nullptr};
  // allocate dynamically from the HEAP
  int_ptr = new int;

  // display the memory location
  std::cout << "Memory location of where the integer is on the HEAP: "
            << int_ptr << std::endl;

  // to free the storage in the HEAP once we are done using the pointer
  delete int_ptr;

  std::cout << "----------------\n";
  std::cout << "Now we will allocate an array to the HEAP!\n";

  size_t size{0}; // user will insert the size
  double *temp_ptr{nullptr};

  std::cout << "How many temperatures: ";
  std::cin >> size;

  // between brackets is where we will inform the size/ how many spaces we need
  // to dynamically allocate in the HEAP
  temp_ptr = new double[size];

  std::cout << "This is the address of the first one: " << temp_ptr
            << std::endl;

  // ALWAYS free up the memory allocated!
  // Add the empty brackets because it is an array
  delete[] temp_ptr;

  return 0;
}