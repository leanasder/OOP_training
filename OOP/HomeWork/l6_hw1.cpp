#include <iostream>
using namespace std;

template<typename T>
class Pair1 {
private:
    T f1, s1;
public:
    Pair1(T f, T s) : f1(f), s1(s) {}
    T first() const {
        return f1;
    }
    T second() const {
        return s1;
    }
};

int main() {
    Pair1<int> p1(6, 9);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
    const Pair1<double> p2(3.4, 7.8);
    cout << "Pair: " << p2.first() << ' ' << p2.second() << '\n';

    return 0;
}