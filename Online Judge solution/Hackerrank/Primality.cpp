#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define mx 1000000
//
//5
//2
//7
//1982
//14582734
//9891

bool mark[mx];

void seive(int n)
{
    for (int i = 3; i * i < mx; i = i + 2)
    {
        if (mark[i] == false)
        {
            for (int j = i * i; j <= n; j += i + i)
            {
                mark[j] = true;
            }
        }
    }
}

bool prime(ll n)
{
    bool flag = true;

    if (n < 2)
    {
        return false;
    }
    else if (n == 2)
    {
        return true;
    }
    else if (n % 2 == 0)
    {
        return false;
    }
    else
    {
        for (int i = 3; i * i <= n; i = i + 2)
        {
            if (n % i == 0)
            {
                flag = false;
                break;
            }
            else
            {
                flag = true;
            }
        }
        return flag;
    }
}

int main()
{
    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        if (prime(n))
        {
            cout << "Prime" << endl;
        }
        else
        {
            cout << "Not prime" << endl;
        }
    }
    return 0;
}
