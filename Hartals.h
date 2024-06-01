#ifndef _HARTALS_H_
#define _HARTALS_H_

#include <algorithm>

#include "FileIO.h"

class Hartals {

  FileIO fileIO;

  int numDays;
  int numParties;
  std::vector<int> hartalVector;

  int daysLost;

public:
  // Constructors + Destructors
  Hartals() {};
  Hartals(int argc, char **argv) {
    fileIO.openFiles(argc, argv);
  }
  ~Hartals() {};

  // Hartal Functions
  int getNumCases (void);
  void getCaseInput (void);

  void calculateDaysLost (void);

  void printDaysLost (void);
};

#endif