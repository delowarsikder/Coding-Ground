#include<bits/stdc++.h>
using namespace std;

//void foo(int n)
//{
//    if(n>1) {
//        foo(n/2);
//        foo(n/2);
//    }
//    cout<<"*"<<endl;
//}
void test(int a,int p){
    cout<<__func__<<endl;
    a*=2;
    cout<<"test:"<<a<<" "<<p<<endl;
}
void nest(int *a,int p){
    cout<<__func__<<endl;
    test(*a,p);
    p=0;
    return;
    cout<<"nest:"<<*a<<" "<<p<<endl;
}
int main()
{
//    foo(4);
//     int one=10,two=20,sum=0 ,*p;
//     p=&one;
//     one++;
//     (*p)++;
//     cout
cout<<"main"<<endl;
    int p=7,q=2,sum=0,*a;
    a=&p;
    *a=p+q;

    nest(a,p);
    cout<<p<<" "<<q<<endl;

    return 0;
}
