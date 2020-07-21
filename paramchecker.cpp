
bool checkIfVitalOutOfRange(float vital, float minRange, float maxRange)
{
  return (vital < minRange || vital > maxRange);
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return (checkIfVitalOutOfRange(bpm, 70, 150) ? false : (checkIfVitalOutOfRange(spo2, 80, 100) ? false : !checkIfVitalOutOfRange(respRate, 30, 60)));
}
