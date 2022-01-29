#include<bits/stdc++.h>
using namespace std;

#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;
#define n 3
vector<ll>subset;

void search(int k)
{
    cout<<" k value : "<<k<<endl;
    if (k == n+1)
    {
        cout<<"subset: "<<endl;
        for(ll i=0; i<subset.size(); i++)
        {
            cout<<subset[i]<< "  ";
        }
        cout<<endl;
// process subset
    }
    else
    {
// include k in the subset
        subset.push_back(k);
        cout<<"push back: "<<k<<endl;
        search(k+1);
        cout<<"call search: "<<k<<endl;
        subset.pop_back();
        cout<<"pop back: "<<endl;
// don’t include k in the subset
        search(k+1);
        cout<<"call search last: "<<k+1<<endl;
    }
}

int main()
{
    search(1);
//    cout<<"subset:"<<endl;
//    for(ll i=0; i<subset.size(); i++)
//    {
//        cout<<subset[i]<< "  ";
//    }
//    cout<<endl;
    return 0;
}
