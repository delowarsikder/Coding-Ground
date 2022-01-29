#include<iostream>
#include<string>
using namespace std;

int main()
{
    string line1,line2;
    int s=0;
    cout<<"Enter line 1 :"<<endl;
    getline(cin,line1);
    cout<<"Enter line 2: "<<endl;
    cin>>line2;
    int k=0;
    for(int i=0; i<line1.size(); i++)
    {
        int j=0;
        int flag=0;
        k=i;
        while(j<line2.size())
        {
            if(line1[k]==line2[j])
            {
                flag=1;
            }
            else
            {
                flag=0;
            }
            j++;
            k++;
        }
        if(flag==1)
        {
            s++;
        }
    }
cout<<"number of sub string :"<<s<<endl;
return 0;
}
