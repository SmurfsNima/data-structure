#include <iostream>
using namespace std;

struct Node
{
    int info;
    Node *next;
};

Node *getnode()
{
    Node *NewNode = new Node;
    NewNode->next = NULL;
    return NewNode;
}

void add(Node *&first, int x)
{
    Node *p = getnode();
    p->info = x;
    p->next = first;
    first = p;
}

void del(Node *&first)
{
    if (first != NULL)
    {
        Node *p = first;
        first = p->next;
        delete p;
    }
}

void process(Node *&first)
{
    Node *p = first;
    while (p != NULL)
    {
        cout << p->info << endl;
        p = p->next;
    }
}

void search(Node *&first, int x)
{
    Node *p = first;
    int counter = 0;
    while (p != NULL)
    {
        if (p->info == x)
        {
            cout << x << " is in " << p << endl;
            return;
        }

        p = p->next;
        counter++;
    }
    cout << "not found";
}

int main()
{
    Node *first = getnode();
    Node *second = getnode();
    Node *third = getnode();

    first->info = 1;
    second->info = 2;
    third->info = 3;

    first->next = second;
    second->next = third;

    add(first, 5);
    add(first, 4);
    del(first);
    process(first);
    search(first, 3);

    return 0;
}
