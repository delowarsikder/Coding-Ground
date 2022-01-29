#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll house,work;
    cin>>house>>work;

    ll current=1;
    ll time=0;
    ll visit;
    for(int i=0;i<work;i++){
        cin>>visit;
        if(visit<current){
            time+=house-current+visit;
        }
        else if(visit>current){
            time+=visit-current;
        }
        current=visit;
    }
//    cout<<"time:"<<endl;
    cout<<time<<endl;

    return 0;
}
