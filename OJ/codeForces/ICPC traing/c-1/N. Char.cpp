#include<bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
    char x;
    cin>>x;
    if(x>='a' && x<='z'){
        cout<<char(x-32)<<endl;
    }
    else{
        cout<<char(x+32)<<endl;
    }
return 0;}
