#include<bits/stdc++.h>
using namespace std;
int main()
{
    int tc;
    int Case=0;
    cin>>tc;
    cin.ignore(numeric_limits<streamsize>::max(),'\n');
    while(tc--)
    {
        string url;
        getline(cin,url);
//    string url="http://lightoj.com";
        int len=url.length();
        if(url[4]=='s')
        {
            cout<<"Case "<<++Case<<": "<<url<<endl;
        }
        else
        {
            string temp="https";
            int k=temp.length();
            for(int i=4; i<len; i++)
            {
                temp+=url[i];
            }
            cout<<"Case "<<++Case<<": "<<temp<<endl;
        }
    }
    return 0;
}
