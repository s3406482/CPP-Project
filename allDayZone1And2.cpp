#include "allDayZone1And2.h"

AllDayZone1And2::AllDayZone1And2()
{
   setCost(6.80);
   setZones("1 and 2");
   setLength("All Day");
}

AllDayZone1And2::AllDayZone1And2(string theLength, string theZones, float theCost)
{
   length = theLength;
   zones = theZones;
   cost = theCost;
}

AllDayZone1And2::~AllDayZone1And2()
{
   
}

void AllDayZone1And2::input()
{
   cout << "You have purchased " << length << " for Zone " << zones 
        << ", costing $" << cost;
}

void AllDayZone1And2::print()
{
   cout << "\nPurchased " << length << " pass for Zone " << zones << ", costing $"
        << cost;
}

bool AllDayZone1And2::isTravelPass(TravelPass& pass)
{
   return true;
}
