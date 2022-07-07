#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int i;
    for (i=1;i<=20;i++)
    {
        if (i%5==0 and i%3==0)
        {
            cout<<"FizzBuzz \n";
        }
        else if (i%3==0)
        {
            cout<<"Fizz \n";
        }
        else if (i%5==0)
        {
            cout<<"Buzz \n";
        }
        else 
        {
            cout<< i << "\n";
        }
    }
    return 0;
}