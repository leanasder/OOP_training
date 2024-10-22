#include <iostream>
#include <cmath>

class Power 
{  
private:
    double a,b;
public:
    Power() {
        a = 0;
        b = 0;
    }

    Power (double p_a, double p_b) : a(p_a), b(p_b) {}

    double getA() {
        return a;
    }

    double getB() {
        return b;
    }

    void set(double p_a, double p_b) {
        a = p_a;
        b = p_b;
    }
    
    double calculate() {
        return pow(a, b);
    }
};

int main()
{
    Power p;
    std::cout <<p.getA() << ' ' << p.getB() << '\n';
    p.set(3, 2);
    std::cout << p.calculate();

    // repeating 06.09.2024
    
}