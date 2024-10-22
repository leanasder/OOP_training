#include <iostream>
using namespace std;

struct Date
{
	int day;
	int month;
	int year;
};

void printDate(Date date)
{
    cout << date.day << "." << date.month << "." << date.year << endl;
}
int main()
{
    Date today;

    today.day = 19;
    today.month = 11;
    today.year = 2023;

    Date birthday;

    printDate(today);
    printDate(birthday);

    return 0;
}

