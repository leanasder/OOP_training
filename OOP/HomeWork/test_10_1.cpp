#include <iostream>
using namespace std;

class Counter {
public:
    void count() ;
    void count() {};
};

int main()
{
    Counter obj;
    obj.count();
    return 0;
}