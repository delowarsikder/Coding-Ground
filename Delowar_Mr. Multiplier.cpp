#include <bits/stdc++.h>
using namespace std;

bool isDigit(string s)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            return false;
            break;
        }
    }
    return true;
}

vector<map<string,int>> possibleOutcomes(vector<string> s)
{
    vector<map<string,int>>v_mp;
    // parse single string
    for (int i = 0; i < s.size(); i++)
    {

        cout << "Case " << i << " : " << s[i] << " :" << endl;
        string str = s[i];
        map<string, int> mp_si;
        vector<string> arr;
        for (int j = 0; j < str.length(); j++)
        {
            if (str[j] == '\"')
            {
                string val = "";
                j++;

                while (str[j] != '\"' && j < str.length())
                {
                    if (str[j] == ',' || str[j] == '}')
                    {
                        break;
                    }
                    val = val + str[j];
                    j++;
                }
                if (val != "")
                {
                    arr.push_back(val);
                }

                j--;
            }
        }
        int gte = 0, lt = 0, error = 0;
        for (int k = 0; k < arr.size(); k++)
        {
            for (int m = k + 1; m < arr.size(); m++)
            {
                string s1 = arr[k];
                string s2 = arr[m];
                if (isDigit(s1) && isDigit(s2)) // both number
                {
                    double val1 = atof(arr[k].c_str());
                    double val2 = atof(arr[m].c_str());
                    if ((val1 >= 0 && val2 >= 0) || (val1 <= 0 && val2 <= 0))
                    {
                        // greate than equal
                        gte++;
                    }
                    else
                    {
                        // less than zeor
                        lt++;
                    }
                    // cout<<"val 1:"<<val1<<endl;
                    // cout<<"val 2:"<<val2<<endl;
                }
                else
                {
                    error++;
                }
            }
        }

        mp_si["LT Score: "] = lt;
        mp_si["GTE Score: "] = gte;
        mp_si["Syntax error: "] = error;

//        cout << "LT Score: " << lt << endl;
//        cout << "GTE Score: " << gte << endl;
//        cout << "Syntax error: " << error << endl;
        v_mp.push_back(mp_si);
    }
    return v_mp;
}

int main()
{
    freopen("input.txt", "r", stdin);
    int testCase;
    cin >> testCase;
    string s;
    vector<string> str;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    for (int i = 0; i < testCase; i++)
    {
        getline(cin, s);
        str.push_back(s);
    }
    vector<map<string,int>> result= possibleOutcomes(str);
    cout<<"\nresult: "<<endl;
    for(auto v:result)
    {
        for(auto m:v)
        {
            cout<<m.first<<m.second<<endl;
        }
        cout<<endl;
    }


    return 0;
}

/*
4
{"+1.2","-3.3","-10.88"}
{"+1.2","-3y.3","+10.88"}
{"+0","+1.2","-3y.3","-10.88"}
{"+0","-12abcd","+Relisource"}


1.
lt:2,gt:1,e:0
2.
lt:0,gt:1,er:2
3.
lt:1,gt:2,er:3
4.
lt:0,gt:0,er:3

*/
