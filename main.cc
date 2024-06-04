#include <bits/stdc++.h>
using namespace std;
#include "header.h"

class Robot1 : public RoboticArm
{
public:
    Robot1(int x,int y):RoboticArm(x,y) {
        cout<<"inside the constructor function"<<x<<y<<endl;
    };
    // void somerandomfunction();
    // int secondrandomfunction();
    // void gotopoint(int x, int y) override;

// protected:
//     int pro;
};

// void Robot1::somerandomfunction()
// {
//     cout << "ok inside the some random function" << endl;
// }

// int Robot1::secondrandomfunction()
// {
//     cout << "inside the second random function" << endl;
//     return 1;
// }

// void Robot1::gotopoint(int x, int y)
// {
//     cout << "send to waypoint " << x << " " << y << endl;
//     float a = distance(x, y);
//     cout << "the distance is: " << a << endl;

//     bool done = finishedProcess(x, y);
//     cout << "the bool function is run: " << done << endl;
// }

int main()
{
    Robot1 r1(3, 4);
    // r1.gotopoint(3, 4);

    return 0;
}
