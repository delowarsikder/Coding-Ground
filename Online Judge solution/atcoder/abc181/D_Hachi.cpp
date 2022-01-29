#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll s;
    cin >> s;
    vector<ll> p;
    while (s != 0)
    {
        p.push_back(s % 10);
        s = s / 10;
    }

    for (int i = 0; i < p.size(); i++)
    {
        cout << p[i] << "->";
    }

    do
    {
        for (int i = 0; i < p.size(); i++)
        {
            cout << p[i];
        }
        cout << endl;
    } while (next_permutation(p.begin(), p.end()));

    return 0;
}