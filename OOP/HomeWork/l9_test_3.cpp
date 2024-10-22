#include <iostream>
using namespace std;

class A {
public:
    virtual ~A() {}
};

class B: public A {};

int main() 
{
    A* a = new A();
    try {
        B* b = dynamic_cast<B*>(a);
        cout << b;
    }
    catch (...) {}

    return 0;
}