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

Prompt the user to input a non-zero positive integer,
and then output the following pattern.

You must use repetition structure such as for-loop or while-loop.

The sample runs are as follows.


Sample Run 1:

Input => 5

+      
++     
+++    
++++   
+++++


Sample Run 2:

Input => 10

+           
++          
+++         
++++        
+++++       
++++++      
+++++++     
++++++++    
+++++++++   
++++++++++  


---------------------------------------------------------------*/

#include <iostream>
using namespace std;

int main()
{
    int run;

    cout<<"Sample run: ";
    cin>>run;

    for(int i=0;i<run;i++){
        for(int j =0;j<=i;j++){
            cout<<"+ ";
        }
        cout<<endl;
    }


	return 0;
}

