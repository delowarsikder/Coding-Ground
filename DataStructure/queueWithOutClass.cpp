#include <bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0), cin.tie(0);
#define size 3
#define null -1
int q[size];
int front = null, rear = null;

bool isFull() //check overflow
{
    if ((front == 0 && rear == size - 1) || (front == rear + 1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool isEmpty() //check underflow
{
    if (front == null)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int enqueue(int n)
{
    if (isFull())
    {
        cout << "Overflow the queue" << endl;
        return INT_MIN;
    }
    if (front == null)
    {
        front = 0;
        rear = 0;
    }
    else if (rear == size)
    {
        rear = rear % size;
    }
    else
    {
        rear++;
    }
    cout << "insert item :" << n << endl;
    q[rear] = n;
}

int dequeue()
{
    if (isEmpty())
    {
        cout << "Underflow queue" << endl;
        return INT_MIN;
    }
    int item = q[front];
    if (front == rear)
    {
        front = null;
        rear = null;
    }
    else if (front == size)
    {
        front = front % size;
    }
    else
    {
        front++;
    }
    return item;
}

int main()
{
    FastIO;
    enqueue(10);
    enqueue(20);
    dequeue();
    cout << front << " " << rear << endl;
    enqueue(30);
    enqueue(40);

    cout << "dequeue item :" << dequeue() << endl;
    cout << "dequeue item :" << dequeue() << endl;
    cout << "dequeue item :" << dequeue() << endl;
    cout << "dequeue item :" << dequeue() << endl;
    cout << "dequeue item :" << dequeue() << endl;
    cout << "dequeue item :" << dequeue() << endl;
    return 0;
}
