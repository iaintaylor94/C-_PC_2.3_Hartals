#ifndef _FILE_IO_H
#define _FILE_IO_H

#include <fstream>
#include <iostream>
#include <string>


class FileIO {
std::ifstream inFile;
std::ofstream outFile;

bool checkUsage (int, char **);
void openInFile (char *);
void openOutFile (char *);


public:
  FileIO() {}; // Default constructor
  ~FileIO() {
    inFile.close();
    outFile.close();
  };

  void openFiles (int, char **);

};

#endif