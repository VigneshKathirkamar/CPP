// This program helps to understand recursive function

#include<iostream>
using namespace std;

int fact(int n)
{
    if (n==0)
    {
        return 1;
    }
    // cout<< n*fact(n-1)<<endl;
    return n*fact(n-1);
    
}

int main()
{
    cout<<"Factorial"<<endl;
    cout << fact(5) << endl;
    return 0;
}