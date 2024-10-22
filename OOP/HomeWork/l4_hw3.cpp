#include <iostream>
using namespace std;

class Fraction {
private:
    int up;
    int down;
public:
    Fraction () {
        up = 0;
        down = 1;
    }
    Fraction (int p_up, int p_down) {
        up = p_up;
        if(p_down != 0)
            down = p_down;
        else
            cout << "Wrong devider. Its = 0";
    }
    Fraction operator+(const Fraction& operand2) {
        return Fraction(up*operand2.down + down * operand2.up, down * operand2.down);
    }
    Fraction operator-(const Fraction& operand2) {
        return Fraction(up*operand2.down - down * operand2.up, down * operand2.down);
    }
    Fraction operator*(const Fraction& operand2) {
        return Fraction(up * operand2.up, down * operand2.down);
    }
    Fraction operator/(const Fraction& operand2) {
        return Fraction(up * operand2.down, down * operand2.up);
    }
    //return double value of fraction
    double toDouble() {
        return (double) up/down;
    }
    int getDown() {
        return down;
    }
    int getUp() {
        return up;
    }

    // // overloading operator-
    // Fraction operator-(Fraction& f) {
    //     return Fraction(-f.getUp(), f.getDown() );

    // }

    Fraction operator=(Fraction& f) {
        up = f.up;
        down = f.down;
        return *this;
    }
    //
    Fraction operator-() {
        up = -up;
        return *this;
    }
    //print up and down
    void printF() {
        cout << "up = " << up << " down = " << down << endl;
    }

    void printF(const Fraction& f) {
        cout << "up = " << f.up << " down = " << f.down << endl;
    }

    bool operator==(const Fraction& f) {
        return up == f.up && down == f.down;

    }
    bool operator!=(const Fraction& f) {
        return up != f.up || down != f.down;
    }
    bool operator>(Fraction& f) {
        return toDouble() > f.toDouble();
    }
    bool operator>=(Fraction& f) {
        return toDouble() >= f.toDouble();
    }
    bool operator<(Fraction& f) {
        return toDouble() < f.toDouble();
    }
    bool operator<=(Fraction& f) {
        return toDouble() <= f.toDouble();
    }
};
int main() {

    Fraction f(4, 9);
    //Fraction A(1, 1);
    Fraction A = f;
    //Fraction f2(4,0);
    A.printF();
    A.printF(-A);

    
    //A = -A;

    return 0;
}