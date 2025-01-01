#include "Dog.h"
#include <iostream>

Dog test_dog() {
  //---- WRITE YOUR CODE BELOW THIS LINE----
  Dog spot;
  spot.name = "Spot";
  spot.age = 5;

  //---- WRITE YOUR CODE ABOVE THIS LINE----
  //---- DO NOT CHANGE THE CODE BELOW----
  return spot;
}

int main() {

  Dog spot = test_dog();
  std::cout << "Name: " << spot.name << std::endl;
  std::cout << "Age: " << spot.age << std::endl;

  return 0;
}