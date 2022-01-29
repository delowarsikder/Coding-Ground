#include<iostream>
#include<queue>
#include<stdlib.h>

using namespace std;

int print(queue<int>a)
{
    while(!a.empty())
    {
        cout<<a.front()<<endl;
        a.pop();
    }
}

int main()
{
    int p;
    queue<int>q;
    for (int i=0;i<5;i++)
    {
        p=rand()%10;
        q.push(p);
    }
    print(q);

    cout<<"size :"<<q.size()<<endl;


}
