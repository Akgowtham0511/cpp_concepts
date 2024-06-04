#include<bits/stdc++.h>
using namespace std;
#include "header.h"
class Robot1:RoboticArm
{
    
    public:
    Robot1(int x,int y) : RoboticArm(x,y){}
    ~Robot1() {};
    void somerandomfunction(void);
    int secondrandomfunction(void);
    void gotopoint(int x,int y) override;

    protected:
    int pro;
};

void Robot1::somerandomfunction()
{
    cout<<"ok inside the some random function"<<endl;
}

int Robot1::secondrandomfunction()
{
    cout<<"inside the second rando function"<<endl;
    return 1;
}

void Robot1::gotopoint(int x,int y)
{
    cout<<"send to waypoint {} {}"<<x<<y<<endl;
    int a = distance(x,y);
    cout<<"the distance is: "<<a<<endl;

    bool done = finishedProcess(x,y);
    cout<<"the bool function is run"<<endl;
}


int main()
{
    Robot1 r1(3,4);
    r1.gotopoint(3,4);
}




