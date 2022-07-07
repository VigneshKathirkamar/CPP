#include<iostream>
#include<stdio.h>
using namespace std;

int main()
{
    int num=0,rem=0,rev=0;
    cout<<"Enter a number: ";
    cin >> num;
    int temp = num;
    while(num>0)
    {
        rem = num%10;
        // cout<<"Rem is: "<<rem<<endl;
        rev = rev * 10 + rem;
        num = num/10;
        // cout<<"Num is: "<<num<<endl;
    }
    // cout<<"reverse is : "<<rev<<endl;
    if(rev != temp)
    {
        cout<<"The number is not palindrome \n";
    }
    else
    {
        cout<<"The number is a palindrome \n";
    }
    

    return 0;
}