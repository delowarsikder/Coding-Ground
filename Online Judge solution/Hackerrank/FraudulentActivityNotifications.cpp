#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("input.txt", "r", stdin);
    int n, d;
    cin >> n >> d;
    vector<int> expend(n);
    for (int i = 0; i < n; i++)
    {
        cin >> expend[i];
    }

    if (d > n)
    {
        cout << 0 << endl;
        return 0;
    }
    vector<double> days(d);
    // median calculation
    int p, q;
    bool isEven;
    if (d % 2 == 0)
    {
        p = (d / 2);
        q = p - 1;
    }
    else
    {
        p = d / 2;
        q = p;
    }
    int fraud = 0;
    for (int i = 0; i < d; i++)
    {
        days[i] = expend[i];
    }
    sort(days.begin(), days.end());
    double med = 0;
    for (int i = d; i < n; i++)
    {
        med = (days[p] + days[q]) / 2;
        // cout << "med :" << med << endl;
        if ((med * 2) <= static_cast<double>(expend[i]))
        {
            fraud++;
        }
        // erase first value from days array
        vector<double>::iterator it;
        it = find(days.begin(), days.end(), expend[i - d]);
        int pos = it - days.begin();
        days.erase(days.begin() + pos);
        // insert next trailling element
        // print days size;
        // cout << "days size : " << days.size() << endl;
        days.push_back(expend[i]);
        // cout << "days size : " << days.size() << endl;
        sort(days.begin(), days.end());
    }
    cout << fraud << endl;

    return 0;
}