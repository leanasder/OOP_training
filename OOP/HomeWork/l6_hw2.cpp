#include <iostream>
using namespace std;

template<typename T1, typename T2>
class Pair2 {
private:
    T1 f1;
    T2 s1;
public:
    Pair2(T1 f, T2 s) : f1(f), s1(s) {}
    T1 first() const {
        return f1;
    }
    T2 second() const {
        return s1;
    }
};
// Chastichnaya specialization
template <typename U> 
class Pair2<string, U> {
private:
    string f1;
    U s1;
public:
    Pair2(string f, U s) : f1(f), s1(s) {}
    string first() const {
        return f1;
    }
    U secind() const {
        return s1;
    }

};

int main()
{
    Pair2<int, double> p1(6, 7.8);
    cout << "Pair: " << p1.first() << ' ' << p1.second() << '\n';
    const Pair2<double, int> p2(3.4, 5);
    cout << "pair: " << p2.first() << ' ' << p2.second() << '\n';

    return 0;
}