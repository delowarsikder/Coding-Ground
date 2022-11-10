/*
1234567890  
0987654321  
1111111111  
1111111111  
2222222222  

//
876543  
111111  
111111
*/





#include<bits/stdc++.h>
using namespace std;

int main(){
    int tc;
    cin>>tc;
    
    int p,q;
   cin>>p>>q;
   vector<string>s;
   vector<string>p;
   
   for(int i=0;i<p;i++){
       cin>>s[i];
   }
   for(int j=0;j<q;j++){
       cin>>p[j];
   }

  //input row 
   for(int i=0;i<p-q;i++){
     //input colum 
       for(int j=0;j<p-q;j++){
           //pattern row
          for(int k=0;k<q;k++){
              //pattern col
              for(int l=0;l<q;l++){
                
                bool flag=(s[i][l]==p[k][l]); 
              }
          }             
       }
   }
    
    
    
    return 0;
}
