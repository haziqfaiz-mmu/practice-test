/*
Multimedia University
Faculty of Computing and Informatics
Trimester 2010
TCP1101 Programming Fundamentals
Lab Test

-----------------------------------------------------------
Question Type : Write a program
-----------------------------------------------------------

    Given the following equation, write a proper C++ program
    to prompt the user to input a value for x and prints out
    the value of y.


                    3
                   x    - 3x  + 5
        y  =   -------------------
                   ------------
                  /      3
                \/  (x-2)


   The sample runs are as follows.


Sample Run 1:

Enter a value for x:5
5
y = 22.1318



Sample Run 2:

Enter a value for x:6.8
6.8
y = 28.4352

*/

#include <iostream>
#include <cmath>
using namespace std;

double calc(int x){
    double result = (pow(x,3) - (3*x) +5) / (sqrt(pow(x-2,3)));
    return result;
}

int main()
{
    double x, y;

    //you are not allowed to change the following 3 lines
    cout << "Enter a value for x:";
    cin >> x;
    cout << x << endl;

    

    y = calc(x);
    ////////////////////////////////////////////////////
    //          write your implementation below       //
    ////////////////////////////////////////////////////



    ////////////////////////////////////////////////////
    //   you are not allowed to change below this line
    ////////////////////////////////////////////////////

    cout << "y = " << y << endl;


	return 0;
}
