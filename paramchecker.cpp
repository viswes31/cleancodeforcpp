#include "paramchecker.h"

enum Vitals
{
  BPM = 0,
  SPO2,
  RESPRATE,
  MAX_VITALS
}

struct vitalsRange
{
  float minRange;
  float maxRange;
} 

struct vitalsRange vitalRange[3];

vitalsRange[BPM].minRange = 70;
vitalsRange[BPM].maxRange = 70;

vitalsRange[SPO2].minRange = 70;
vitalsRange[SPO2].maxRange = 70;

vitalsRange[RESPRATE].minRange = 70;
vitalsRange[RESPRATE].maxRange = 70;


bool checkIfVitalOutOfRange(float vital, float minRange, float maxRange)
{
  return (vital < minRange || vital > maxRange);
}

bool vitalsAreOk(std::vector<float> inputVitals) {
  bool areVitalsOk = true;
  for(int count=0; count < MAX_VITALS; ++count)
  {
    if(checkIfVitalOutOfRange(inputVitals[count], vitalsRange[count].minRange, vitalsRange[count].maxRange) == false)
    {
      areVitalsOk = false;
      break;
    }      
  }
  
  return areVitalsOk;
}
