#include<stdio.h>
#include<iostream>
using namespace std;

int BinarySearch(int arr[], int x,int high)
{
    int low= 0;
    int mid= 0;
    while(low<=high)
    {
        mid = (low+high)/2;
        if (arr[mid]==x)
        {
            cout<<"the position is:"<<mid<<endl;
            return mid;
        }
        if (x>arr[mid])
        {
            low = mid+1;
        }
        else
        {
            high = mid-1;
        }
    }
    cout<<"Not found"<<endl;
    return -1;   
}

int main()
{
    int my_arr[]={0,10,20,30,40,50,60,70,80,90,100,111,112};
    int high= (sizeof(my_arr)/sizeof(my_arr[0]))-1;
    BinarySearch(my_arr,0,high);
    BinarySearch(my_arr,20,high);
    BinarySearch(my_arr,111,high);
    return 0;
}