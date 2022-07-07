// Generate random numbers within a given range
// In this case generate random number in range of 1 to 6

#include<iostream>
#include<cstdlib>
using namespace std;

int main()
{
    int num = 10;
    int i;
    for(i=0;i<10;i++)
    {
        cout<<1 +(rand()%6)<<endl;
    }
    return 0;
}
