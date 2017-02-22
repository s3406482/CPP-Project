// testTravelPass.cpp for CPT 323 Assignment 1 SP3 2014
//
//
// CPT323 2014  assignment 1



#include "testTravelPass.h"

/////////////////////////////////////////////////////
int main()
{
   //for formatting purposes so money values are printed correctly
   cout.setf(ios::fixed);
   cout.setf(ios::showpoint);
   cout.precision(2);
   
   //Create MyTic object and use this object in the menu
   MyTic ticket;
   

   char option = ' ';
   
   while(option != '0')
   {
      cout << "\n\n\nWelcome to MyTic!!!\n\n"
           << "Choose your option\n"
           << "1. Buy a travel pass\n"
           << "2. Charge my MyTic\n"
           << "3. Show remaining credit\n"
           << "4. Print purchases\n"
           << "0. Quit\n"
           << "Please make a selection:"; 
         
      cin >> option;  
    
      clearInputBuffer();
         
      if(option == '1')
      {
         ticket.input();
      }
      else if(option == '2')
      {
         ticket.setCredit();
      }
      else if(option == '3')
      {
         cout << "\nYour credit = $" << ticket.getCredit();
      }
      else if(option == '4') 
      {
         ticket.print();  
      }
      else if(option == '0')
      {
         ticket.~MyTic();
         cout << "\nGoodbye!!!\n";
            
      }
      else{
         cout << "\nSorry, that is an invalid option.\n";
         
         // this functionality is incomplete 
        // ticket.thz1Test();
            
      }
      
      
   }

   return 0;
}
