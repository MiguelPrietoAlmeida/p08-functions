/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 * @date Nov 9th 2023
 * @brief the program ells whether the natural number n is a palindromic number or not. 
 */
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>

bool is_palindromic(int number) {
	std::string number_string{std::to_string(number)};
  std::string reversed_number{number_string}; 
  std::reverse(reversed_number.begin(), reversed_number.end());
  return (number_string == reversed_number) ? true : false;//(si number... == reversed..., dedvover true, si no, false
}
int main() {
  int number;
  std::vector<int> numbers;
  while (std::cin >> number) {
    numbers.push_back(number);
  }
  for (int element : numbers) {
    std::cout << "is_palondromic(" << element << ") → " << (is_palindromic(element) ? "true" : "false") << std::endl;
  }// como la terminal interpreta true o false como 1 y 0, se especifica en el output que,
  //si existe la función devolver true y si no false
  return 0;
}

