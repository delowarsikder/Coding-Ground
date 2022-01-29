#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("word.txt", "r", stdin);
    // freopen("output.txt","w",stdout);
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    int limit = 10;
    string w = "";
    vector<string> vs;
    while (ss >> temp)
    {
        vs.push_back(temp);
    }

    // cout << "all word" << endl;
    // for (auto a : vs)
    // {
    //     cout << a << " ";
    // }
    // cout << endl;

    // printed limit in line
    cout<<"Actual output"<<endl;
    for (int i = 0, j = 0; i < vs.size(); i++)
    {
        w += vs[i] + " ";
        if (w.length() - 1 > limit)
        {
            for (int k = j; k < i; k++)
            {
                cout << vs[k] << " ";
            }
            cout<<endl;
            j = i;
            w="";
            i--;
        }
    }
    if(w.length()!=0){
        cout<<vs[vs.size()-1]<<endl;
    }

    return 0;
}