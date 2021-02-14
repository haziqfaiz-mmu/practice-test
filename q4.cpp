/* 

Multimedia University
Faculty of Computing and Informatics
Trimester 2010
TCP1101 Programming Fundamentals
Lab Test

-----------------------------------------------------------
Question Type : Write a program
-----------------------------------------------------------

	Many carparks today still operate based on the duration 
	you park your car. The longer you park, the more you pay!

	Write a C++ program to calculate the total charge incurred 
	while using a carpark.  
	
    The program should prompt the user to enter the parking 
	duration in hours, and the total carpark charge will be 
	displayed. The following table shows the charge plan for 
	this carpark:

	*********************************************
    Duration					Charge (RM)
	---------------------------------------------
	First 3 hours					2 flat
	The next 2 hours				3 extra
	Following hours thereafter		2 per hour
	*********************************************

	The following sample runs demonstrate the required format  
	of display and some possible input.

    Sample Run 1:

       Parking duration (hrs): 3
       Total carpark charge: 2

    Sample Run 2:

       Parking duration (hrs): 4
       Total carpark charge: 5

    Sample Run 3:

       Parking duration (hrs): 10
       Total carpark charge: 15

---------------------------------------------------------*/
#include <iostream>
#include <cstdlib>
using namespace std;

int calc(int hours){
	if (hours<=3){
		return 2;
	}

	else if (hours>3 && hours<=5)
	{
		return 5;
	}

	else{
		return 5 + (hours-5)*2;
	}
	
}

int main() 
{
    int hrs, charge;
    
    // you are not alloed to change the following 3 lines
    cout << "Parking duration (hrs): ";
    cin >> hrs;
    cout << hrs << endl;
    
	//  Write your program here

	charge = calc(hrs);


	// do not  change the lines below
    cout << "Total carpark charge: " << charge << endl;
	
	return 0;
}
