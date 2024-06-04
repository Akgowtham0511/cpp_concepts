#include <iostream>
using namespace std;
#include<bits/stdc++.h>
namespace first_space
{
    void myfunction()
    {
        cout<<"i am calling from the first function....."<<endl;
    }


class insideH
{
    public:
    insideH()
    {
        cout<<"inside the .h file constructor"<<endl;
    }

    virtual void callmymom() = 0;
    virtual void callmyself() = 0;
};

}
