#include <iostream>

#include "FileIO.h"

int main(int argc, char **argv) {

  FileIO fileIO;
  fileIO.openFiles(argc, argv);

  int numCases = fileIO.getNumCases();
  for (int i = 0; i < numCases; i++) {
    int nd = fileIO.getNumDays();
    int np = fileIO.getNumParties();
    std::vector<bool> hartalVec = fileIO.getHartalVector(np);


    std::cerr << "nd: " << nd << std::endl;
    std::cerr << "np: " << np << std::endl;
    
    fileIO.printDaysLost (12);
  }

  

  return 0;
}