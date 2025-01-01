#include <iostream>

using namespace std;

void employee_profile() {

    cout << "Enter your name followed by your age using a single space: ";
    string name;
    int age {0};
    cin >> name >> age;
    
    double hourly_wage {23.50};
    cout << name << " " << age << " " << hourly_wage;

}

int main() {

    employee_profile();

    return 0;
}