//
//myTic.h
//
// MyTic class
//

#ifndef __MYTIC_H__
#define __MYTIC_H__

#include<iostream>
#include<string>
using namespace std;

#define MAX_CREDIT 100
#define MAX_TRAVELPASSES 100
/*TO DO  REQUIRED HEADER FILES AND NAMESPACES*/

class MyTic
{
private:
  float credit;
  float limit;
  //TravelPass** travelPasses;
  /*TO DO ANY FURTHER ATTRIBUTES AND CONSTANTS*/
  
public:
  MyTic();
  MyTic(float theCredit, float theLimit);
   ~MyTic() ; 
  void input() ;   // Data input for a MyTic object
  void print() ;  // Data output for a MyTic object
  void setCredit();
  
  void addPass(); //created this to add a pass no matter what type
  void thz1Test();
  
// friend istream& operator >> (istream& input, TravelPass& pass);
//  friend ostream &operator << (ostream &output, TravelPass& pass);
  float getCredit() const;   //Note the use of const
  float getLimit() const;

  /*TO DO  REQUIRED FUNCTIONS REQUIRED FOR PURCHASING A TRAVEL PASS */
};

#endif
