//sneha diwan
//entc B2
//23070123126
//experiment 10
#include <iostream>
using namespace std;
void swap(int &x, int &y) 
//call by reference
{
    int num = x;
    x = y;
    y = num;
}
int main() 
{
    int a = 5, b = 7;
    swap(a, b);  // Pass by reference
    cout << "Value of a is " << a << endl;
    cout << "Value of b is " << b << endl;
    return 0;
}
/*
Output 
 
Value of x is 7
Value of y is 5
 


=== Code Execution Successful ===


*/
