/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 * @date Nov 9th 2023
 * @brief the program returns the maximum of four given integer numbers a, b, c and d.
 */
#include <iostream>
#include <vector>

int max4(int number1, int number2, int number3, int number4) {
  if (number1 >= number2 && number1 >= number3 && number1 >= number4) {
    return number1;
  }
  else if (number2 >= number1 && number2 >= number3 && number2 >= number4) {
    return number2;
  }
  else if (number3 >= number1 && number3 >= number2 && number3 >= number4) {
    return number3;
  }
  else {
    return number4;
  }
}
int main() {
  int numbers;
  std::vector<int> numbers_vector;
  while (std::cin >> numbers) {
    numbers_vector.push_back(numbers);
  }
  for (int i{0}; i < static_cast<int>(numbers_vector.size()); i += 4) {
    int a{numbers_vector[i]};
    int b{numbers_vector[i + 1]};
    int c{numbers_vector[i + 2]};
    int d{numbers_vector[i + 3]};
    int maximum4{max4(a, b, c, d)};
    std::cout << "max4(" << a << ", " << b << ", " << c << ", " << d << ") → " << maximum4 << std::endl;
  }
  return 0;
}
