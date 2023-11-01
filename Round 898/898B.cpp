#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ans=1, ma=INT_MAX;
        bool chk=0;
        for(int i=0;i<n;i++){
            ll a;
            cin>>a;
            if(a!=0) {
                ma=min(a, ma);
                ans*=a;
            }
            else{
                if(chk) ans*=a;
                else{
                    chk=1;
                    ma=0;
                }
            }
            //cout<<ans<<" ";
        }
        if(ma!=0) ans/=ma;
        ans*=(ma+1);
        cout<<ans<<"\n";
    }
    return 0;
}
