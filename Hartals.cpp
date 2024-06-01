#include "Hartals.h"

int Hartals::getNumCases (void) {
  return fileIO.getNumCases();
}
void Hartals::getCaseInput (void) {
  numDays = fileIO.getNumDays();
  numParties = fileIO.getNumParties();
  hartalVector = fileIO.getHartalVector(numParties);

  for (auto it = hartalVector.begin(); it != hartalVector.end(); it++) {
    std::cerr << "Hartal on day " << *it << std::endl;
  }
}
void Hartals::calculateDaysLost (void) {
  daysLost = 0;

  // Iterate through each day
  for (int i = SUNDAY; i < SUNDAY + numDays; i++) {
    // No hartals on Fridays or Saturdays 
    if (i % 7 == FRIDAY) continue;
    if (i % 7 == SATURDAY) continue;
    
    // Iterate through hartal vector
    for (auto it = hartalVector.begin(); it != hartalVector.end(); it++) {
      // If the day is a hartal, increment days lost
      if (i % *it == 0) {
        daysLost++;
        std::cerr << i << " " << *it << std::endl;
        break;
      }
    }
  }
}
void Hartals::printDaysLost (void) {
  fileIO.printDaysLost(daysLost);
}