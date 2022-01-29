#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5, b = 10;
    int i = 10;
    int j = 10;
    int k = 10;
    int l = 10;

    //how to work these
    i = ++i + i++; //
    j = j++ + ++j;
    k = ++k + ++k;
    l = l++ + l++;

    cout << "value of i: " << i << endl;
    cout << "value of j: " << j << endl;
    cout << "value of k: " << k << endl;
    cout << "value of l: " << l << endl;

    if (a++ > 5 && ++b > 10)
    {
        cout << "if:";
        cout << a << "--" << b << endl;
    }
    else
    {
        cout << "else:";
        cout << a << "--" << b << endl;
    }
    return 0;
}