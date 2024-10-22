#include <iostream>
using namespace std;

class A 
{
public:
    virtual int mathFunc(int n = 1) {
	return n + n;
    }
};

class B : public A {
public:
    int mathFunc(int n = 2) {
	return n * n;
    }
};

int main ()
{
    A a, *pa;
    B b;
    pa = &b;
    cout << a.mathFunc(3)
	<< pa->mathFunc(-1)
	<< pa->mathFunc()
	<< b.mathFunc();
}

