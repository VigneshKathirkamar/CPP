#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int n=0, divisor=2;
    cout<<"Enter a number:"<<endl;
    cin>>n;
    if (n==1 or n==0)
    {
        cout<<"Neither prime nor composite \n";
        return 0;
    }
    while(divisor<=(n/2))
    {
        if(n%divisor==0)
        {
            cout<<"Not Prime \n";
            cout<<"Because the number is divisble by: "<<divisor<<"\n";
            return 0;
        }
        divisor+=1;      
    }
    cout<<"Prime number \n";

}