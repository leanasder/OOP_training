#include <iostream>
using namespace std;

class Bar;
class Yak;

class Foo {
    int a;
public:
    Foo() : a(1) {}
    int DoIt(const Bar& bar, const Yak& yak);
};

class Yak {
    int b;
public:
    friend class Foo;
    Yak() : b(2) {}
};

class Bar {
    int c;
public:
    friend class Foo;
    Bar() : c(3) {}
};

int Foo::DoIt(const Bar& bar, const Yak & yak)
{
    return (a*bar.c + yak.b);
}

int main ()
{
    Foo foo;
    cout << foo.DoIt(Bar(), Yak()) << endl;

    return 0;
}