#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;
    ll x[n], y[n];
    for (int i = 0; i < n; i++)
    {
        cin >> x[i] >> y[i];
    }
    // cout<<"value:"<<endl;
    // for(int i=0;i<n;i++){
    //     cout<<a[i]<<" "<<b[i]<<endl;
    // }
    bool flag = false;
    for (int i = 0; i < (n - 2); i++)
    {
        for (int j = 0; j < (n - 2); j++)
        {
            ll s = ((x[i] - x[i + 1]) * (y[i + 1] - y[i + 2])) - ((x[i + 1] - x[i + 2]) - (y[i] - y[i + 1]));
            if (s == 0)
            {
                flag = true;
                break;
            }
        }
        if (flag)
        {
            break;
        }
    }
    
    if (flag)
    {
        cout << "Yes" << endl;
    }
    else
    {
        cout << "No" << endl;
    }
    return 0;
}