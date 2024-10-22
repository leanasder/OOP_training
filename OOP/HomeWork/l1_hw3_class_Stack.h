#include <iostream>
using namespace std;
const int MaxStackSize = 10;



class Stack
{
    private:
        //closed members. array of stack and top
        DataType stacklist[MaxStackSize];
        int top;
    public:
        //ctor; inicialization top
        Stack (void);

        // operations of modifying stack
        void Push (const DataType& item);
        DataType Pop (void);
        void ResetStack(void);

        //access to stack
        DataType Peek (void) const;

        //methods of cheking stack
        int StackEmpty(void) const;
        int StackFull(void) const;
        void Print() const;
};
//inicialisation top of stack
Stack::Stack (void) : top(-1)
{
}
void Stack::Push (const DataType& item)
{
    if (top == MaxStackSize-1)
    {
        cerr << "Stack owerflow!" << endl;
        exit(1);
    }
    top++;
    stacklist[top] = item;
}

DataType Stack::Pop (void)
{
    DataType temp;
    if (top == -1)
    {
        cerr << "Try access to empty stack!" << endl;
       exit(1);
    }
    temp = stacklist[top];
    top--;
    return temp;
}
// return data from top of stack
DataType Stack::Peek (void) const
{
    //if stack is empty, programm is terminated
    if (top == -1)
    {
        cerr << "Try acces to empty stack!" << endl;
        exit(1);
    }
    return stacklist[top];
}
//stack is tested is it empty?
int Stack::StackEmpty(void) const
{
    //return logical top == -1
    return top == -1;
}
// stack is tested is it full?
int Stack::StackFull(void) const
{
    return top == MaxStackSize - 1;
}
//to clear stack
void Stack::ResetStack(void)
{
    top = -1;
}
//This method print all elements of stack
void Stack:: Print() const
{
    if(StackEmpty())
       cout << "Stack is empty!" << endl;
    else    
    { 
	cout << "( ";
	for( int i = 0; i <= top; i++)
	cout << stacklist[i] << ' ';
	cout << " )";
    }
}
