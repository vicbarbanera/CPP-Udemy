#include <iostream>
#include <string>
using namespace std;

void cpp_strings() {

  string unformatted_full_name{"StephenHawking"};

  //----DO NOT MODIFY THE CODE ABOVE THIS LINE----
  //----WRITE YOUR CODE BELOW THIS LINE----

  size_t index{};

  // percorrer a palavra e ignorar o primeiro character pq ele eh maiusculo
  // quando encontrar o segundo character maiusculo, guardar o index dele em uma
  // variavel: index
  for (size_t i{1}; i < unformatted_full_name.length(); i++) {
    if (isupper(unformatted_full_name[i])) {
      index = i; // guardar o index e sair do loop
      break;
    }
  }

  string first_name{unformatted_full_name, 0, index};

  string last_name =
      unformatted_full_name.substr(index, unformatted_full_name.length());

  string formatted_full_name = first_name + last_name;

  // insert parametro: (index, o que vai ser inserido)
  formatted_full_name.insert(index, " ");

  //----WRITE YOUR CODE ABOVE THIS LINE----
  //----DO NOT MODIFY THE CODE BELOW THIS LINE----

  cout << formatted_full_name;
}

int main() {

  cpp_strings();

  return 0;
}