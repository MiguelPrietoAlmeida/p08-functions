/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 * @date Nov 10th 2023
 * @brief the program 
 */

#include <iostream>
#include <cmath>
// Función para calcular el área usando la Fórmula de Herón
double Area(double a, double b, double c) {
  double s = (a + b + c) / 2;
  return std::sqrt(s * (s - a) * (s - b) * (s - c));
}
// Función para verificar si las longitudes forman un triángulo válido
bool IsAValidTriangle(double a, double b, double c) {
  return (a + b > c) && (a + c > b) && (b + c > a);
}
int main() {
  double a, b, c;
  std::cout << "Ingrese las longitudes de los lados del triángulo: ";
  std::cin >> a >> b >> c;
  if (IsAValidTriangle(a, b, c)) {
    // Si es un triángulo válido, calcula y muestra el área
    double area = Area(a, b, c);
    std::cout << "El área del triángulo es: " << area << std::endl;
  } 
  else {
    // Si no es un triángulo válido, muestra un mensaje de error
    std::cout << "No es un triángulo válido." << std::endl;
  }
  return 0;
}

