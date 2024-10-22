#include <iostream>
using namespace std;

template <class X, class Y> void f(X, Y) {
    cout << "OK" << endl;
}

int main() {
    f(1, 1);
    f<int, int>('c', 1);
    f<string>("str", 1.1);
}