#include <bits/stdc++.h>
using namespace std;
#define FastIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);
typedef long long ll;
#define mx 10000
int main()
{
    vector<vector<int>> vvi;
    /*for (int i = 1; i <= mx; i++)
    {
        int m = i;
        int l = 0;
        while (m != 0)
        {
            int x = (m % 10) * pow(10, l);
            m = m / 10;
            l++;
            if (x != 0)
            {
                vvi[i].push_back(x);
            }
        }
    }*/
    int n;
    int tc;
    cin >> tc;
    while (tc--)
    {
        cin >> n;

        vector<int>ans;
        int m = n;
        int l = 0;
        int cnt=0;
        while (m != 0)
        {
            int x = (m % 10) * lround(pow(10.0, l));
            m = m / 10;
            l++;
            if (x != 0)
            {
                ans.push_back(x);
            }
        }
        cout<<ans.size()<<endl;
        for(int i=0; i<ans.size()-1; i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<ans[ans.size()-1]<<endl;


//        cout << vvi[n].size() << endl;
//        for (int i = 0; i < n; i++)
//        {
//            cout << vvi[n][i] << " ";
//        }
    }
    return 0;
}
