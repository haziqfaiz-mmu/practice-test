/*
Multimedia University
Faculty of Computing and Informatics
Trimester 2010
TCP1101 Programming Fundamentals
Lab Test

-----------------------------------------------------------
Question Type : Write a function definition
-----------------------------------------------------------

Write the needed code to make the program runs correctly.

Write a function definition to check if a number is reversible or not.


The sample runs are as follows.


Sample Run 1:

    Enter integer => 16777761
    16777761
    reversible


Sample Run 2:

    Enter integer => 4442444
    4442444
    reversible


Sample Run 3:

    Enter integer => 76554567
    76554567
    Not reversible


---------------------------------------------------------------*/

#include <iostream>
using namespace std;

const int SIZE =10;

bool isReversible(char ch[], int SIZE){


    int realsize{0},i{0};
    while(ch[i]!=NULL && i<10){
        realsize = realsize+1;
        i++;
    }

    //cout<<"real size ="<<realsize<<endl;
    /////////////
    int mid =realsize/2;
    bool flag = true;

    for(int i=0;i<mid;i++){
        if(ch[i]!=ch[realsize-1]){
            flag = false;
            }
    }
        
    
    return flag;
}

int main()
{
    char ch[SIZE];

	cout << "Enter a number (max 10 digits) => ";
	cin >> ch;
	cout << ch<<endl;
   


    if(isReversible(ch,SIZE))
    {
        cout << "reversible" << endl;
    }
    else
    {
        cout << "Not reversible" << endl;
    }

	return 0;
}
