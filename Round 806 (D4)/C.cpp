#include<bits/stdc++.h>
using namespace std;
# define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n), ans(n,0);
        for(ll i=0;i<n;i++) cin>>v[i];
        for(ll i=0;i<n;i++){
            ll b;
            cin>>b;
            string s;
            cin>>s;
            for(ll j=0;j<b;j++){
                if(s[j]=='U') {
                    v[i]--;
                    //cout<<"boo ";
                }
                else {
                    v[i]++;
                }
            }
        }
        for(ll i=0;i<n;i++){
            if(v[i]<0) ans[i]+=(10+v[i]);
            else if(v[i]>9) ans[i]+=(v[i]-10);
            else ans[i]+=v[i];
        }
        for(ll i=0;i<n;i++) cout<<ans[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
