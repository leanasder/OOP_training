#include <iostream>
using namespace std;

class A {
    virtual int f(int) {
        return 1;
    }
};

class B: A {
    template <typename T>
    int f(T) {

        return 2;
    }
};

int main() {
    A* pa = new B;
    cout << pa->f(1) << endl;
    delete pa;
    return 0;
}