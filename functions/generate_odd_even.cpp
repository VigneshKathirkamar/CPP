#include<stdio.h>
#include<iostream>
using namespace std;

int odd()
{
    int i = 0;
    for(i=1;i<=11;i+=2)
    {
        cout<<i<<endl;
    }
    return 0;
}

int even()
{
    int j = 0;
    for (j=0;j<=11;j+=2)
    {
        cout<<j<<endl;
    }
    return 0;
}

int main()
{
    cout<<"Odd numbers are : "<<endl;
    odd();
    cout<<"Even numbers are: "<<endl;
    even();
    return 0;
}
