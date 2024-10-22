#include <iostream>
using namespace std;

class Person
{
protected:
    const char* Name;
    int Age, Weight;
    enum tSex {female, male};
    tSex Sex;

public:
    // constructor with parameters
    Person (const char* name, unsigned p_sex, int age, int weight) : Name(name) , Age(age), Weight(weight)
    {
	cout << "Person" << endl;
	switch (p_sex)
	{
	    case 0:
	    Sex = female;
	    break;

	    case 1:
	    Sex = male;
	    break;
	}
    }
    void setName (const char* p_name)
    {
	Name = p_name;
    }
    void setAge(int p_age)
    {
	Age = p_age;
    }

    void setWeight(int p_weight)
    {
	Weight = p_weight;
    }
    
};
class Student : public Person

{
private:
    int YearStudy;
    
public:
    // constructor with parameters;
    Student (const char* name, unsigned p_sex , int age, int weight,int p_yearStudy) :  Person(name, p_sex, age, weight), YearStudy(p_yearStudy)
    {
	cout << "Student" << endl;
    }
    void setYear(int p_yearStudy)
    {
	YearStudy = p_yearStudy;

    }
    void increaseYear()
    {
	++YearStudy;

    }
    void print() const
    {
	cout << Name << " " ;
	switch (Sex)
	{
	    case 0:
	   cout  << "female" << " ";
	    break;

	    case 1:
	    cout << "male" << " ";
	    break;
	}	
       	cout << Age << " " << Weight << " " << YearStudy << endl;
    } 
};
int main()
{
    Student Nesterov("Andrey",1 , 35, 75, 2021);
    Nesterov.print();
    Nesterov.setYear(2023);
    Nesterov.print();
    return 0;
}

