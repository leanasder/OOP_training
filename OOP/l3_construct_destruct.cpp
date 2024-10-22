#include <iostream>
using namespace std;

class Date
{
private:	
    int day;
    int month;
    int year;
public:
    Date()// constructor by default
	: day(1), month(1), year(2000)
    {
    }
    Date(int d, int m, int y) : day(d), month(m), year(y) // constructor by default
    	
    {
    }	
    ~Date()
    {
	cout << "destructor" << endl;
    }
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
    void print()
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
    {
	Date today(9,9,2023);
	today.print();
    }
    Date birthday;
    birthday.print();

    
    return 0;
}

