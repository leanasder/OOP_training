#include <iostream>
#include <stdlib.h>
typedef int DataType;
#include "l1_hw3_class_Stack.h" // include declaration of class Stack

int main(void)
{
Stack S;
S.Push(10);
S.Push(3);
int c =34;
S.Push(c);
S.Push(855);
c = S.Pop();
cout << c << endl;
S.Print();
S.ResetStack();
S.Print();
return 0;

//06.09.2024
}

