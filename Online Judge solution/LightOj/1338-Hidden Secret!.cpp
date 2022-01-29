#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);
typedef long long ll;

int main()
{

    ll tc;
    cin>>tc;
    ll caseNo=0;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    while(tc--)
    {
        cout<<"Case "<<++caseNo<<": ";
        string s1,s2;
        getline(cin,s1);
        getline(cin,s2);

        string t1="",t2="";
//        transform((s1.begin(),s1.end(),s1.end()):: tolower());


        //s1;
        for(int i=0; i<s1.length(); i++)
        {
            if(s1[i]>='A' && s1[i]<='Z')
            {
                t1+=s1[i]+32;
            }
            else if(s1[i]==' ')
            {
                continue;
            }
            else
            {
                t1+=s1[i];
            }
        }
        sort(t1.begin(),t1.end());
        //s2
        for(int i=0; i<s2.length(); i++)
        {
            if(s2[i]>='A' && s2[i]<='Z')
            {
                t2+=s2[i]+32;
            }
            else if(s2[i]==' ')
            {
                continue;
            }
            else
            {
                t2+=s2[i];
            }
        }
        sort(t2.begin(),t2.end());

        if(t1==t2)
        {
            cout<<"Yes"<<endl;
        }
        else
        {
            cout<<"No"<<endl;
        }

    }

    return 0;
}
