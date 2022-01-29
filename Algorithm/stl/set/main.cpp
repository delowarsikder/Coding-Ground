#include<iostream>
#include<set>
using namespace std;
int main()
{
//    set<int,greater<int>>s; //reverse up to down
    set<int>s;
    s.insert(4);
    s.insert(2);
    s.insert(3);
    s.insert(2);
    s.insert(7);
    s.insert(5);
    s.insert(8);
    s.insert(5);
    s.insert(3);
//    s.erase(s.begin(),s.find(3));
//s.erase(3);
    auto it=s.begin();
    for(it=s.begin(); it!=s.end(); it++)
    {
        cout<<*it<<endl;
    }
    cout<<"size :"<<s.size()<<endl;
//    cout<<"bound :"<<s.bound()
    return 0;


}
