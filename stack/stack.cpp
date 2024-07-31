#include <iostream>
using namespace std;

int push(int stack[5], int &top, int n, int max)
{
    if (top >= --max)
    {
        cout << "stack is full" << endl;
        return 1;
    }
    else
    {
        top++;
        stack[top] = n;
        return 0;
    }
}

int pop(int stack[5], int& top, int max)
{
    if (top == -1)
    {
        cout << "stack is empty" << endl;
        return 0;
    }
    else
    {
        top--;
        return 0;
    }
    
}
int main()
{
    int max, n, top;
    max = 5;
    top = 2;
    int stack[max] = {1, 2, 3};

    n = 4;
    push(stack, top, n, max);
    n = 7;
    push(stack, top, n, max);

    pop(stack,top,max);
    pop(stack,top,max);

    for (int i = 0; i <= top; i++)
    {
        cout << stack[i];
    }
    return 0;
}


