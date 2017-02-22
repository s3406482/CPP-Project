//
// twoHoursZone1.h
//
// derived class
//

#ifndef __TWOHOURSZONE1_H__
#define __TWOHOURSZONE1_H__


#include "travelPass.h"

class TwoHoursZone1 : public TravelPass
{

public:
  TwoHoursZone1();
  TwoHoursZone1(string theLength, string theZones, float theCost);
   ~TwoHoursZone1() ; 
  virtual void input() ;   // Data input for a TwoHoursZone1 object
  virtual void print() ;   // Data output for a TwoHoursZone1 object
  bool isTravelPass(TravelPass& pass); //section C is TravelPass check
};

#endif
