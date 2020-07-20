


bool checkIfBpmOutOfRange(float bpm)
{
  return (bpm < 70 || bpm > 150);
}

bool checkIfSpoOutOfRange(float spo2)
{
  return (spo2 < 80);
}

bool checkIfRespRateOutOfRange(float respRate)
{
  return (respRate < 30 || respRate > 60);
}

bool vitalsAreOk(float bpm, float spo2, float respRate) {
  return (checkIfBpmOutOfRange(bpm) ? false : (checkIfSpoOutOfRange(spo2) ? false : !checkIfRespRateOutOfRange(respRate)));
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
