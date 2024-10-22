#include <iostream>
using namespace std;

class DivisionByZero : public exception
{
public:
    const char* what()  {
        return "Divizion by zero";
    }
};

template<typename T> 
T div1(T p1, T p2) 
{

    T res;
    try {
    if(p2 == 0)
        throw DivisionByZero();
    else
        res = p1 / p2;
    }
    
    catch(DivisionByZero& dbz)
    {
        cout << dbz.what() << endl;
    }
    return res;
}

int main()
{
    cout << div1(12.9, 0.7);
    return 0;
}