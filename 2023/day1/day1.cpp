// Copyright 2024 Stefano Dobbin

#include <algorithm>
#include <fstream>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  char numbers[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};

  std::ifstream inputFile;
  inputFile.open("input.txt");

  std::string firstValue = "";
  std::string secondValue = "";

  int totalValue = 0;

  for (std::string line; std::getline(inputFile, line);) {
    for (char c : line) {
      auto check = std::find(std::begin(numbers), std::end(numbers), c);
      if (check != numbers + (sizeof(numbers) / sizeof(numbers[0]))) {
        if (firstValue == "") {
          firstValue = c;
        }
        secondValue = c;
      }
    }
    totalValue += std::stoi(firstValue + secondValue);
    firstValue = "";
    secondValue = "";
  }

  std::cout << "Total: " + std::to_string(totalValue) << std::endl;

  return 0;
}
