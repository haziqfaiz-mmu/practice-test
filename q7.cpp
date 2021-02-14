/*
Multimedia University
Faculty of Computing and Informatics
Trimester 2010
TCP1101 Programming Fundamentals
Lab Test

-----------------------------------------------------------
Question Type : Find Logical Error(s)
-----------------------------------------------------------

Write the needed code to make the program runs correctly.

The following program allows the user to input 4 integer numbers,
then it calculates the minimum and maximum among these numbers.
The program contains a logical error(s) that causes this program not
to function and generates the wrong results.

Fix these logical errors and recompile and run the program so that
the program will generate similar results to the samples below.

Sample Run 1:

    Enter 4 integer numbers -> 8 19 5 6
    8 19 5 6
    min = 5 and max = 19


Sample Run 2:

    Enter 4 integer numbers -> 2 7 5 4
    2 7 5 4
    min = 2 and max = 7

-----------------------------------------------------------*/

#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    int min, max;

    // never modify the following 3 lines
    cout << "Enter 4 integer numbers -> ";
    cin >> a >> b >> c >> d;
    cout << a << " " << b << " " << c << " " << d << endl;


    if (a <= b){
        min = a;
        max = b;
    }

    if (a > b){
        min = b;
        max = a;
        }

    if (min > c) min = c;
    if (max < c) max = c;
    if (min > d) min = d;
    if (max < d) max = d;

    // never modify the following lines
    cout << "min = " << min << " and "
         << "max = " << max << endl;

    return (0);
}
