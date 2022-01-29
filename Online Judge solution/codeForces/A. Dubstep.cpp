
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);

int main()
{
    string pttn="WUB";
    string s="WUBWEWUBAREWUBWUBTHEWUBCHAMPIONSWUBMYWUBFRIENDWUB";
//    string s="WUBWUBABCWUB";
    cin>>s;
    s="WUB"+s+"WUB";
    string ans="";
    string temp="";
    vector<string>line;
    bool flag=false;
    int j=0;
    int check1=0,check2=0;

    for(int i=0; i<s.length()-3; i++)
    {

        if(s[i]=='W' && s[i+1]=='U'&& s[i+2]=='B')
        {
            i+=2;
            if(temp!="")
            {
                line.push_back(temp);
                temp=" ";
            }
        }
        else
        {
            temp+=s[i];
        }
    }
    line.push_back(temp);
    vector<string>result;
//    cout<<"line size : "<<line.size()<<endl;
    for(auto t:line)
    {
//        cout<<t<<endl;
        if(t==" ")
        {
            continue;
        }
        result.push_back(t);
    }
//    cout<<"size :" <<result.size()<<endl;


    for(int i=0; i<result.size()-1; i++)
    {
        cout<<result[i]<<" ";
    }
    cout<<result[result.size()-1]<<endl;
//    cout<<temp<<endl;

    return 0;
}
