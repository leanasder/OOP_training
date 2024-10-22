#include <iostream>
using namespace std;

class A {
private:
    int n;
public:
    A() {
        cout << "dtor A" << endl;
    }
    ~A() {
        cout << "~A" << endl;
    }
};

class B : public A {
public:
    B() {
        cout << "dtor B" << endl;
    }
    ~B() {
        cout << "~B" << endl;
    }

};

int main() {
    A a;
    B b;
    A* pA;
    B* pB;
// pointer on potomok can be transformed to pointer on basic class
    pA = &b;
    pB = &a;

}