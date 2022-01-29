#include<iostream>
#include<vector>
using namespace std;

int main(int *argc,char **agrv)
{
    vector<int>simple;
    for(int i=1; i<=10; i++)
    {
        simple.push_back(i*10);
        //        cout<<"inserting ----:"<<simple.back()<<endl;
    }

    cout<<"---------------\n"<<endl;

    simple.erase(simple.begin()+5);

    while(!simple.empty())
    {
//        cout<<"size of vector :"<<simple.size()<<endl;
        cout<<"last element:"<<simple.back()<<endl;
        simple.pop_back();
    }
    cout<<"size :"<<simple.size()<<endl;
    simple.resize(40);
//    simple.assign()
    cout<<"resize :"<<simple.size()<<endl;

    return 0;
}

