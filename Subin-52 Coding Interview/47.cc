#include<iostream>
using namespace std;

int main()
{
    freopen("input_47.txt","r",stdin);
    int n1,n2,tc,a[100],b[100],c[100];
//    cout<<"Tc :"<<endl;
    cin>>tc;
    while(tc--)
    {
        // cout<<"how many first element :"<<endl;
        cin>>n1;
        //cout<<"Enter "<<n1 <<" element :"<<endl;
        for(int i=0; i<n1; i++)
        {
            cin>>a[i];
        }
        //cout<<"how many second element :"<<endl;
        cin>>n2;
        //cout<<"Enter "<<n2 <<" element :"<<endl;
        for(int i=0; i<n2; i++)
        {
            cin>>b[i];
        }

        int k=0;
        int i=0,j=0;
        while(i<n1 && j<n2)
        {
            if(a[i]<b[j])
            {
                c[k]=a[i];
                i++;
            }
            else
            {
                c[k]=b[j];
                j++;
            }
            k++;
        }
        while(i<n1)
        {
            c[k]=a[i];
            i++;
            k++;
        }
        while(j<n2)
        {
            c[k]=b[j];
            j++;
            k++;
        }


        //cout<<"sorted element :"<<endl;
        for (int i=0; i<n1+n2; i++)
        {
            cout<<c[i]<<endl;
        }
    }

    return 0;
}
