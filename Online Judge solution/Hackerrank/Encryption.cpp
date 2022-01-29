#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

void encryption(string s)
{
    ll len=0;
    string line="";
    for(size_t i=0; i<s.length(); i++)
    {
        if(s[i]!=' ')
        {
            line+=s[i];
        }
    }
    ll r,c;
    len=line.length();
    r=sqrt(static_cast<double>(len));
    c=ceil(sqrt(static_cast<double>(len)));
    if(r*c<len)
    {
        if(r<c)
        {
            r++;
        }
        else
        {
            c++;
        }
    }

    // print line;
    vector<string>ans;
    for(size_t i=0; i<len; i+=c)
    {
        string temp="";
        for(size_t j=i; j<i+c; j++)
            if((line[j]>='a' && line[j]<='z') || (line[j]>='A' && line[j]<='Z'))
            {
                temp+=line[j];
            }
            if(j>=len)
            {
                break;
            }

        }
        ans.push_back(temp);
    }
    cout<<"print intermediate:"<<endl;
    for(auto a:ans)
    {
        cout<<a<<endl;
    }

    cout<<"final stage:"<<endl;
    vector<string>result;
    ll _size=ans.size();
    for(int i=0; i<c; i++)
    {
        string temp="";
        for(int j=0; j<_size; j++)
        {
            string s=ans[j];
            if(s[i]!=' ')
            {
                temp+=s[i];
            }
            cout<<"temp:"<<temp<<endl;
        }
        result.push_back(temp);
    }
//    cout<<"actual result:"<<endl;
    for(int i=0; i<result.size()-1; i++)
    {
        cout<<result[i]<<" ";

    }
    cout<<result[result.size()-1]<<endl;

//    return "";
}

int main()
{
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    string s;
    while(getline(cin, s))
    {
        encryption(s);

    }

//    string result =
//    encryption(s);

//    cout<<result<<endl;

    return 0;
}
