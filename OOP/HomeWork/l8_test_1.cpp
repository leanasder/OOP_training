#include <iostream>
using namespace std;

class A {
private:
    int b;
public:
    A() {b = 0;}
    A(A const& a) : b(2) {}
    A& operator=(A& a) { b = 3; return a;}
    void add() {++b;}
    void out() {cout << b << endl;}
    
};

int main() 
{
    A a;
    a.add();
    A b(a);
    b.out();
    a = b; 
    a.out();
    return 0;
}
