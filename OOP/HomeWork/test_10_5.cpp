#include <iostream>
using namespace std;

class A {
public:
    A() {}
    ~A() {}
    void f() {cout << "A::f();" << endl;}
};

class B : virtual public A {
public:
    B() {}
    ~B() {} 
    void f() { cout << "B::f();" << endl;}
};

int main() {
    A* a = new B();
    B* b = dynamic_cast<B*>(a);
    b->f();
    delete a;
    
}