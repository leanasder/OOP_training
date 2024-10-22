#include <iostream>
using namespace std;

class endll {
public:
    endll() {}
    friend ostream& operator<<(ostream& out, const endll& e)
    {
        out << '\n' << '\n' << flush;
        return out;
    }

};

int main()
{   
    endll endll;
    string s("ohoho rastet podsulnuh");
    cout << s << endll;
    cout << "hello";


    return 0;
}