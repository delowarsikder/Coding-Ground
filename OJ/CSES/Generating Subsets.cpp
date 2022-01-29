#include<bits/stdc++.h>
using namespace std;
vector<int> subset;
int n=3;
void Search(int k)
{
    if (k == n+1)
    {
        cout<<k<<endl;
// process subset
    }
    else
    {
// include k in the subset
        subset.push_back(k);
        Search(k+1);
        subset.pop_back();
// don’t include k in the subset
        Search(k+1);
    }
}

int main()
{
    Search(n);
    return 0;
}
