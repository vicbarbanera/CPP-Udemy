#include <iostream>
using namespace std;

void can_you_drive(int age) {
  //----WRITE YOUR CODE BELOW THIS LINE----
  if (age >= 16) {
    cout << "Yes - you can drive!";
  } else {
    int n{16 - age};
    cout << "Sorry, come back in " << n << " years";
  }

  //----WRITE YOUR CODE ABOVE THIS LINE----
}

int main() {

  can_you_drive(20);

  return 0;
}