#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<pair<int,int>>vpii;
    int tc;
    cin>>tc;
    vector<int>vp(tc);
    for(int i=0;i<tc;i++){
        int x;
        cin>>x;
        vp[x-1]=i;
    }
//    cout<<"vector :"<<endl;
    for(auto a: vp){
        cout<<a+1<<endl;
    }
    return 0;
}
