
#include "allDayZone1.h"
#include "myTic.h"
#include "travelPass.h"
#include "allDayZone1And2.h"
#include "twoHoursZone1.h"
#include "twoHoursZone1And2.h"


float credit = 0.00;
int passAmount = 0;
TravelPass** travelPasses = new TravelPass*[MAX_TRAVELPASSES];
TravelPass* thz1 = new TwoHoursZone1();

MyTic::MyTic()
{

}

MyTic::MyTic(float theCredit,float theLimit)
{
   theCredit = credit;
   theLimit = MAX_CREDIT;  
}

MyTic::~MyTic()
{
   int i;
   for(i = 0; i < passAmount; i++)
   {
      delete travelPasses[i];
   }
   
}
// input for the selection of ticket, option is chosen
// then correct type of ticket is created and added to the 
// travelPasses array
void MyTic::input()
{
   char selection;
   int count = 0;
   while(count == 0)
   {
      cout << "\nWhat time period:\n" 
           << "a) 2 Hours\n"
           << "b) All Day\n"
           << "c) Cancel\n"
           << "Your selection:";
      
      cin >> selection;
      clearInputBuffer();
      
      if(selection == 'a' || selection == 'A')
      {
         char zone;
         cout << "\nWhich Zone?\n"
              << "a)Zone 1\n"
              << "b)Zone 1 and 2\n"
              << "c)Cancel\n"
              << "Your selection:";
         cin >> zone;
         
         if(zone == 'a' || zone == 'A')
         {
            travelPasses[passAmount] = new TwoHoursZone1();
            addPass();
         }
         else if(zone == 'b' || zone == 'B')
         {
            travelPasses[passAmount] = new TwoHoursZone1And2();
            addPass();
         }
         else if(zone == 'c' || zone == 'C')
         {
            
         }   
         else
         {
            cout << "Sorry, please input correct option"; 
             
         }  
         count++;
      }
      else if(selection == 'b' || selection == 'B')
      {
         char zone;
         cout << "\nWhich Zone?\n"
              << "a)Zone 1\n"
              << "b)Zone 1 and 2\n"
              << "c)Cancel\n"
              << "Your selection:";
         cin >> zone;
         clearInputBuffer();
         
         if(zone == 'a' || zone == 'A')
         {
            travelPasses[passAmount] = new AllDayZone1();
            addPass();
            
         }
         else if(zone == 'b' || zone == 'B')
         {
            travelPasses[passAmount] = new AllDayZone1And2();
            addPass();
         }
         else if(zone == 'c' || zone == 'C')
         {
            
         }   
         else
         {
            cout << "Sorry, please input correct option";
               
         }  
         
         count++;
      }
      else if(selection == 'c' || selection == 'C')
      {
         count++;
      }
      else
      {
         cout << "Sorry, please input correct option\n";
          
      }
   }
   
}

void MyTic::setCredit()
{
   int addAmount;
   int count = 0;
   
   //checks to ensure credit is multiples of 5 and not over 100         
   while(count == 0)
   {
      cout << "How much do you want to add?: $";
      cin >> addAmount;
      if(!cin)
      {
         cout << "Sorry, please enter a number amount";
         return;  
      }
      clearInputBuffer();
      if(addAmount + credit > 100)
      {
         cout << "Sorry, the max amount of credit allowed is $100.00\n";   
      }
      else if(addAmount % 5 != 0)
      {
         cout << "Sorry,you can only add multiples of $5.00\n";
      }
      else{
         credit = credit + addAmount;
         cout << "Your credit = $" << credit;
         count++;
      }
   }
   
}

float MyTic::getCredit() const
{
   return credit;
}

float MyTic::getLimit() const
{
   return MAX_CREDIT;  
   
}

//for loop for printing each function also added test for isTravelPass
void MyTic::print()
{
   int i;
   int oneZone = 0;
   int twoZones = 0;
   for(i = 0; i < passAmount; i++)
   {
      travelPasses[i]->print();
      
// here is the test for isTravelPass it will print how many purchased are Zone 1
// and how many are both Zone 1 and 2      
      if(travelPasses[i]->isTravelPass(*travelPasses[i]) == true)
      {
         twoZones++;     
      }
      else
     {
         oneZone++;
     }
   }
   
   cout << "\nYou have " << twoZones << " passes that allow you to travel both zones";
   cout << "\nYou have " << oneZone << " passes that allow you to travel one zone";
   
   
}

//this is the method for adding a pass
void MyTic::addPass()
{
   
   if(travelPasses[passAmount]->getCost() > credit)
   {
      cout << "Error not enough credit!!!";
      delete travelPasses[passAmount];  
   }
   else
   {
      
      travelPasses[passAmount]->input();
      credit = credit - travelPasses[passAmount]->getCost();
      passAmount++;
   }
}

void MyTic::thz1Test()
{
   //cin >> thz1;
   cout << thz1;  
}
