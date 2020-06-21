
bool isInLimit(float value, float min, float max) {
  return value >= min && value <= max;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return isInLimit(bpm, 70, 150) &&
    isInLimit(spo2, 80, 100) &&
    isInLimit(respRate, 30, 60);
}
