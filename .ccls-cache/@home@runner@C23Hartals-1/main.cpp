#include <iostream>

#include "Hartals.h"

int main(int argc, char **argv) {

  Hartals hartals (argc, argv);

  int numCases = hartals.getNumCases();
  for (int i = 0; i < numCases; i++) {
    hartals.getCaseInput();
    hartals.calculateDaysLost();
    hartals.printDaysLost();
    std::cout << std::endl;
  }

  
  return 0;
}