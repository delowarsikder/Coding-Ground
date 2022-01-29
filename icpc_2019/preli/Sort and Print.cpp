#include<bits/stdc++.h>
using namespace std;

int main()
{
    int tc;
    int temp_roll,temp_mark;
    string temp_name;
    string name[101];
    int roll[101];
    int mark[101];
    cin>>tc;
    for(int i=0; i<tc; i++)
    {
        cin>>roll[i]>>name[i]>>mark[i];
    }
    for (int i=0; i<tc; i++)
    {
        for(int j=0; j<tc-1; j++)
        {
            if(mark[j]<mark[j+1])
            {
                temp_mark=mark[j];
                mark[j]=mark[j+1];
                mark[j+1]=temp_mark;

                temp_name=name[j];
                name[j]=name[j+1];
                name[j+1]=temp_name;

                temp_roll=roll[j];
                roll[j]=roll[j+1];
                roll[j+1]=temp_roll;
            }

            else if(mark[j]==mark[j+1])
            {
                if(roll[j]>roll[j+1])
                {
                    temp_mark=mark[j];
                    mark[j]=mark[j+1];
                    mark[j+1]=temp_mark;

                    temp_name=name[j];
                    name[j]=name[j+1];
                    name[j+1]=temp_name;

                    temp_roll=roll[j];
                    roll[j]=roll[j+1];
                    roll[j+1]=temp_roll;
                }
            }
        }
    }
    cout<<"Roll | Name       | Marks"<<endl;
    cout<<"-------------------------"<<endl;
    for(int i=0; i<tc; i++)
    {
        cout<<roll[i]<<" | "<<name[i]<<"       | "<<mark[i]<<endl;
    }
    return 0;
}
