#include <bits/stdc++.h>
using namespace std;

int print12n(int x)
{
    if (x >= 0)
    {
        return print12n(x - 1);
        cout<<x<<endl;
    }
    
}

int fact(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    cout << "fact " << n << endl;
    return n * fact(n - 1);
}

int fib(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n = 5;
    // cout << "factorial : " << fact(n) << endl;
    cout << "print 1 to n" << endl;
    cout << print12n(n) << endl;

    // cout << "fibonacci" << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     cout << fib(i) << endl;
    // }

    return 0;
}