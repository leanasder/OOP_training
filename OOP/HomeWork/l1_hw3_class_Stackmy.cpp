#include <iostream>
const int arr_Capacity = 10;


// Stack on array
class StackArray
{
private:
    int top;
    int stack[arr_Capacity];
public:

    // ctor
    StackArray (void) {
        top = -1;
    }

    // modifiyng Stack
    void push(int x) ;
    int pop();
    void reset();

    // cheking the stack
    bool stackEmpty() const;
    bool stackFull() const;
    void print() const;
    
    
};

// push the element to the stack
void StackArray::push(int x) {
        if (stackFull())
           std::cout << "Error! stack is full!";
        else { 
            ++top;
            stack[top] = x;
        }
}
// pop the element from the stack
int StackArray::pop() {
    if (top != -1) { 
    int temp = stack[top];
    --top;
    }
    else { 
        std::cout << "Error! Stack is empty!" << '\n';
        return -999;
    }
}
// print the stack
void StackArray::print () const {
    if (top != -1) { 
        for (int i= 0; i != top; --i)
            std::cout<< stack[i] << ' ';
        std::cout << '\n';
    }    
}
// stackEmpty function
bool StcArray::stackEmpty() const {
    if (top == -1) 
        return true;
    else 
        return false;
}
// stackFull function
bool StackArray::stackFull() const {
    if (top == arr_Capacity)
        return true;
    else 
        return false;
}
// clear the stack
void StackArray::reset() {
    top = -1;
}

int main () {
    StackArray s;
    s.push(10);
    s.push (9);
    s.push (8);
    s.print();
    // 06.09.2024  
}