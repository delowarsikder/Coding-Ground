#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt","r",stdin);
    int n,q;
    cin>>n>>q;
    vector<vector<int>>res(n);
    int lastAnswer=0;
    int i=0,j=0;
    int idx=0;
    while(q--)
    {
        int w,x,y;

        cin>>w>>x>>y;
        idx=(x^lastAnswer)%n;
        if(w==1)
        {
            res[idx].push_back(y);
        }
        else if(w==2)
        {
            int _size=res[idx].size();
            int key=y%_size;
//            cout<<"size :"<<_size<<endl;
//            cout<<"key: "<<key<<endl;
//            cout<<"idx: "<<idx<<endl;
            lastAnswer=res[idx][key];
            cout<<lastAnswer<<endl;
        }
    }

    return 0;
}
