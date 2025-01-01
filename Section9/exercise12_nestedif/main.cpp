#include <iostream>
using namespace std;

void can_you_drive(int age, bool has_car) {
  //----WRITE YOUR CODE BELOW THIS LINE----

  if (age >= 16 && has_car) {
    cout << "Yes - you can drive!";
  } else if (age >= 16 && !has_car) {
    cout << "Sorry, you need to buy a car before you can drive!";
  } else {
    int n(16 - age);
    cout << "Sorry, come back in " << n
         << " years and be sure you own a car when you come back.";
  }

  //----WRITE YOUR CODE ABOVE THIS LINE----
}

int main() {

  can_you_drive(15, false);
  cout << endl;
  can_you_drive(15, true);
  cout << endl;
  can_you_drive(16, false);
  cout << endl;
  can_you_drive(16, true);
  return 0;
}