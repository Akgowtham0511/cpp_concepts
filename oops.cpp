#include <iostream>
#include "oop.h"
#include "header.hpp"

hpp_struct h_struct;
using namespace first_space;

class MyClass {
    public:
    // Constructor
    MyClass() {
        std::cout << "Constructor called" << std::endl;
    }

    void callmyname();

    // Other member functions can go here
};

void MyClass::callmyname()
{
    std::cout<<"gowtham kumar"<<std::endl;
}


class MyClass2:public MyClass 
{
public:
    MyClass2() 
    {
        std::cout<<"second destructor called"<<std::endl;
    }
};

class MainClass : public first_space::insideH 
{
    public:
    MainClass()
    {
        std::cout<< "inside main class"<<std::endl;
    }

    // void callmymom() override
    // {
    //     cout << "mommyyyyyyy" << endl;
    // }

    void run_main();
    void callmymom() override;
    void callmyself() override;
};

void MainClass::callmymom()
{
    cout<<"mommyyyyyyy" <<endl;
}

void MainClass::callmyself()
{
    cout<<"calling gowthammmm..........................."<<endl;
    // cout<<"----------------------------"<<endl;
}

void MainClass::run_main()
{
    MainClass a;
    a.callmymom();
    a.callmyself();

    h_struct.v_struct.push_back(10);
    h_struct.v_struct.push_back(12);

    cout<<h_struct.v_struct[0]<<endl;
    cout<<h_struct.v_struct[1]<<endl;
}


int main() {
    // Creating an object of MyClass
    MyClass2 obj; // This line will call the constructor
    obj.callmyname();

    MainClass *main;
    // main.callmymom();
    // main.callmyself();

    first_space::myfunction();

    main->run_main();

    return 0;
}
