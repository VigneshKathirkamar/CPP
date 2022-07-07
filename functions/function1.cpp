#include<stdio.h>
#include<iostream>
using namespace std;

int add_two_numbers(int c, int d)
{
    // return d+c;
    cout<<d+c<<endl;
    return c+d;
}

int main()
{
    int a = 7;
    int b = 9;
    add_two_numbers(a,b);
    return 0;
}
