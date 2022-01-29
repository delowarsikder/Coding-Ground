#include <bits/stdc++.h>
using namespace std;

void acmTeam(vector<string> topic)
{
    int mx=0;
    int n=topic.size();
    int m=topic[0].length();
    int team=0;
    int cnt=0;
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            cnt=0;
            for(int k=0; k<m; k++)
            {
                if(topic[i][k]=='1'|| topic[j][k]=='1')
                {
                    cnt++;
                }
            }
            mx=max(mx,cnt);

        }
    }

    //team
    for(int i=0; i<n-1; i++)
    {
        for(int j=i+1; j<n; j++)
        {
            cnt=0;
            for(int k=0; k<m; k++)
            {
                if(topic[i][k]=='1'|| topic[j][k]=='1')
                {
                    cnt++;
                }
            }

            if(mx==cnt){
                team++;
            }
        }

    }
//    cout<<"mx: "<<mx<<" Team:"<<team<<endl;
    cout<<mx<<endl<<team<<endl;
}

int main()
{
    freopen("input.txt","r",stdin);
    int n,m;
    cin>>n>>m;
    vector<string>v;
    while(n--)
    {
        string s;
        cin>>s;
        v.push_back(s);
    }
    acmTeam(v);
    return 0;
}
