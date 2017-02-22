#include "allDayZone1.h"


AllDayZone1::AllDayZone1()
{

   setCost(4.90);
   setZones("1");
   setLength("All Day");
}

AllDayZone1::AllDayZone1(string theLength, string theZones, float theCost)
{
   length = theLength;
   zones = theZones;
   cost = theCost;
}

AllDayZone1::~AllDayZone1()
{
   
}

void AllDayZone1::input()
{
   cout << "You have purchased " << length << " for Zone " << zones 
        << ", costing $" << cost;
}

void AllDayZone1::print()
{
   cout << "\nPurchased " << length << " pass for Zone " << zones << ", costing $"
        << cost;
}

bool AllDayZone1::isTravelPass(TravelPass& pass)
{
   return false;     
}
