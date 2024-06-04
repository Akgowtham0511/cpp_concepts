#include "h1.h"
using namespace std;
class AnotherClass : public Derived {
public:
    void anotherDisplay() {
        std::cout << "AnotherClass display function" << std::endl;
    }
};

class myclass

int main() {
    AnotherClass ac;
    ac.display(); // Calls Derived's display function
    ac.anotherDisplay(); // Calls AnotherClass's anotherDisplay function

    Base* b = &ac; // Polymorphic behavior
    b->display(); // Calls Derived's display function through a Base pointer

    return 0;
}
