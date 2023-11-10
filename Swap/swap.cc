/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 * @date Nov 9th 2023
 * @brief the program swaps the value of any parameters.
 */

#include <iostream>
#include <vector>

void swap2(int& number1, int& number2) {
  int var{number1};
  number1 = number2;
  number2 = var;
}
int main() {
  int numbers;
  std::vector<int> numbers_vector;
  while (std::cin >> numbers) {
    numbers_vector.push_back(numbers);
  }
  for (int i{0}; i < static_cast<int>(numbers_vector.size()); i += 2) {
    int num1{numbers_vector[i]};
    int num2{numbers_vector[i + 1]};
    swap2(num1, num2);
    std::cout << "swap2(" << numbers_vector[i] << ", " << numbers_vector[i + 1] << ") → " << num1 << " " << num2 << std::endl;
  }
  return 0;
}
