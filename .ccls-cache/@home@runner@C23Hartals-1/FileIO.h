#ifndef _FILE_IO_H
#define _FILE_IO_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

const int OFF_BY_ONE = 1;
const int FRIDAY = 6;
const int SATURDAY = 7;

class FileIO {
std::ifstream inFile;
std::ofstream outFile;

// FileIO
bool checkUsage (int, char **);
void openInFile (char *);
void openOutFile (char *);



public:
  // Constructors + Destructors
  FileIO() {};
  FileIO(int argc, char **argv) {
    openFiles (argc, argv);
  }
  ~FileIO() {
    inFile.close();
    outFile.close();
  };

  // FileIO
  void openFiles (int, char **);

  // Accessors
  int getNumCases (void);

  int getNumDays (void);
  int getNumParties (void);
  std::vector<int> getHartalVector (int);

  void printDaysLost (int);

};

#endif