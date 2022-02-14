#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,t,volume,c[10],l,w,h;
    double g=9.8,da;

    double max=0;
    int ans = 0;
    while(cin>>t){
        if (t==0)
            break;
        for(int i=0; i<t; i++){
        cin>> l >> w >> h ;
        volume=l*w*h;
        da=g-(g/(2*h));
        if(da>max){
            max=da;
            ans=volume;
         }
        else if(da==max){
            if(volume>ans)
                ans=volume;
         }
        }
       cout<<ans<<endl;
    }

    return 0;
}
