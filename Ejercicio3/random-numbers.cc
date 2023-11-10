/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 * @date Nov 10th 2023
 * @brief the program, given two numbers, prints a random number between those.
 */

#include <iostream>
#include <random>
#include <vector>

int main() {
  int numbers;
  std::vector<int> numbers_vector;
  while (std::cin >> numbers) {
    numbers_vector.push_back(numbers);
  }
  std::random_device random;
  std::mt19937 gen(random());
  for (int i{0}; i < static_cast<int>(numbers_vector.size()); i += 2) {
    int a{numbers_vector[i]};
    int b{numbers_vector[i + 1]};
    std::uniform_int_distribution<int> distribution(a,b);
    int random_number{distribution(gen)};
    std::cout << random_number << std::endl;
  }
  return 0;
}
