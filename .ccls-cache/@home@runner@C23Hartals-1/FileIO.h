#ifndef _FILE_IO_H
#define _FILE_IO_H

#include <fstream>
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>


const int SUNDAY = 1;       // STARTS ON SUNDAY
const int MONDAY = 2;       
const int TUESDAY = 3;
const int WEDNESDAY = 4;
const int THURSDAY = 5;     // NO HARTALS
const int FRIDAY = 6;       // NO HARTALS
const int SATURDAY = 0;

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