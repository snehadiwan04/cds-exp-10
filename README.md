# EXPERIMENT-10

## Aim -
To study and implement Pointer Operations (Call by value and Call by reference)

## Apparatus -
Vs code

## Theory -

## Comparison Table between Call By Value and Call By Refernce   

| Feature           | Call By Value                                           | Call By Refernce                                       |
|-------------------|-------------------------------------------------|----------------------------------------------|
| *Definition*    | A function receives a copy of the argument's value, not the original data.<br> Changes made within the function affect only the copy and do not alter the original data. | A function receives a reference (or address) to the original argument, allowing it to modify the actual data.<br> Changes made within the function directly affect the original variable. |
| *Data Passed*          | Copy of the argument's value.         | Address (pointer) to the data. |
| *Function Modification*    | Does not affect original data.| Does not affect original data. |
| *Data Size Efficiencys*        | Less efficient for large data.                          | More efficient for large data. |
| *Safety*    | Safer, as original data remains unchanged.  |Riskier, as original data can be altered.|

## Call By Value -
when a function is called, a copy of the actual argument's value is passed to the function.<br> <br>The function works with this copy, rather than the original data.<br><br> Changes made to the parameter within the function do not affect the original argument outside the function.

### Advantages
*Safety:* Protects the original data from unintended changes.<br>
*Simplicity:* Easier to understand and debug, as the function operates on a copy.

### Disadvantages
*Overhead:* Copying large data structures can be inefficient in terms of both time and memory.<br>
*Limited Modification:* Functions cannot alter the original argument, which may be limiting for certain operations.

## Call By Refernce -
A function receives a reference (or address) to the actual argument rather than a copy of its value.<br><br> This means that the function can directly access and modify the original data stored at that address.<br><br> This method is commonly used in languages like C++.

### Advantages
*Performance:* Efficient for large or complex data types since it avoids the cost of copying data.<br>
*Direct Modifications:* Allows functions to change the argument directly, which is useful for operations like sorting, updating, or modifying objects.

### Disadvantages
*Side Effects:* The original data can be altered unexpectedly, which can lead to bugs or unintended behavior if not managed carefully.<br>
*Debugging Complexity:* Tracking changes to data through references can be more challenging, as changes affect the original data and not just the function's local copy.

## codes-
### 1. *Call By Value* -
```
//sneha diwan
//entc B2
//23070123126
//experiment 10
#include <iostream>
using namespace std;
void swap(int &x, int &y) 
// call by value
{
    int temp = x;
    x = y;
    y = temp;

    // Printing the values inside the swap function
    cout << "Inside swap function: " << endl;
    cout << "Value of x is " << x << endl;
    cout << "Value of y is " << y << endl;
}
int main() 
{
    int a = 5, b = 7;
    swap(a, b);
    return 0;
}
```

### 2. *Call By Reference* -
```
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
```

### 3. *Swapping The Values* -
```
//sneha diwan
//entc B2
//23070123126
//experiment 10
#include<iostream> 
using namespace std; 
void swap(int *x, int *y) 
//swapping the values
{
    int *swap;
    swap=x;
    x=y;
    y=swap;
}

int main() 
{
    int a=4,b=7;
    swap(a,b);
    cout<<"Value of a is: "<<a<<"\n";
    cout<<"Value of b is: "<<b<<"\n";
    return 0;
}
```

## Output -
### 1. *Call By Value* -
![Screenshot 2024-08-22 235724](https://github.com/user-attachments/assets/5598c90a-7bba-4478-ac77-2be970e9ef23)
### 2. *Call By Reference* -


### 3. *Swapping The Values* -



## Conclusion -
