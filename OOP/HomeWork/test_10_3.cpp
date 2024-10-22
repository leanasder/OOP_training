#include <iostream>
using namespace std;

class B {
public:
    virtual void msg() {cout << "Class B";}
};

class D : public B {
public:
    virtual void msg() {cout << "class D";}
};

int main() {
    B* var = new D;
    var->msg();

    return 0;
}