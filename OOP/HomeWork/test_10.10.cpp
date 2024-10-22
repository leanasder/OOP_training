#include <iostream>
using namespace std;

template<class T> void f(T a, T b);
template<> void f(bool a, bool b);
template<> void f<bool>(bool a, bool b);
template<> void f<>(bool a, bool b);

int main()
{
    return 0;
}