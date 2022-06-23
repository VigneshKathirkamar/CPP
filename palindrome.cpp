#include <iostream>
using namespace std;

bool isPalindrome(int x) 
{
    //complete the function
    int reversed_number = 0;
    int remainder;
    int num = x;
    while (x!=0)
    {
        remainder = x%10;
        reversed_number = reversed_number*10 + remainder; 
        // cout<<"reversed_number is"<<reversed_number<<endl;
        x/=10;
    }
    // cout<<"reversed_number-given"<<reversed_number<<"-"<<num<<endl;
    if (reversed_number!=num)
    {
        return false;
    }
    return true;
}

int main() {
    int n;
    cin >>n;
    
    if(isPalindrome(n)) {
        cout <<n<<" is a palindrome"<<endl;
    }
    else {
        cout << n<<" is NOT a palindrome"<<endl;
    }
    return 0;
}