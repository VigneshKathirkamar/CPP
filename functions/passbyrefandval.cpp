// This program demostrates "pass by value" and "pass by reference"

// By default, arguments in C++ are passed by value.
// When passed by value, a copy of the argument is passed to the function. 

// Pass-by-reference copies an argument's address into the formal parameter. Inside the function, 
// the address is used to access the actual argument used in the call. This means that changes made 
// to the parameter affect the argument.To pass the value by reference, argument pointers are 
// passed to the functions just like any other value. 

#include<iostream>
using namespace std;

void pass_by_ref(int *x)
{
    *x = 100;
}

void pass_by_val(int x)
{
    x = 100;
}
int main()
{
    int var = 20;
    pass_by_val(var);
    cout<<"The content passed by value is: "<<var<<endl;
    pass_by_ref(&var);
    cout<<"The content passed by reference is: "<<var<<endl;
    return 0;
}