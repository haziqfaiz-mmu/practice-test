/*
Multimedia University
Faculty of Computing and Informatics
Trimester 2010
TCP1101 Programming Fundamentals
Lab Test

-----------------------------------------------------------
Question Type : Write a program
-----------------------------------------------------------

The following program computes the factorial of a given number.
The program contains 4 syntax errors. Identify and correct them
so that the program will generate the following sample runs.

The sample runs are as follows.


Sample Run 1:

Enter an int value: 6
6
Factorial = 720


Sample Run 2:

Enter an int value: 10
10
Factorial = 3628800

*/


#include <iostream>
using namespace std;

long double factorial(long double t){
    long double f=1;
    for (int i=1; i<=t; i++)
        f = f * i;
    return f;
}


// you are not allowed to modify the main function
// contents. If you do so, you will be granted 0.
int main()
{
    int x;
    cout << "Enter an int value: ";
    cin >> x;
    cout << x << endl;
    cout << "Factorial = " << factorial(x) << endl;

	return 0;
}
