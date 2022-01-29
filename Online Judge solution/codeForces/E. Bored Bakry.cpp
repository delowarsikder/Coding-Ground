//Tle -7 case
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

#define MAX(a,b) (a>b?a:b)
int main()
{
//    freopen("input.txt","r",stdin);
    ll tc;
    cin >> tc;
    ll arr[tc+1];
    for (int i = 0; i < tc; i++)
    {
        cin >> arr[i];
    }
    int best = 0;
    for (int i = 0; i < tc; i++)
    {
        ll cnt = 0;
        ll xor_val = arr[i];
        ll and_val = arr[i];

        for (int j = i + 1; j < tc; j++)
        {
            xor_val = xor_val ^ arr[j];
            and_val = and_val & arr[j];

            if (and_val > xor_val)
            {
                cnt = (j - i + 1);
            }
            best = MAX(best, cnt);
        }
    }
    cout << best << endl;
    return 0;
}
