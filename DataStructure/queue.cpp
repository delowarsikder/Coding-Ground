#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0),cin.tie(0);
#define null -1
#define endl '\n'
//using class
class Queue
{
    int front,rear,size;
    int* que;//our queue container
public:
    Queue(int n)
    {
        front =null;
        rear=null;
        size=n;
        que=new int[n];
//        que=new int[(n * sizeof(int))];
        memset(que,-1,n);
    }

    bool isFull();
    bool isEmpty();
    int dequeue();
    int enqueue(int);
    int fr()
    {
        cout<<"front item :"<<que[front]<<endl;
    }
    ~Queue()
    {
        delete[] que;
    }
};

bool Queue::isFull() //check overflow
{
    if((front==0 && rear==size-1) || (front == rear+1))
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Queue::isEmpty()//check underflow
{
    if(front==null)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int Queue::enqueue(int n)
{
    if(isFull())
    {
        cout<<"Overflow the queue"<<endl;
        return 0;
    }
    if(front==null)
    {
        front =0;
        rear=0;
    }
    else if (rear==size)
    {
        rear=rear%size;
    }
    else
    {
        rear++;
    }
    que[rear]=n;
    cout<<"insert item :"<<que[rear]<<endl;
}

int Queue::dequeue()
{
    if(isEmpty())
    {
        cout<<"Underflow queue"<<endl;
        return 0;
    }
    int item=que[front];
    if(front==rear)
    {
        front =null;
        rear=null;
    }
    else if(front == size)
    {
        front =front%size;
    }
    else
    {
        front++;
    }
    cout<<"dequeue item :"<<item<<endl;
//    return item;
}

int main()
{
    FastIO;
    Queue Q(20);

    Q.enqueue(10);
    Q.enqueue(20);
    Q.enqueue(30);
    Q.enqueue(60);
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
    Q.dequeue();
//    Q.dequeue();
//    Q.dequeue();
    return 0;
}
