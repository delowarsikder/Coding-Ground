#include<iostream>
#include<queue>
#include<stdlib.h>
#define N '\n'
using namespace std;


int print(priority_queue<int,vector<int>,greater<int>>pq)
{
    priority_queue<int,vector<int>,greater<int>>q=pq;
    while(!q.empty())
    {
        cout<<q.top()<<N;
        q.pop();
    }
}


struct compare
{
    bool operator()(const &left,const &right)
    {
        return left<right;
    }
};

int print1(priority_queue<int,vector<int>,compare>pq)
{
    priority_queue<int,vector<int>,compare>q=pq;
    while(!q.empty())
    {
        cout<<q.top()<<N;
        q.pop();
    }
}

int main()
{
    int p;

    priority_queue<int,vector<int>,greater<int>>pq1;

    priority_queue<int,vector<int>,compare>pq;

    for (int i=0; i<5; i++)
    {
        p=rand()%10;
        pq.push(p);
        pq1.push(p);
    }

    cout<<"Decending :"<<N;
    print1(pq);
    cout<<"Acending :"<<N;
    print(pq1);

//    cout<<"Size :"<<pq.size()<<N;
//    pq.pop();
//    print(pq);
}
