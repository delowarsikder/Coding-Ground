///ac
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

#define FastIO  ios_base::sync_with_stdio(false); cin.tie(0);

string webLink[101];
int main()
{
    FastIO;
    freopen("input_1113.txt","r",stdin);
//    freopen("output.txt","w",stdout);

    int  caseno = 0, cases;
    cin>>cases;
    while( cases-- )
    {
        printf("Case %d:\n",++caseno);
        string page;
        int track=0,index=0;
        string line="";
        string url="";
        webLink[track]="http://www.lightoj.com/";
        while(cin>>line)
        {
            if(line=="QUIT")
            {
                break;
            }
            else if(line=="VISIT")
            {
                cin>>url;
                webLink[++track]=url;
                cout<<url<<endl;
                index=track;
            }
            else if(line=="BACK")
            {
                if(track-1<0)
                {
                    cout<<"Ignored"<<endl;
                    continue;
                }
                else
                {
                    cout<<webLink[--track]<<endl;
                }
            }
            else if(line=="FORWARD")
            {
                if(track+1>index)
                {
                    cout<<"Ignored"<<endl;
                    continue;
                }
                else
                {
                    cout<<webLink[++track]<<endl;
                }
            }
        }

    }
    return 0;
}


///tle
/*#include<bits/stdc++.h>
using namespace std;
string webLink[101];
int main()
{
    int  caseno = 0, cases;
    cin>>cases;
    while( cases-- )
    {
        printf("Case %d:\n",++caseno);
        string page;
        int track=0,index=0;
        string line="";
        string url="";
        webLink[track]="http://www.lightoj.com/";
        cin.ignore(numeric_limits<streamsize>::max(),'\n');
        while(line!="QUIT")
        {
            cin.ignore(numeric_limits<streamsize>::max(),'\n');
            getline(cin,page);
            stringstream sin(page);
            sin>>line;
            if(line=="VISIT")
            {
                sin>>url;
                webLink[++track]=url;
                cout<<url<<endl;
                index=track;
            }
            else if(line=="BACK")
            {
                if(track-1<0)
                {
                    cout<<"Ignored"<<endl;
                    continue;
                }
                else
                {
                    cout<<webLink[--track]<<endl;
                }
            }
            else if(line=="FORWARD")
            {
                if(track+1>index)
                {
                    cout<<"Ignored"<<endl;
                    continue;
                }
                else
                {
                    cout<<webLink[++track]<<endl;
                }
            }
        }
    }
    return 0;
}*/
