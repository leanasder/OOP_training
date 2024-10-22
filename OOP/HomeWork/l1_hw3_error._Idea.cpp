#include <iostream>
using namespace std;

class Stack_2
{

};


class Stack
{
private:
    int Data;
    Stack_2 * p_Stack;
public:
    Stack()
    {
	p_Stack =new Stack_2;
	Data = 0;
	cout << "Stack()" << endl;
    }
};

int main()
{
    int data;
    Stack A ;
    return 0;
    //06.09.2024
}
	
