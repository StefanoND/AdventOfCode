// Copyright 2024 Stefano Dobbin

#include <fstream>

int main(int argc, char *argv[]) {
  std::ifstream inputFile;
  inputFile.open("input.txt");

  if (!inputFile.is_open()) {
    throw std::runtime_error("Error opening file");
  }

  // TODO: Declare other vars, game sets, boxes, id, etc

  // TODO: Function itself that will figure stuff out

  // TODO: Print result and close file

  inputFile.close();
  return 0;
}
