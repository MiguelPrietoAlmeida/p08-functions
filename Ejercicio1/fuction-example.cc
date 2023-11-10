/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 * @date Oct 9th 2023
 * @brief the program prints the result of, given trhee numbers (var1, var2, var3),
 * 	  prints the result of the fuction OperationFuction; 
 */

#include <iostream>
#include <vector>
#include <cmath>

double OperationFuction(double var1, double var2, double var3) {
  double numerator{sqrt(2 * var3 - 4)};
  double denominator{var1 * var1 - var2 * var2};
  double result{numerator / denominator};
  return result;
}
int main() {
  double vars;
  std::vector<double> vector_vars;
  while (std::cin >> vars) {
    vector_vars.push_back(vars);
  }
  for (int i{0}; i < static_cast<int>(vector_vars.size()); i += 3) {
    double a{vector_vars[i]};
    double b{vector_vars[i + 1]};
    double c{vector_vars[i + 2]};
    std::cout << OperationFuction(a, b, c) << std::endl;
  }
  return 0;
}




