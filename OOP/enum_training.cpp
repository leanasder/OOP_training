#include <iostream>
using namespace std;

int main()
{
    enum Sex {male, female, dog, cat, rabbit};
    Sex sex;
    sex = male;
    cout << "enter male or female" << endl;
    int a;
    	cin >> a;
    
switch (a)
{
    case 0:
    cout << "Sex is male" << endl;
    break;

    case 1:
    cout << "Sex is female" << endl;
    break;

    case 3:
    cout << "Sex is cat!" << endl;
    break;

    default:
    cout << " PEAPLE!" << endl;
}
    //cout << sex;

    return 0;
}
