#include<iostream>
#include<deque>
#include<list>
#include<queue>
#include<ctime>
#include<cstdlib>
using namespace std;

int main(int* argc,char** argv)
{
    srand(time(NULL));//change random value according to time
    queue<int>q;
    deque<int>dq;
    for(int i=0; i<10; i++)
    {
        int n=rand()%100;

        q.push(n);

    }
    cout<<"print value:"<<endl;
    while(!q.empty())
    {
        cout<<q.front()<<endl;
        q.pop();
    }

    return 0;
}
