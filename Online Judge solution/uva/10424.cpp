#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    string n1, n2;
    // freopen("input.txt",; "r", stdin);
    // freopen("output.txt", "w", stdout);
    while (getline(cin, n1))
    {
        getline(cin, n2);
        ll sum1 = 0, sum2 = 0;
        // name 1
        for (int i = 0; i < n1.length(); i++)
        {
            if (n1[i] >= 'a' && n1[i] <= 'z')
            {
                sum1 += n1[i] - 'a' + 1;
            }
            else if (n1[i] >= 'A' && n1[i] <= 'Z')
            {
                sum1 += n1[i] - 'A' + 1;
            }
        }
        // name 2
        for (int i = 0; i < n2.length(); i++)
        {
            if (n2[i] >= 'a' && n2[i] <= 'z')
            {
                sum2 += n2[i] - 'a' + 1;
            }
            else if (n2[i] >= 'A' && n2[i] <= 'Z')
            {
                sum2 += n2[i] - 'A' + 1;
            }
        }
        // find ratio:
        int new_sum1 = 0, new_sum2 = 0;

        while (sum1 > 0 || new_sum1 > 9)
        {
            if (sum1 == 0)
            {
                sum1 = new_sum1;
                new_sum1 = 0;
            }
            new_sum1 += sum1 % 10;
            sum1 = sum1 / 10;
        }
        while (sum2 > 0 || new_sum2 > 9)
        {
            if (sum2 == 0)
            {
                sum2 = new_sum2;
                new_sum2 = 0;
            }
            new_sum2 += sum2 % 10;
            sum2 = sum2 / 10;
        }
        // cout << "new sum 1: " << new_sum1 << endl;
        // cout << new_sum1 / new_sum2 << endl;
        double ans =min(double (new_sum1),double(new_sum2))/max(double(new_sum1),double(new_sum2));
        cout << setprecision(2) << fixed << ans * 100 << " %" << endl;
    }
    return 0;
}