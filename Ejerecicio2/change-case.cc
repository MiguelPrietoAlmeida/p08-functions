/**
 * Universidad de La Laguna
 * Escuela Superior de Ingeniería y Tecnología
 * Grado en Ingeniería Informática
 * Informática Básica
 *
 * @author Miguel Prieto Almeida alu0101623450@ull.edu.es
 * @date Nov 10th 2023
 * @brief the program change the case of the letters.
 */

#include <iostream>
#include <vector>
#include <cctype>
#include <string>

char ChangeCase(char character) {
  char case_changing = isupper(character) ? tolower(character) : toupper(character);
  return case_changing;
}
int main() {
  std::string word;
  std::vector<std::string> words;
  while (std::cin >> word) {
    words.push_back(word);
  }
  for (std::string element : words) {
    for (char character : element) {
      std::cout << ChangeCase(character);
    }
    std::cout << std::endl;
  }
  return 0;
}

