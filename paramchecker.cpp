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
} vitalRange[MAX_VITALS];

vitalsRange[BPM].minRange = 70;
vitalsRange[BPM].maxRange = 70;

vitalsRange[SPO2].minRange = 70;
vitalsRange[SPO2].maxRange = 70;

vitalsRange[RESPRATE].minRange = 70;
vitalsRange[RESPRATE].maxRange = 70;

std::map vitalLimit;

bool checkIfVitalOutOfRange(float vital, float minRange, float maxRange)
{
  return (vital < minRange || vital > maxRange);
}

void initializeVitalLimits()
{  
  for(int count=0; count < MAX_VITALS; ++count)
  {
    vitalLimit[count] = vitalsRange[count];
  }
}

bool vitalsAreOk(std::vector<float> inputVitals) {
  initializeVitalLimits();
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
