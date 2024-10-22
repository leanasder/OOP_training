#include <iostream>
#include <string>
using namespace std;

class Shape
{

public:
  virtual double perimeter() = 0;
  virtual double  area() = 0;
  virtual string getName() = 0;
     
};

class Circle : public Shape	
{
private:
    double R;
    string Name;
public:
    Circle(string name) : Name(name)
    {
	R = 0;
	cout << "This is Circle" << endl;

    }
    double perimeter() 
    {
	return 2 * 3.14 * R;
    }
    double area() 
    {
	return 3.14 * R * R;
    }
   void setRadius(double r)
   {
       R = r;
   }
  string  getName() 
  {
      return Name;
  }

};

class Rectangle : public Shape
{
private:
    string Name;
    double Width, Height;
public:
    Rectangle(string name) : Name(name)
    {
	Width = 0;
	Height = 0;
	cout << "This is Rectangle" << endl;
    }
    double perimeter() 
    {
	return (Width + Height) * 2;
    }
    double area() 
    {
	return Width * Height;
    }
    void setWidth(double w)
    {
	Width = w;
    }
    void setHeight(double h)
    {
	Height = h;
    }
    string getName() 
    {
	return Name;
    }

};

void Calculate(Shape* array[], int count)
{
   // cout << <Name_figure> <Perimeter> <Area>
    for(int i = 0;i < count; i++)
    {
	cout << array[i]->getName() << ' ' 
	   << array[i]->perimeter() << ' ' 
	   << array[i]->area() <<  endl;
    }
}



int main()
{
    Circle c("Circle_ohoho");
    cout << c.getName() << endl;
    cout << c.perimeter() << ' ' << c.area() << endl;
    c.setRadius(3);
    cout << c.perimeter() << ' ' << c.area() << endl;

    Circle* pc;
    pc = &c;
    cout << pc->getName() << endl;
    
    Circle& rc = c;
    cout << rc.getName() << endl;

    Rectangle r("I am RECTANLE!");
    cout << r.getName() << endl;
    cout << r.perimeter() << ' ' << r.area() << endl;
    r.setWidth(5);
    r.setHeight(6);
    cout << r.perimeter() << ' ' << r.area() << endl;

    Rectangle* pr;
    pr = &r;

    
    Shape* arr[2];
    arr[0] = pc;
    arr[1] = pr;
   
    Calculate(arr, 2);

    return 0;
}
