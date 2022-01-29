#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool cmp(pair<int, string> &a, pair<int, string> &b)
{
    return a.first > b.first;
}

int main()
{
    // freopen("input.txt", "r", stdin);
    ll tc;
    while (cin >> tc)
    {
        ll _case = 0;
        for (int i = 0; i < tc; i++)
        {
            vector<pair<int, string>> vpii, result;
            for (int j = 0; j < 10; j++)
            {
                string s;
                int score;
                cin >> s >> score;
                vpii.push_back(make_pair(score, s));
                result.push_back(make_pair(score, s));
            }

            sort(vpii.begin(), vpii.end(), cmp);
            ll best_score = vpii[0].first;
            // cout << "best: " << best_score << endl;
            cout << "Case #" << ++_case << ":" << endl;
            for (int k = 0; k < result.size(); k++)
            {
                if (best_score == result[k].first)
                {
                    cout << result[k].second << endl;
                }
            }
        }
    }
    return 0;
}