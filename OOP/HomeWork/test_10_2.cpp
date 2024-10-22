#include <iostream>
using namespace std;

class A {
    A() {}
    ~A() {}
public:
    void dd() {cout << "DDD";}
};

int main() 
{
    A* a = new A();
    a->dd();
    delete a;

    return 0;
}