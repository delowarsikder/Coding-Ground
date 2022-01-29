#include<iostream>
#include<utility>
#define pii pair<int,int>
#define ppi pair<pii,int>
#define ppii pair<pii,pii>
#define ff first
#define ss second

using namespace std;

int main(int* argc,char** argv)
{
    pair<int,int>p1;
    pair<int,int>px,py;
    p1=pair<int,int>(6,8);
    px.first=p1.second;
    px.second=p1.first;

//    cout<<"first :"<<px.first<<" > second : "<<px.second<<endl;

//    pair<pair<int,int>,pair<int,int>>p3;
    ppii p3;
    p3=ppii(p1,px);
    p3=make_pair(make_pair(9,10),make_pair(5,6));//make pair assign value in pair
    cout<<p3.ff.ff<<" -> "<<p3.ff.ss<<endl;
    cout<<p3.ss.ff<<" -> "<<p3.ss.ss<<endl;

    pair<double,pair<string,int>>p4;
    p4=make_pair(3.14159,make_pair("pi",5));
    cout<<p4.ss.ff<<" :"<<p4.ff<<endl;
    cout<<"precision :"<<p4.ss.ss<<endl;
    return 0;
}
