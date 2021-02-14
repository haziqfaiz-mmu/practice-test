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

Prompt the user to input vector size and input vector data,
and then output the following vector data in reversed order.

The sample runs are as follows.


Sample Run 1:

    Input vector size => 14
    Input vector data => f o r m a t y o u r c o d e

    Vector data in reversed: e d o c r u o y t a m r o f


Sample Run 2:

    Input vector size => 17
    Input vector data => l e a r n f u n d a m e n t a l s

    Vector data in reversed: s l a t n e m a d n u f n r a e l


---------------------------------------------------------------*/

// you are not allowed to add any additional header files
// if you do so, you will be rewarded with 0

#include <iostream>
#include <vector>
using namespace std;

void print(vector<char> &c)
{
    cout << "Vector data in reversed: ";
    int size = c.size();
    for(int i=size;i>=0;i--){
        cout<<c[i]<<" ";
    }
    cout << endl;
}

int main()
{
    vector<char>  v;
    int size;
    char a;

    cout<<"Input vector size ==> ";
    cin>>size;
    cout<<"Input vector data ==>";
    
    for(int i=0;i<size;i++){
        cin>>a;
        v.push_back(a);
    }
    
    
    // -------------------------------------
    // don't change anything below this line
    // -------------------------------------
    print(v);

	return 0;
}
