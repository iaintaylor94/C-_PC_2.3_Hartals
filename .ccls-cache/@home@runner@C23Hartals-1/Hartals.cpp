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
  for (int i = OFF_BY_ONE; i < numDays + OFF_BY_ONE; i++) {
    // No hartals on Fridays or Saturdays 
    if (i % FRIDAY == 0) continue;
    if (i % SATURDAY == 0) continue;
    
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