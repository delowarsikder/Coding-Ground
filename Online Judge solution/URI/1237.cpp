///this problem count longest common substring

#include<bits/stdc++.h>
#define endl '\n'

using namespace std;

int main()
{
//    freopen("input.txt","r",stdin);
    string str1,str2;
    //get input end of after
    getline(cin,str1,'\n');
    while(getline(cin,str2,'\n'))
    {
//        cout<<"str1 : "<<str1<<endl;
//        cout<<"str2 : "<<str2<<endl;
        int row=str1.size();
        int col=str2.size();

        //to find LCS
        int t[row+1][col+1];
        int result=0;
        //    memset(t, 0, sizeof(t[0][0]) * (row+1) * (col+1));
//start lcs

        for(int i=0; i<=row; i++)
        {
            for(int j=0; j<=col; j++)
            {
                if(i==0 || j==0)
                {
                    t[i][j]=0; //for first row and first column are 0
                }
                else if(str1[i-1]==str2[j-1])
                {
                    t[i][j]=t[i-1][j-1]+1;
                    result=max(result,t[i][j]);
                }
                else
                {
                    t[i][j]=0; // to store 0 when two character don't match
                }
            }
        }

      cout<<result<<endl;
        getline(cin,str1);
    }

    return 0;
}

