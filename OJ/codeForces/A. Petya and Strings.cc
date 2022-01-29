#include<iostream>
#include<string>
using namespace std;

int main()
{
    string l1,l2;
    cin>>l1>>l2;
    int flag=0;
    for(int i=0; i<l1.size(); i++)
    {
        if(l1[i]>='a' && l1[i]<='z')
        {
            if(l2[i]>='a' && l2[i]<='z')
            {
                if(l1[i]==l2[i])
                {
                    flag=0;
                }
                else if(l1[i]>l2[i])
                {
                    flag=1;
                    break;
                }
                else if(l1[i]<l2[i])
                {
                    flag=-1;
                    break;
                }
            }
            else  if(l2[i]>='A' && l2[i]<='Z')
            {
                l2[i]=l2[i]+32;
                if(l1[i]==l2[i])
                {
                    flag=0;
                }
                else if(l1[i]>l2[i])
                {
                    flag=1;
                    break;
                }
                else if(l1[i]<l2[i])
                {
                    flag=-1;
                    break;
                }
            }
        }
        else if(l1[i]>='A' && l1[i]<='Z')
        {
            if(l2[i]>='a' && l2[i]<='z')
            {
                l2[i]=l2[i]-32;
                if(l1[i]==l2[i])
                {
                    flag=0;
                }
                else if(l1[i]>l2[i])
                {
                    flag=1;
                    break;
                }
                else if(l1[i]<l2[i])
                {
                    flag=-1;
                    break;
                }
            }
            else  if(l2[i]>='A' && l2[i]<='Z')
            {
                if(l1[i]==l2[i])
                {
                    flag=0;
                }
                else if(l1[i]>l2[i])
                {
                    flag=1;
                    break;
                }
                else if(l1[i]<l2[i])
                {
                    flag=-1;
                    break;
                }
            }
        }
    }

    cout<<flag<<endl;
    return 0;

}
