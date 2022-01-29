/*theorem দুইটি সদৃশ ত্রিভুজক্ষেত্রের ক্ষেত্রফলদ্বয়ের অনুপাত তাদের যেকোনো দুই অনুরূপ বাহুর উপর অঙ্কিত বর্গক্ষেত্রের ক্ষেত্রফলদ্বয়ের অনুপাতের সমান।(উ.গ.শ্রে-(৯-১০)-- উপপাদ্য ৩.৯)*/
#include<bits/stdc++.h>
using namespace std;
#define FastIO ios::sync_with_stdio(0);cin.tie(0);

int main()
{
    int tc,_case=0;
    cin>>tc;
    while(tc--){

    double ab,bc,ac,r;
    cin>>ab>>bc>>ac>>r;
    double result=ab*sqrt(r/(r+1));
    printf("Case %d: ",++_case);
    cout<<setprecision(7)<<setiosflags(ios::fixed);
    cout<<result<<endl;
    }


    return 0;
}
