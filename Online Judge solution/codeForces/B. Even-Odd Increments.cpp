#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isEven(ll val)
{
    if (val & 1)
    {
        return false;
    }
    else
    {
        return true;
    }
}

int main()
{
  // freopen("input.txt","r",stdin);
    ll tc, n, q;
    cin >> tc;
    while (tc--)
    {
        ll type, val;
        cin >> n >> q;
        vector<ll> arr(n);
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        while (q--)
        {
            ll result=0;
            cin >> type >> val;
            for (int i = 0; i < n; i++)
            {
                if (type == 0)
                {
                    if (isEven(arr[i]))
                    {
                        arr[i]+=val;
                    }
                }
                else if(type==1)
                {
                    if(!isEven(arr[i]))
                    {
                        arr[i]+=val;
                    }
                }
                result+=arr[i];
            }
            cout<<result<<endl;
        }
    }

    return 0;
}
