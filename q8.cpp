/*  
Multimedia University
Faculty of Computing and Informatics
Trimester 2010
TCP1101 Programming Fundamentals
Lab Test

-----------------------------------------------------------
Question Type : Write a program
-----------------------------------------------------------

Convert the flowchart (flowch-a.pdf) into a C++ program.

Sample Run 1:
=============
Enter an integer: 71
10201

Sample Run 2:
=============
Enter an integer: 80
49

Sample Run 3:
=============
Enter an integer: 110
81

---------------------------------------------------------------*/
#include <iostream>
#include <string>
using namespace std;

int main() 
{
    int a;
    cout<<"Enter A: ";
    cin>>a;

    while(a>100){
        a = a-10;
    }

    if(a<80){
        a = a+5;
        while(a<100){
            a = a+5;
        }
        a= a*a;
    }

    else{
        a= a-5;
        if(a>50){
            a = a/10;
        }
        a= a*a;
    }


    // 
    //   do not  change the lines below
    //
    cout << a << endl;
    
    return 0;
}
