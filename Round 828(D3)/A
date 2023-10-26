#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        string s;
        cin>>s;
        bool chk=0;

        for(int i=0;i<n;i++){
            ll a=v[i];
            char c=s[i] ;
            for(int j=0;j<n;j++){
                if(a==v[j] && c!=s[j]) {
                    chk=1;
                    break;
                }
            }
            if(chk) break;
        }
        if(chk) cout<<"no \n";
        else cout<<"yes \n";
    }    
    return 0;
}
