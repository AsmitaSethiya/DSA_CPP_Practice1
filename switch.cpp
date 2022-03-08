/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int total_amount;
    int h = 0, f = 0, tw = 0, t = 0, o = 0, rem = 0;
    
    cout << "Enter total amount : " << endl;
    cin >> total_amount;
    
    switch(1)
    {
        case 1: 
            h = total_amount / 100;
            rem = total_amount % 100;
            cout << "The number of 100 notes are : " << h << endl;
            
        case 2:
            f = rem / 50;
            rem = rem % 50;
            cout << "The number of 50 notes are : " << f << endl;
            
        case 3:
            tw = rem / 20;
            rem = rem % 20;
            cout << "The number of 20 notes are : " << tw << endl;
      
        case 4:
            o = rem / 1;
            rem = rem % 1;
            cout << "The number of 1 notes are : " << o << endl;
        
    }

    return 0;
}
