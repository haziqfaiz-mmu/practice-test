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

Prompt the user to input four integers between 0 and 20,
and then output the following horizontal histogram.
Each asterisk should represent one mark.

The sample runs are as follows.


Sample Run 1:

    Input four integers between 0 and 20 => 10 12 18 8

    mark 1: **********
    mark 2: ************
    mark 3: ******************
    mark 4: ********


Sample Run 2:

    Input four integers between 0 and 20 => 19 9 11 6

    mark 1: *******************
    mark 2: *********
    mark 3: ***********
    mark 4: ******


---------------------------------------------------------------*/

#include <iostream>
using namespace std;

void print(int x){
    for(int i =0; i<=x; i++){
        cout<<"*";
    }
}

int main()
{
    //Write your code below
    int a,b,c,d;
    cout<<"Input four integers between 0 and 20 => ";
    cin>>a>>b>>c>>d;

    cout<<"mark 1: ";print(a);
    cout<<endl;
    cout<<"mark 2: ";print(b);
    cout<<endl;
    cout<<"mark 3: ";print(c);
    cout<<endl;
    cout<<"mark 4: ";print(d);
    cout<<endl;
    


	return 0;
}
