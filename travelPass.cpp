// abstract or base class for the passes
//


#include "travelPass.h"

string length;
string zones;
float cost;


TravelPass::TravelPass()
{
   
}

TravelPass::~TravelPass()
{
   
}

TravelPass::TravelPass(string theLength, string theZones, float theCost)
{
   
}

void TravelPass::input()
{
  
}

void TravelPass::print()
{
   
}

//this is the method for section C isTravelPass the test or check for this 
//method is in the print purchases option. True for Zones 1 and 2. False for 
//Zone1
bool TravelPass::isTravelPass(TravelPass& pass)
{
   return false;
     
}

float TravelPass::getCost() const
{
   return cost;
}

string TravelPass::getLength() const
{
   return length;
}

string TravelPass::getZones() const
{
   return zones;
}

void TravelPass::setCost(float newCost)
{
   cost = newCost;
}

void TravelPass::setLength(string newLength)
{
   length = newLength;
}

void TravelPass::setZones(string newZones)
{
   zones = newZones;
}

// overloading operator >>
istream &operator >> (istream &input, TravelPass& pass)
{
   input >> pass.length >> pass.zones >> pass.cost;
   return input;
}
// overloading <<
ostream &operator << (ostream &output, TravelPass& pass)
{ 
   
   output << "You have a " << pass.length << pass.zones << " costing " << pass.cost;
   return output;            
}
