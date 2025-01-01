#include <iostream>
#include <vector>
using namespace std;

int count_numbers(const vector<int> &vec) {
  //---- WRITE YOUR CODE BELOW THIS LINE----
  int count{};
  int i{};

  while (i < vec.size()) {
    if (vec[i] != -99) {
      count += 1;
    } else {
      break;
    }
    i++;
  }

  //---- WRITE YOUR CODE ABOVE THIS LINE----
  //---- DO NOT MODIFY THE CODE BELOW THIS LINE-----
  return count;
}

int main() {

  cout << count_numbers({1, 2, 3}) << endl;

  cout << count_numbers({1, 2, -99, 10, 5}) << endl;

  return 0;
}