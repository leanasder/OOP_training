#include <iostream>
using namespace std;

class B {
    virtual void f() {}
};

class V {
    virtual void g() {}
};

class X {

};

class D: public B, virtual public V, virtual public X {

};

int main() 
{
    D d;

    B* pb = &d;
    D* p1 = (D*) pb;
    D* p2 = dynamic_cast<D*> (pb);

    V* pv = &d;
    D* p3 = (D*) pv;
    D* p4 = dynamic_cast<D*> (pv);

    X* px = &d;
    D* p5 = (D*)px;
    D* p6 = dynamic_cast<D*> (px);

    return 0;
}