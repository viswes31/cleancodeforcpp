#include "paramchecker.h"

enum Vitals
{
  BPM = 0,
  SPO2,
  RESPRATE,
  MAX_VITALS
};

struct vitalsRange
{
  float minRange;
  float maxRange;
};

struct vitalsRange vitalRange[3];

vitalRange[BPM].minRange = 70;
vitalRange[BPM].maxRange = 70;

vitalRange[SPO2].minRange = 70;
vitalRange[SPO2].maxRange = 70;

vitalRange[RESPRATE].minRange = 70;
vitalRange[RESPRATE].maxRange = 70;


bool checkIfVitalOutOfRange(float vital, float minRange, float maxRange)
{
  return (vital < minRange || vital > maxRange);
}

bool vitalsAreOk(std::vector<float> inputVitals) {
  bool areVitalsOk = true;
  for(int count=0; count < MAX_VITALS; ++count)
  {
    if(checkIfVitalOutOfRange(inputVitals[count], vitalRange[count].minRange, vitalRange[count].maxRange) == false)
    {
      areVitalsOk = false;
      break;
    }      
  }
  
  return areVitalsOk;
}
