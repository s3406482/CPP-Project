
#include "twoHoursZone1.h"

TwoHoursZone1::TwoHoursZone1()
{
   setCost(2.50);
   setZones("1");
   setLength("Two hours");
}

TwoHoursZone1::TwoHoursZone1(string theLength, string theZones, float theCost)
{
   length = theLength;
   zones = theZones;
   cost = theCost;
}

TwoHoursZone1::~TwoHoursZone1()
{
   
}

void TwoHoursZone1::input()
{
   cout << "You have purchased " << length << " for Zone " << zones 
        << ", costing $" << cost;
}

void TwoHoursZone1::print()
{
   cout << "\nPurchased " << length << " pass for Zone " << zones << ", costing $"
        << cost;
}

bool TwoHoursZone1::isTravelPass(TravelPass& pass)
{
   return false;     
}
