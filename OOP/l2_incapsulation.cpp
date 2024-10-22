#include <iostream>
using namespace std;

class Date
{
private:	
    int day;
    int month;
    int year;
public:
    int getDay(){
	return day;
    }
    int getMonth(){
	return month;
    }
    int getYear(){
	return year;
    }
    void setDay(int d){
	day = d;
    }
    void setMonth(int m){
	month = m;
    }
    void setYear(int y){
	year = y;
    }
    void printDate()
    {
        cout << day << "." << month << "." << year << endl;
    }
    void setData(int d, int m, int y)
    {
	day = d;
	month = m;
	year = y;
    }
};

int main()
{
    Date today;

    today.setData(9,9,2023);
    today.setDay(19);
    today.printDate();
    
    return 0;
}

