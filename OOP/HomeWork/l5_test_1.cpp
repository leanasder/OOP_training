#include <iostream>
using namespace std;

class B {
public:
    B(char c) {cout << c;}
};

class D {
public:
    B bB, bA, bC;
    D() : bA('a'), bB('b'), bC('c') { }
};

int main() {
    D d;

    return 1;
}