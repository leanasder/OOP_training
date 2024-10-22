#include <iostream>
using namespace std;

class A {
    public:
	virtual void foo() { cout << "A";}
};

class B : public  A {
    public:
	virtual void foo() {cout << "B";}
};

class C: public virtual A { };
class D: public B, public C { };

int main () {
    D d;
    C &c = d;
    c.foo();
    return 0;
}
// repeating 08.09.2024
