#include<bits/stdc++.h>
using namespace std;
#define endl '\n'
#define size_ 500
#define ms(a,b) memset(a,b,sizeof(a))
#define eq_no 3

void print(double m[][eq_no+1]){
    // cout<<"print matrix"<<endl;
    for(int i=0;i<eq_no;i++){
        for(int j=0;j<eq_no+1;j++){
            cout<<m[i][j]<<" ";
        }cout<<endl;
    }
}

int main(){
    double mat[eq_no][eq_no+1]={{2,-1,3,15},{4,-2,2,42},{1,1,-1,9}};
    // ms(mat,0);
    //find the max point
    int id;
    for(int i=0;i<eq_no;i++){
        id=i;
        //find the pivot
        for(int j=i+1;j<eq_no;j++){
            if(fabs(mat[j][i])>fabs(mat[id][i])){
                id=j;
            }
        }
    //make highest element as a pivot
        if(id!=i){
            for(int j=i;j<=eq_no;j++){
                swap(mat[i][j],mat[id][j]);
            }
        }
        cout<<"most element is first"<<endl;
        print(mat);

        //make pivot 1
        if(mat[i][i]!=0){
            int pivot=mat[i][i];
            for(int k=i;k<=eq_no;k++){
                mat[i][k]= mat[i][k]/pivot;
            }
        }

// f
        for(int j=i+1;j<=eq_no;j++){
                int factor=mat[j][i]/mat[i][i];
                for(int k=i;k<=eq_no;k++){
                    mat[j][k]-=factor*mat[i][k];
                }
            }
        }
        // cout<<"normalized value: "<<endl;
        // print(mat);

    }
    cout<<"After resiing"<<endl;
        print(mat);
}