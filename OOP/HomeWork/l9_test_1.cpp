#include <iostream>
using namespace std;

int main()
{
    char x;
    try {
        try {
            throw x;
        }
        catch(int) { cout << "catch(int)";}
    }
    catch(char a) { cout << "catch(char)";}

    return 0;
}