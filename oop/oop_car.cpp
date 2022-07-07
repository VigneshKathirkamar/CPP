#include<stdio.h>
#include<iostream>
using namespace std;
class Car
{
    public:
    //Data members
    char *name;
    float speed;
    float weight;
    
        void brake()
        {
            cout<<"Brake applied"<<endl;
        }
        void SlowDown()
        {
            cout<<"Slowing Down"<<endl;
        }
};
int main()
{
    Car ford;
    ford.name = (char*) "Ghost";
    ford.speed = 23.5;
    cout<<"The car name is: "<<ford.name<<endl;
    cout<<"The car is cruising at "<<ford.speed<<endl;
    ford.brake();
    return 0;
}
