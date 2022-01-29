#include <bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    while (cin >> tc)
    {
        for (int k = 0; k < tc; k++)
        {
            int ans=0;
            int track=0;
            string s;
            cin>>s;
            for(int i=0;i<s.length();i++){
                if(s[i]=='X'){
                    track=0;
                    continue;
                }
                track++;
                ans=ans+track;
            }
            // cout<<"ans: "<<endl;
            cout<<ans<<endl;
        }
    }
}