#include "FileIO.h"

bool FileIO::checkUsage (int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Usage: " << argv[0] << " <filename>" << std::endl;
    return false;
  }
  else {
    std::cerr << "Usage correct" << std::endl;
    return true;
  }
}
void FileIO::openInFile (char *fn) {
  inFile.open(fn);
  
  if (!inFile) std::cerr << "File <" << fn << "> could not be opened" << std::endl;
  else std::cerr << "File <" << fn << "> opened" << std::endl;
}
void FileIO::openOutFile (char *fn) {
  std::string fileName = fn;
  outFile.open(fileName + ".out");

  if (!outFile) std::cerr << "File <" << fileName << ".out> could not be opened" << std::endl;
  else std::cerr << "File <" << fileName << ".out> opened" << std::endl;
}
void FileIO::openFiles (int argc, char **argv) {
  bool usage = false;
  usage = checkUsage(argc, argv);
  if (usage) {
    openInFile(argv[1]);
    openOutFile(argv[1]);
  }
}


// Accessors
int FileIO::getNumCases (void) {
  int nc;
  inFile >> nc;
  return nc;
}
int FileIO::getNumDays (void) {
  int nd;
  inFile >> nd;

  if (nd < 1 || nd > 3650) std::cerr << "number of days must be between 1 and 3650" << std::endl;
  else std::cerr << "number of days is: " << nd << std::endl;
  
  return nd;
}
int FileIO::getNumParties (void) {
  int np;
  inFile >> np;

  if (np < 1 || np > 100) std::cerr << "number of parties must be between 1 and 100" << std::endl;
  else std::cerr << "number of parties is: " << np << std::endl;
  
  return np;
}
std::vector<int> FileIO::getHartalVector (int numParties) {
  std::vector<int> hartalVec;

  for(int i = 0; i < numParties; i++) {
    int hn;
    inFile >> hn;
    hartalVec.push_back(hn);
  }

  // Sort
  sort(hartalVec.begin(), hartalVec.end());

  // Push duplicates to end of vector
  auto it = unique(hartalVec.begin(), hartalVec.end());

  // Erase duplicates
  hartalVec.erase(it, hartalVec.end());
  
  return hartalVec;
}

void FileIO::printDaysLost(int dl) {
  std::cout << "The number of days lost is: " << dl << std::endl;
}