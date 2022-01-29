#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
#define size 3
const int null=-1;

int q[size];
int front,rear;
bool isFull() //check overflow
{
    if ((front == 0 && rear == size-1) || (front == rear + 1))
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
    if (front == null && rear==null)
    {
        return true;
    }
    else
    {
        return false;
    }
}

//insert data in rear side //right side
int insertRearEnd(int n)
{
    if(isFull())
    {
        cout<<"The queue is full"<<endl;
        return 0;
    }
    if (front == null)
    {
        front = 0;
        rear = 0;
    }
    else if (rear == size-1)
    {
        rear = rear % size;
    }
    else
    {
        rear++;
    }
//    cout << "insert item :" << n << endl;
    q[rear] = n;
}
//insert data in front side //left side
int insertFrontEnd(int n)
{
    if(isFull())
    {
        cout<<"The queue is full"<<endl;
        return 0;
    }
    if(front==null)
    {
        front=0;
        rear=0;
    }
    else if (front==0)
    {
        front=size-1;
    }
    else
    {
        front--;
    }
    q[front]=n;
}

//delete data from rear//right side
int deleteRearEnd()
{
    if(isEmpty())
    {
        cout<<"The queue is empty"<<endl;
        return 0;
    }
    int item=q[rear];
    if(front==rear)
    {
        front=null;
        rear=null;
    }
    else if(rear==0)
    {
        rear=size-1;
    }
    else
    {
        rear=rear-1;
    }
    cout<<"remove from rear end :"<<item<<endl;
}

//delete data from front //left side

int deleteFrontEnd()
{
    if(isEmpty())
    {
        cout<<"The queue is empty"<<endl;
        return 0;
    }
    int item=q[front];
    if(front==rear)
    {
        front=null;
        rear=null;
    }
    else if(front==size-1)
    {
        front=0;
    }
    else
    {
        front=front+1;
    }
    cout<<"remove from front :"<<item<<endl;
}
int main()
{
    FastIO;
    insertRearEnd(5);
    insertRearEnd(10);
    deleteRearEnd();
    insertFrontEnd(15);
    deleteFrontEnd();
    return 0;
}
