#include<stdio.h>
#include<iostream>
using namespace std;

int main()
{
    int t1=0, t2=1, count=0, sum=0;
    int n;
    cout<<"Enter a number \n";
    cin>>n;
    cout<<"The entered number is: "<<n<<endl;
    if (n==0)
    {
        cout<<"Fibonacci of 0 is: 0"<<endl;
        return 0;
    }
    cout<<t1<<endl;
    cout<<t2<<endl;
    while(count<n-2)
    {
        sum = t1+t2;
        cout<<sum<<endl;
        count+=1;
        t1 = t2;
        t2 = sum;
    }
    return 0;
}