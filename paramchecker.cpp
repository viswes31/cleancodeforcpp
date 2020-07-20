


bool checkIfBpmOutOfRange(float bpm)
{
  bool isBpmOutOfRange = false;
  if(bpm < 70 || bpm > 150)
    isBpmOutOfRange = true;
  return isBpmOutOfRange;
}

bool checkIfSpoOutOfRange(float spo2)
{
  bool isSpoOutOfRange = false;
  if(spo2 < 80)
    isSpoOutOfRange = true;
  return isSpoOutOfRange;
}

bool checkIfRespRateOutOfRange(float respRate)
{
  bool isRespRateOutOfRange = false;
  if(respRate < 30 || respRate > 60)
    isRespRateOutOfRange = true;
  return isRespRateOutOfRange;
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return (checkIfBpmOutOfRange(bpm) && checkIfSpoOutOfRange(spo2) && checkIfRespRateOutOfRange(respRate));
}
/*
  if(bpm < 70 || bpm > 150) {
    return false;
  } else if(spo2 < 80) {
    return false;
  } else if(respRate < 30 || respRate > 60) {
    return false;
  }
  return true;
}*/
