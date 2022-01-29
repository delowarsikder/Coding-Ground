#include<bits/stdc++.h>
#define MAX(a,b) (a>b?a:b)
#define MIN(a,b) (a<b?a:b)
using namespace std;
typedef long long ll;
int main()
{
    ll n,k;
    cin>>n>>k;
    vector<int> v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    set<int>st;
    int best=0;
    int m=0;
    for(int i=0; i<n; i++)
    {
        while(st.find(v[i])!=st.end()){
            st.erase(v[i-st.size()]);
        }
        st.insert(v[i]);
        if(st.size()>best)
        {
            best=st.size();
        }
        if(best>k){
            break;
        }
    }
    cout<<best<<endl;
    return 0;
}
