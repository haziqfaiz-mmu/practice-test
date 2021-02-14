/*
Multimedia University
Faculty of Computing and Informatics
Trimester 2010
TCP1101 Programming Fundamentals
Lab Test

-----------------------------------------------------------
Question Type : Write a program
-----------------------------------------------------------

Write the needed code to make the program runs correctly.

Write a program that asks to enter number of digits,
then displays from 1 digit to n digits in multiple of tens
with dot and with each Item Number increased sequentially.
Format your multiple of tens using the correct width size.

(hint: you might need to use "long double" for your data type
       and use iomanip to ommit the decimal point)

The sample runs are as follows.


Sample Run 1:

Enter number of digits => 11
     
          1. Item 1
         10. Item 2
        100. Item 3
       1000. Item 4
      10000. Item 5
     100000. Item 6
    1000000. Item 7
   10000000. Item 8
  100000000. Item 9
 1000000000. Item 10
10000000000. Item 11


Sample Run 2:

Enter number of digits => 20

                   1. Item 1
                  10. Item 2
                 100. Item 3
                1000. Item 4
               10000. Item 5
              100000. Item 6
             1000000. Item 7
            10000000. Item 8
           100000000. Item 9
          1000000000. Item 10
         10000000000. Item 11
        100000000000. Item 12
       1000000000000. Item 13
      10000000000000. Item 14
     100000000000000. Item 15
    1000000000000000. Item 16
   10000000000000000. Item 17
  100000000000000000. Item 18
 1000000000000000000. Item 19
10000000000000000000. Item 20


-----------------------------------------------------------*/

#include <iostream>
#include <iomanip>
using namespace std;

void print(int x){

    for(int i=0;i<x;i++){
        for(int j=i;j<=x;j++){
            cout<<" ";
        }
        cout<<"1";
        for(int k=0;k<i;k++){
            cout<<"0";
        }
        cout<<". "<<"Item "<<i+1<<endl;
    }
}

int main( )
{
    print(20);

    return 0;
}






