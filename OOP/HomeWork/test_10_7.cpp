#include <iostream>
using namespace std;

class Base {
public:
    void method1();
protected:
    void method2();
private:
    void method3();
};

class Child : public Base {
protected:
    void method1();
    void method2();
    void method3();
};

int main() {
    Base* base = new Child;
    base->method1();
    base->method2();
    base->method3();
    return 0;
}


