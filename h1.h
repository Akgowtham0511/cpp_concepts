#ifndef EXAMPLE_H
#define EXAMPLE_H

#include <iostream>

class Base {
public:
    virtual void display() {
        std::cout << "Base class display function" << std::endl;
    }
};

class Derived : public Base {
public:
    void display() override {
        std::cout << "Derived class display function" << std::endl;
    }
};

#endif // EXAMPLE_H
