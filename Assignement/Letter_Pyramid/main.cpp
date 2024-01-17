#include <iostream>

std::string reverse(std::string s) {

  std::string new_s;

  for (int index = s.length() - 1; index >= 0; index--) {
    new_s += s[index];
  }
  return new_s;
}

int main() {

  std::string user_input{};
  std::cout << "Enter a string: " << std::endl;
  std::cin >> user_input;

  // std::string user_input{"ABC"};

  std::string previous{};

  size_t spaces{user_input.length() - 1};

  for (size_t index{}; index < user_input.length(); index++) {
    std::cout << std::string(spaces, ' ') << previous << user_input[index]
              << reverse(previous) << std::string(spaces, ' ') << std::endl;
    previous += user_input[index];
    spaces--;
  }

  return 0;
}