#include <iostream>
using namespace std;

int del(int queue[10], int &front,int rear, int n);
int add(int queue[10], int &rear, int n, int max);

int main()
{
    int front, rear, n, max;
    front = -1;
    max = 10;
    rear = 5;
    int queue[10] = {1, 8, 3, 7, 5, 6};

    n = 9;
    add(queue, rear, n, max);

    del(queue,front,rear,n);

    for (++front; front <= rear; front++)
    {
        cout << queue[front] << endl;
    }

    return 0;
}

int add(int queue[10], int &rear, int n, int max)
{
    if (rear >= max)
    {
        cout << "the queue is full";
        return 0;
    }
    else
    {
        queue[++rear] = n;
        return 0;
    }
}

int del(int queue[10], int &front,int rear, int n)
{
    if (front == rear)
    {
        cout << "the stack is empty";
        return 0;
    }
    else
    {
        front++;
        return 0;
    }
}
