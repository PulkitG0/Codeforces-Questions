#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while (t--){
        ll n,z,max=-1,temp,ans=0;
        cin>>n>>z;
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            if((a|z)>=ans ) {
                max=a;
                ans=max|z;
                //cout<<ans<<" ";
            }
        }//cout<<"\n";
        //cout<<max<<" \n";
        while(z!=0) {
            temp=z;
            max=z|max;
            z=max&z;
            if(z==temp) break;
        }
        cout<<max<<"\n";
    }
    return 0;
}
