#include <iostream>
#include <vector>

int main() {

  char option{};
  std::vector<int> num_vec{};
  int add_num{};

  do {

    std::cout << std::endl;
    std::cout << "P - Print numbers" << std::endl;
    std::cout << "A - Add number" << std::endl;
    std::cout << "M - Display mean of the numbers" << std::endl;
    std::cout << "S - Display the smallest of the numbers" << std::endl;
    std::cout << "L - Display the largest of the numbers" << std::endl;
    std::cout << "Q - Quit" << std::endl;
    std::cout << "\nPlease enter your option: ";
    std::cin >> option;

    switch (option) {
    case 'p':
    case 'P':
      if (num_vec.size() == 0) {
        std::cout << "[ ] - The list is empty" << std::endl;
      } else {
        for (int i{0}; i < num_vec.size(); i++) {
          std::cout << num_vec[i] << ' ';
        }
        std::cout << std::endl;
      }
      break;

    case 'a':
    case 'A':
      std::cout << "Enter the number to be added: ";
      std::cin >> add_num;
      num_vec.push_back(add_num);
      break;

    case 'm':
    case 'M':
      if (num_vec.size() == 0) {
        std::cout << "Unable to calculate the mean - no data" << std::endl;
      } else {
        double sum{};

        for (int i{0}; i < num_vec.size(); i++) {
          sum += num_vec[i];
        }
        double avg{sum / num_vec.size()};
        std::cout << "The mean or average of the elements in the list is "
                  << avg << std::endl;
      }
      break;

    case 's':
    case 'S':
      if (num_vec.size() == 0) {
        std::cout << "Unable to determine the smallest number - list is empty"
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
      break;

    case 'l':
    case 'L':
      if (num_vec.size() == 0) {
        std::cout << "Unable to determine the largest number - list is empty"
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
      break;

    case 'q':
    case 'Q':
      std::cout << "Goodbye..." << std::endl;
      break;

    default:
      std::cout << "Unknown selection, please try again." << std::endl;
    }

  } while (option != 'q' && option != 'Q');

  return 0;
}