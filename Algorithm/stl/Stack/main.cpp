#include <iostream>
#include<stack>

using namespace std;
stack<int>s;
int show(stack<int>s)
{
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}
int main()
{
    for (int i=0; i<10; i++)
    {
        s.push(i);
    }
    cout<<" size() :"<<s.size()<<endl;
    show(s);
    cout<<" size() :"<<s.size()<<endl;

    stack<int>s1=s;

    while(!s1.empty())
    {
        cout<<s1.top()<<endl;
        s1.pop();
    }

    cout<<" size() :"<<s.size()<<endl;
    return 0;
}
