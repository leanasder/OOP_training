#include <iostream>
#include <memory>
using namespace std;

class Date {
private:
    int m_day, m_month, m_year;
public:
    Date () : m_day(01), m_month(10), m_year(2024) {}
    Date(int day, int month, int year) : m_day(day), m_month(month), m_year(year) {}
    friend ostream& operator<<(ostream& out, const Date& date) 
    {
        out << date.m_day << '.' << date.m_month << '.' << date.m_year;
        return out;
    }

    int getDay() const
    {
        return m_day;
    }
    int getMonth() const
    {
        return m_month;
    }

    int getYear() const
    {
        return m_year;
    }
};

void test() 
{
    //shared_ptr<Date> date;
    unique_ptr<Date> date;
    // unique_ptr<Date> today(new Date(14,10,2024));
    unique_ptr<Date> today(new Date(14,10,2024));
    cout << *today << endl;
    date = move(today);
    cout << *date << endl;
    if(today)
        cout << "today in not null" << endl;
    else
        cout << "today is null" <<endl;
    if(date)
        cout << "date is not null" << endl;
    else
        cout << "date is null" << endl;
}

Date& MaxDate(shared_ptr<Date>& date1, shared_ptr<Date>& date2)
{
    //return date1->getYear() < date2->getYear() ? *date1: *date2;
    if(date1-> getYear() < date2-> getYear())
        return *date1;
    else if(date1-> getYear() > date2-> getYear())
        return *date2;
        else if(date1->getMonth() < date2->getMonth())
                return *date1;
            else if(date1->getMonth() > date2->getMonth())
                return *date2;
                else if(date1->getDay() < date2->getDay())
                        return *date1;
                    else if(date1->getDay() > date2->getDay())
                        return *date2;
                        else 
                            return *date1;

}

void swapDates(shared_ptr<Date>& date1, shared_ptr<Date>& date2)
{
    shared_ptr<Date> temp;
    temp = date1;
    date1 = date2; 
    date2 = temp;
}
void test2()
{
    shared_ptr<Date> date1(new Date(10,10,2025));
    shared_ptr<Date> date2(new Date(19,10,2025));
    cout << *date1 << endl;
    cout << *date2 << endl;
    swapDates(date1, date2);
    cout << *date1 << endl;
    cout << *date2 << endl;
    cout << MaxDate(date1, date2);
}

int main()
{
    //test();
    test2();
    
    return 0;
}