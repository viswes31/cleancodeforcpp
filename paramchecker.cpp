
bool checkIfVitalOutOfRange(float vital, float minRange, float maxRange)
{
  return (vital < minRange || vital > maxRange);
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return (checkIfVitalOutOfRange(bpm, 70, 150) ? false : (checkIfSpoOutOfRange(spo2, 80, 100) ? false : !checkIfRespRateOutOfRange(respRate, 30, 60)));
}
