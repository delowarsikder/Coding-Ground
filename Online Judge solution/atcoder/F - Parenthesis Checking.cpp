#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

bool balanceCheck(string str)
{
    stack<char> stck;
    char x;
    for (int i=0; i<str.length(); i++)
    {
        if (str[i]=='(')
        {
            stck.push(str[i]);
            continue;
        }
        if (stck.empty())
            return false;
        if(str[i]==')')
        {
            stck.pop();
        }
    }
    return (stck.empty());
}

int main()
{
//    cout<<isBalancedExp("()()(()))")<<endl;
//    freopen("input.txt","r",stdin);

    /*
    5 3
    (())(
    2 1 4
    2 1 2
    2 4 5
    */
    ll n,q;
    string s;
    cin>>n>>q;
    cin>>s;
    for(int t=0; t<q; t++)
    {
        ll x,l,r;
        cin>>x>>l>>r;
        if(x==1)
        {
            char temp=s[l-1];
            s[l-1]=s[r-1];
            s[r-1]=temp;
//            swap(s[l-1],s[r-1]);
        }
        else if(x==2)  //check balance parenthesis
        {
            string temp="";
            for(int k=l-1; k<r; k++)
            {
                temp+=s[k];
            }

            if(balanceCheck(temp))
            {
                cout<<"Yes"<<endl;
            }
            else
            {
                cout<<"No"<<endl;
            }
        }
    }

    return 0;
}
