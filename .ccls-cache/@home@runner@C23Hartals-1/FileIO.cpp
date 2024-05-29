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