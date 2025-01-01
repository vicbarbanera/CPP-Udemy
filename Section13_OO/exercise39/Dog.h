
#ifndef __DOG_H__
#define __DOG_H__
#include <string>
using namespace std;

class Dog {
private:
  string name;
  int age;

public:
  //---- WRITE YOUR OVERLOADED CONSTRUCTOR BELOW THIS LINE

  Dog() {
    name = "None";
    age = 0;
  }

  Dog(string new_name, int new_age) {
    name = new_name;
    age = new_age;
  }

  //---- WRITE YOUR OVERLOADED CONSTRUCTOR ABOVE THIS LINE
  string get_name() { return name; }
  void set_name(string n) { name = n; }
  int get_age() { return age; }
  void set_age(int a) { age = a; }
  int get_dog_years() { return age * 7; }
  string speak() { return "Woof"; }
};
#endif
