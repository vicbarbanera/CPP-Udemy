#include <iostream>
#include <vector>

int main() {

  std::vector<int> vector_1{};
  std::vector<int> vector_2{};

  // pushback is a method to add elements to a vector
  vector_1.push_back(10);
  vector_1.push_back(20);

  // idx = index
  for (int idx = 0; idx < vector_1.size(); idx++) {
    std::cout << vector_1[idx] << std::endl;
  }

  std::cout << "Vector_1 size is: " << vector_1.size() << std::endl;

  vector_2.push_back(100);
  vector_2.push_back(200);

  for (int i = 0; i < vector_2.size(); i++) {
    std::cout << vector_2.at(i) << std::endl; // at(index)
  }

  std::cout << "Vector_2 size is: " << vector_2.size() << std::endl;

  // declarando um vetor bi-dimensional
  std::vector<std::vector<int>> vector_2d{};

  vector_2d.push_back(vector_1);
  vector_2d.push_back(vector_2);

  // para o vetor bi-dimensional, precisamos de 2 for:
  for (int i = 0; i < vector_2d.size(); i++) {
    for (int j = 0; j < vector_2d.size(); j++) {
      std::cout << ">>>> " << vector_2d.at(i).at(j) << std::endl;
    }
  }

  std::cout << "========================" << std::endl;

  // adicionar um novo valor para o vetor no index 0 , primeira posicao
  vector_1.at(0) = 1000;

  for (int i = 0; i < vector_2d.size(); i++) {
    for (int j = 0; j < vector_2d.size(); j++) {
      std::cout << ">>>> " << vector_2d[i][j] << std::endl;
    }
  }

  for (int idx = 0; idx < vector_1.size(); idx++) {
    std::cout << vector_1.at(idx) << std::endl;
  }

  return 0;
}