

#include "twoHoursZone1And2.h"


TwoHoursZone1And2::TwoHoursZone1And2()
{
   setCost(3.50);
   setZones("1 and 2");
   setLength("Two hours");
}

TwoHoursZone1And2::TwoHoursZone1And2(string theLength, string theZones, float theCost)
{
   length = theLength;
   zones = theZones;
   cost = theCost;
}

TwoHoursZone1And2::~TwoHoursZone1And2()
{
   
}

void TwoHoursZone1And2::input()
{
   cout << "You have purchased " << length << " for Zone " << zones 
        << ", costing $" << cost;
}

void TwoHoursZone1And2::print()
{
   cout << "\nPurchased " << length << " pass for Zone " << zones << ", costing $"
        << cost;
}

bool TwoHoursZone1And2::isTravelPass(TravelPass& pass)
{
   return true;   
}
