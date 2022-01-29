//wrong
#include <bits/stdc++.h>
using namespace std;
#define mx 100000
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
typedef long long ll;
#define mp make_pair
int main()
{
    FastIO;
    ll tc;
    cin >> tc;
    ll caseNo = 0;
    while (tc--)
    {
        cout << "Case " << ++caseNo << ": ";
        map<int, int> mp;
        ll n;
        cin >> n;
        vector<int> frequency(mx);
        for (int i = 0; i < n; i++)
        {
            ll v,l;
            cin>>v>>l;
            frequency[v]++;
            frequency[l]++;
        }
        sort(frequency.begin(),frequency.end(),greater<int>());
        cout<<frequency[0]<<endl;
    }
    return 0;
}
