#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
#define _size 10001
const int null=-1;
int size;
int q[_size];
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

//insert data in front side //right side
int insertFrontEnd(int n)
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
    else if (front==0)
    {
        front=size-1;
    }
    else
    {
        front--;
    }
    q[front] = n;
    cout << "Pushed in right: " << n << endl;

}
//insert data in rear side //left side
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
    else if (rear==size-1)
    {
        rear=0;
    }
    else
    {
        rear++;
    }
    q[rear]=n;
    cout<<"Pushed in left: "<<n<<endl;
}

//delete data from front//right side
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
        front++;
    }
    cout<<"Popped from right: "<<item<<endl;
}

//delete data from rear //left side

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
        rear--;
    }
    cout<<"Popped from left: "<<item<<endl;
}
int main()
{
//    FastIO;
//    freopen("1212.txt","r",stdin);
//    freopen("1212out.txt","w",stdout);
    int tc,_case=0;
    cin>>tc;
    while(tc--)
    {

        int n,m;
        cin>>n>>m;
        size=n;
        front=null;
        rear=null;
        printf("Case %d:\n",++_case);
        while(m--)
        {
            string s;
            int p;
            cin>>s;
            if(s=="pushLeft" || s=="pushRight")
            {
                cin>>p;

                if(s=="pushLeft")
                {
                    insertRearEnd(p);
                }
                else
                {
                    insertFrontEnd(p);
                }
            }
            else
            {
                if(s=="popLeft")
                {
                    deleteRearEnd();
                }
                else
                {
                    deleteFrontEnd();
                }
            }

        }
    }
    return 0;
}
