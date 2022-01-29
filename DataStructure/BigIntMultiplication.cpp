#include <bits/stdc++.h>
using namespace std;

int main()
{
    string a, b;
    cin >> a >> b;
    // a = "23";
    // b = "19";
    int len_a = a.length();
    int len_b = b.length();
    int _size = 2 * max(len_a, len_b);
    int result[_size] = {0};
    int track = 0;
    int x = 0;
    len_a = len_a - 1;
    len_b = len_b - 1;

    while (len_b >= 0)
    {
        int n = len_a;
        x = track;
        int carry = 0;
        while (n >= 0)
        {
            int a_x = (a[n] - '0');
            int b_x = (b[len_b] - '0');

            int res = a_x * b_x + carry;
            
            result[x] += res % 10;
        
            carry = res / 10;
            carry=carry+result[x] / 10;

            result[x] = result[x] % 10;
            
            x++;
            n--;
        }
        
        while (carry != 0)
        {
            result[x] += carry % 10;
            carry = carry / 10;
            x++;
        }

        // //print 1 step
        // cout << "result step: " << track << endl;
        // for (int i = 0; i < x; i++)
        // {
        //     cout << result[i];
        // }
        // cout << endl;

        track++;
        len_b--;
    }

    cout <<a<<" * "<<b<< " = ";
    for (int i = x - 1; i >= 0; i--)
    {
        cout << result[i];
    }
    cout << endl;

    return 0;
}
