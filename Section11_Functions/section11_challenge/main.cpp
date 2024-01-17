#include <iostream>
#include <vector>

void display_menu();
void user_selection(char &option);
void option_p(const std::vector<int> &num_vec);
void option_a(std::vector<int> &num_vec);
void option_m(const std::vector<int> &num_vec);
void option_s(const std::vector<int> &num_vec);
void option_l(const std::vector<int> &num_vec);
void option_q();

// char user_selection2();

int main() {

  char option{};
  std::vector<int> num_vec{};

  do {
    display_menu();

    user_selection(option);
    std::cout << "Option: " << option << std::endl;

    // char new_option = user_selection2();

    switch (option) {
    case 'p':
    case 'P':
      option_p(num_vec);
      break;

    case 'a':
    case 'A':
      option_a(num_vec);
      break;

    case 'm':
    case 'M':
      option_m(num_vec);
      break;

    case 's':
    case 'S':
      option_s(num_vec);
      break;

    case 'l':
    case 'L':
      option_l(num_vec);
      break;

    case 'q':
    case 'Q':
      option_q();
      break;

    default:
      std::cout << "Unknown selection, please try again." << std::endl;
    }

  } while (option != 'q' && option != 'Q');

  return 0;
}

void display_menu() {
  std::cout << std::endl;
  std::cout << "P - Print numbers" << std::endl;
  std::cout << "A - Add number" << std::endl;
  std::cout << "M - Display mean of the numbers" << std::endl;
  std::cout << "S - Display the smallest of the numbers" << std::endl;
  std::cout << "L - Display the largest of the numbers" << std::endl;
  std::cout << "Q - Quit" << std::endl;
  return;
}

void user_selection(char &option) {
  std::cout << "\nPlease enter your option: ";
  std::cin >> option;
  return;
}

// char user_selection2() {
//   char option;
//   std::cout << "\nPlease enter your option: ";
//   std::cin >> option;
//   return option;
// }

void option_p(const std::vector<int> &num_vec) {
  if (num_vec.size() == 0) {
    std::cout << "[ ] - The list is empty" << std::endl;
  } else {
    for (int i{0}; i < num_vec.size(); i++) {
      std::cout << num_vec[i] << ' ';
    }
    std::cout << std::endl;
  }
}

void option_a(std::vector<int> &num_vec) {
  int add_num{};
  std::cout << "Enter the number to be added: ";
  std::cin >> add_num;
  num_vec.push_back(add_num);
  return;
}

void option_m(const std::vector<int> &num_vec) {
  if (num_vec.size() == 0) {
    std::cout << "Unable to calculate the mean - no data" << std::endl;
  } else {
    double sum{};

    for (int i{0}; i < num_vec.size(); i++) {
      sum += num_vec[i];
    }
    double avg{sum / num_vec.size()};
    std::cout << "The mean or average of the elements in the list is " << avg
              << std::endl;
  }
  return;
}

void option_s(const std::vector<int> &num_vec) {
  if (num_vec.size() == 0) {
    std::cout << "Unable to determine the smallest number - list is empty."
              << std::endl;
  } else {
    int small{num_vec[0]};
    for (int i{1}; i < num_vec.size(); i++) {
      if (num_vec[i] < small) {
        small = num_vec[i];
      }
    }
    std::cout << "The smallest number is " << small << std::endl;
  }
  return;
}

void option_l(const std::vector<int> &num_vec) {
  if (num_vec.size() == 0) {
    std::cout << "Unable to determine the largest number - list is empty."
              << std::endl;
  } else {
    int large{num_vec[0]};
    for (int i{1}; i < num_vec.size(); i++) {
      if (num_vec[i] > large) {
        large = num_vec[i];
      }
    }
    std::cout << "The largest number is " << large << std::endl;
  }
}

void option_q() { std::cout << "Goodbye..." << std::endl; }