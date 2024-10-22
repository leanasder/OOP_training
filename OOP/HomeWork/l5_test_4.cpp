#include <iostream>
using namespace std;

class A {
    int j;
public:
    A(int i) : j(i) {}
    void print() {
        cout << sizeof(j) << endl;

    }
};

class B : virtual public A {
public:
    B(int i) : A(i) {}
};

class C : public B {
public:
    C(int i) : B(i) {}
};

int main() {
    //C c(1);
    //c.print();
    B b(1);
    b.print();
    // this code will not compile. 02.10.2024
    return 0;
}