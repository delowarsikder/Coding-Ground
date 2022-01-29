#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s;
    int n,tc;
    cin>>n>>tc;
    cin>>s;
    int i,j,k;
    while(tc--)
    {
        cin>>i>>j>>k;
        if(k==0){
                cout<<"s: if :"<<s<<endl;
            sort(s.rbegin()+i,s.rend()+j);
        }else{
            cout<<"s : else : "<<s<<endl;
            sort(s.begin()+i,s.end()+j);
        }
    }
    cout<<s<<endl;
}
