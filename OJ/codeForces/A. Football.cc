#include<iostream>
#include<string>
using namespace std;

int main()
{
    int zero=0,one=0;
    string player;
    cin>>player;
    for(int i=0; i<player.size(); i++)
    {
        if(player[i]=='0')
        {
            zero++;
            continue;
        }
        else
        {
            if(zero>=7)
            {
                break;
            }
            else
            {
                zero=0;
            }
        }
    }

    for(int i=0; i<player.size(); i++)
    {
        if(player[i]=='1')
        {
            one++;
        }
        else
        {

            if(one>=7)
            {
                break;
            }
            else
            {
                one=0;
            }

        }

    }

    if(one>=7 || zero>=7)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }

    return 0;
}
