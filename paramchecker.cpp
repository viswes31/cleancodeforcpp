#include "paramchecker.h"

using namespace std;

class Vital
{
	float minRange;
	float maxRange;
	
	public:
	   virtual ~Vital(){}
	   bool isVitalOk(float vital) 
	   {
	       return !((vital < getMinRange()) || (vital > getMaxRange()));
	   }
	   float getMinRange() {  return minRange; }
	   float getMaxRange() {  return maxRange; }
	   void setMinRange(float min) { minRange = min; }
	   void setMaxRange(float max) { maxRange = max; }
};

class BPM:public Vital{

	public:
	BPM(){	
	setMinRange(70);
	setMaxRange(150);
	}
	
	
	virtual ~BPM(){}
};

class SPO2:public Vital{

	public:
	SPO2(){	
	setMinRange(80);
	setMaxRange(100);
	}
	
	virtual ~SPO2(){}
};

class RESP:public Vital{

	public:
	RESP(){	
	setMinRange(30);
	setMaxRange(60);
	}
	
	virtual ~RESP(){}
};



class ParamChecker
{
	std::vector<Vital*> vitalList;
	public:
	ParamChecker()
	{
		Vital *bpmVital = new BPM();
		Vital *SPO2Vital = new SPO2();
		Vital *RESPVital = new RESP();
		vitalList.push_back(bpmVital);
		vitalList.push_back(SPO2Vital);
		vitalList.push_back(RESPVital);
	}
	bool checkIfVitalOutOfRange(std::vector<float> patientVitals)
	{
		std::vector<Vital*>::iterator vitalItr = vitalList.begin();
		std::vector<float>::iterator patientVitalItr = patientVitals.begin();
		bool isVitalOutOfRange = false;
		for (; vitalItr!=vitalList.end() ; ++vitalItr, ++patientVitalItr)
		{
			if(!(*vitalItr)->isVitalOk(*patientVitalItr))
			{
				isVitalOutOfRange = true;
				break;
			}
		}
		return isVitalOutOfRange;
	}
};

bool vitalsAreOk(std::vector<float> inputVitals) {
  ParamChecker paramchecker;
  return !paramchecker.checkIfVitalOutOfRange(inputVitals);
}
