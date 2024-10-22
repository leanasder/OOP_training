#include <iostream>
using namespace std;

struct A {
    ~A() {
        cout << "A";
    }
};

struct B : public A {
    B() {
        throw 1;
    }
    ~B() {
        cout << "B";
    }
};

int main() 
{
    try {
        B b;
    }
    catch(...) {}

    return 0;
}