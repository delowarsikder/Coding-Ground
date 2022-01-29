#include <bits/stdc++.h>
using namespace std;

int main()
{
    freopen("pascal.txt", "r", stdin);
    string line;
    getline(cin, line);
    vector<string> word;
    string temp = "";
    cout << "getting input:" << line << endl;

    for (int i = 0; i < line.length(); i++)
    {
        if (line[i] != 'r')
        {
            temp += line[i];
            continue;
        }
        i++;
        word.push_back(temp + '\n');
        temp = "";
    }

    if (line[line.length() - 2] != 'r')
    {
        word.push_back(temp+'\n');
    }
    else
    {
        word.push_back(temp);
    }
    cout << "reading input" << endl;
    int limit = 0;
    // cout<<"limit: "<<limit<<endl;
    for (int i = 0; i < word.size(); i++)
    {
        cout << word[i];
        int val = word[i].size();
        limit = max(limit, val);
    }
    // center align
    cout << "Center alignment :" << endl;
    string centerAlignText = "";
    for (int i = 0; i < word.size(); i++)
    {
        int padding = (limit - word[i].size()) / 2;
        string temp = word[i];
        for (int k = 0; k < padding; k++)
        {
            temp = ' ' + temp;
        }
       centerAlignText+= temp + '\n';
    }
    cout << centerAlignText;
    cout << "Right alignment :" << endl;
    string rightAlignText = "";
    for (int i = 0; i < word.size(); i++)
    {
        int padding = (limit - word[i].size());
        string temp = word[i];
        for (int k = 0; k < padding; k++)
        {
            temp = ' ' + temp;
        }
       rightAlignText+= temp + '\n';
    }
    cout << rightAlignText;


    return 0;
}