#include <iostream>
using namespace std;

struct B {
    void print() {cout << "Does it work?" << endl;}
};

int main() {
    B* obj = NULL;
    obj->print();

    return 0;
}