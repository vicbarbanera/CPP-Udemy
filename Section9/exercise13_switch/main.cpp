#include <iostream>

using namespace std;

void display_day(int day_code) {
  //----WRITE YOUR CODE BELOW THIS LINE----
  switch (day_code) {
  case 0:
    cout << "Sunday";
    break;

  case 1:
    cout << "Monday";
    break;

  case 2:
    cout << "Tuesday";
    break;

  case 3:
    cout << "Wednesday";
    break;

  case 4:
    cout << "Thursday";
    break;

  case 5:
    cout << "Friday";
    break;

  case 6:
    cout << "Saturday";
    break;

  default:
    cout << "Error - illegal day code";
  }
  //----WRITE YOUR CODE ABOVE THIS LINE----
}

int main() {

  int day_code{};

  display_day(0);
  display_day(1);
  display_day(2);
  display_day(3);
  display_day(4);
  display_day(5);
  display_day(6);
  display_day(7);

  return 0;
}