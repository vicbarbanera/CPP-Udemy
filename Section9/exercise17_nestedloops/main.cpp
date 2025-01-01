#include <iostream>
#include <vector>

using namespace std;

int calculate_pairs(vector<int> vec) {
  //----WRITE YOUR CODE BELOW THIS LINE----

  int result{};

  if (vec.size() == 0 || vec.size() == 1) {
    return result;
  }

  // the initial position will be the index
  for (int i{0}; i < vec.size(); ++i) {
    for (int j{i + 1}; j < vec.size(); ++j) {
      result += vec[i] * vec[j];
    }
  }

  //----WRITE YOUR CODE ABOVE THIS LINE----
  //----DO NOT MODIFY THE CODE BELOW THIS LINE----
  return result;
}

int main() {

  cout << calculate_pairs({1, 2, 3}) << endl;    // 11
  cout << calculate_pairs({2, 4, 6, 8}) << endl; // 140
  cout << calculate_pairs({1}) << endl;          // 0
  cout << calculate_pairs({}) << endl;           // 0

  return 0;
}