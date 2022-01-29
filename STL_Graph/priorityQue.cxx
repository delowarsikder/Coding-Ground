//push pop top operation in priority_queue

#include<iostream>
#include<queue>
#include<limits>
#define LPQ priority_queue<int,vector<int>,greater<int>>
#define PQ priority_queue<int>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
    srand(time(NULL));
    int myarr[]= {10,20,50,10,30};
    PQ first;
    priority_queue<int>second(myarr,myarr+sizeof(myarr)/sizeof(int));
    LPQ third(myarr,myarr+sizeof(myarr)/sizeof(int));
    LPQ sortedQueue;
    cout<<"pushing random number in queue :"<<endl;

    for(int i=0 ; i<10; i++)
    {
        int n=rand()%100;
        cout<<" "<<n;
        first.push(n);
        sortedQueue.push(n);
    }
    cout<<endl;
    cout<<"size of queue:"<<first.size()<<endl;
    cout<<"printed input value of first queue:"<<endl;
    while(!first.empty())
    {
        cout<<" "<<first.top();
        first.pop();
    }
    cout<<endl<<"size after poping :"<<first.size()<<endl;
    cout<<endl;

    cout<<"print value in sorted order lower to up"<<endl;

    while(!sortedQueue.empty())
    {
        cout<<" "<<sortedQueue.top();
        sortedQueue.pop();
    }
    cout<<endl;

    return 0;
}
