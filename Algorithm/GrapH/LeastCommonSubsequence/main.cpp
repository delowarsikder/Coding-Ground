#include<bits/stdc++.h>
using namespace std;

string str1,str2;
char temp[100];
int k=-1;
int length1,length2;
int dist[100][100]= {0};

int print(int i,int j)
{
    if(dist[i][j]==0)
    {
        return 0;
    }
    else if(dist[i][j-1]==dist[i-1][j])
    {
        k++;
        temp[k]=str1[i-1];

        print(i-1,j-1);
    }
    else
    {
        if(dist[i][j-1]>dist[i-1][j])
        {
            print(i,j-1);
        }
        else
        {
            print(i-1,j);
        }
    }
}

void fordFulkerson()
{
    for (int i=1; i<=length2; i++)
    {
        for(int j=1; j<=length1; j++)
        {
            if(str1[i-1]==str2[j-1])
            {
                dist[i][j]=dist[i-1][j-1]+1;
            }
            else
            {
                dist[i][j]=max(dist[i-1][j],dist[i][j-1]);
            }
        }
    }
}


int main()
{
    freopen("input.txt","r",stdin);
    cout<<"Enter String 1 :"<<endl;
    getline(cin,str1);
    cout<<"Enter String 1 :"<<endl;

    //cin.ignore(numeric_limits<streamsize>::max(),'\n');

    getline(cin,str2);

    length1=str1.length();
    length2=str2.length();

    fordFulkerson();
    print(length1,length2);
    cout<<"string 1 : "<<str1<<endl;
    cout<<"string 2 : "<<str2<<endl;
    cout<<"Temp :"<<temp<<endl;//print reverse order

    cout<<"\nMax lcs :"<<dist[length2][length1]<<endl;
}
