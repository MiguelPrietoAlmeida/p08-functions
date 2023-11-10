#include <iostream>
#include <cmath>

bool AreEqual(const double number1, const double number2, const double epsilon = 1e-7) {
    return std::fabs(number1 - number2) < epsilon;
}

int main() {
    // Ejemplos de uso
    double kOneThird = 1.0 / 3;

    // Comprobación directa
    std::cout << "Direct comparison: " << (1.0 / 3 == kOneThird) << std::endl;

    // Usando la función AreEqual con un margen de error de 1e-7
    std::cout << "Using AreEqual function: " << AreEqual(1.0 / 3, kOneThird) << std::endl;

    // Prueba con otros valores
    double a = 0.1;
    double b = 0.100000001;

    std::cout << "Are " << a << " and " << b << " approximately equal? "
              << AreEqual(a, b) << std::endl;

    return 0;
}

