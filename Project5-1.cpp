//Student Name: Zachary Carper
//Student ID: 1573581
//Class: CS-210-R1969 Programming Lanuages
//Module: 5-1 Project Two
//Instructor: Ethan Rondeau
//Date: 03 October 2021

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
   //Declare variables to store input
   float initInv, monDep, AnuInt, months, years;
   //Variable for interest,year end interest, and total amount
   float totalAm, intAmt, yearTotInt;


   //Display form to user
   cout << "********************************\n";
   cout << "********** Data Input **********\n";
   cout << "Initial Investment Amount: \n";
   cout << "Monthly Deposit: \n";
   cout << "Annual Interest: \n";
   cout << "Number of years: \n";

   //Users input
   system("PAUSE");

   //Get data from user
   cout << "********************************\n";
   cout << "********** Data Input **********\n";
   cout << "Initial Investment Amount: $";
   cin >> initInv;
   cout << "Monthly Deposit: $";
   cin >> monDep;
   cout << "Annual Interest: %";
   cin >> AnuInt;
   cout << "Number of years: ";
   cin >> years;
   months = years * 12;

   //Users input
   system("PAUSE");

   //Updates total amount
   totalAm = initInv;

   //Shows yearly data with no monthly deposits
   cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
   cout << "==============================================================\n";
   cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
   cout << "--------------------------------------------------------------\n";


   for (int i = 0; i < years; i++) {

       //Adds up yearly interest
       intAmt = (totalAm) * ((AnuInt / 100));

       //Adds up total for entire year
       totalAm = totalAm + intAmt;

       //Shows results with only two decimal points
       cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << intAmt << "\n";

   }

   //Updates total intial investment
   totalAm = initInv;

   //Year data with monthly deposits
   cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
   cout << "==============================================================\n";
   cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
   cout << "--------------------------------------------------------------\n";

   for (int i = 0; i < years; i++) {

       //Yearly interest at 0
       yearTotInt = 0;

       for (int j = 0; j < 12; j++) {

           //Monthly Interest
           intAmt = (totalAm + monDep) * ((AnuInt / 100) / 12);

           //End of Month Interest
           yearTotInt = yearTotInt + intAmt;

           //Month end total
           totalAm = totalAm + monDep + intAmt;

       }

       //Print results to table showcasing only two decimal points
       cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << yearTotInt << "\n";


   }

   return 0;
}

