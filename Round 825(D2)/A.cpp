#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll ca=0, cb=0, uneq=0;
        vector<ll>a(n), b(n);
        for(int i=0;i<n;i++) {
            cin>>a[i];
            if(a[i]==1) ca++;
        }
        for(int i=0;i<n;i++) {
            cin>>b[i];
            if(b[i]==1) cb++;
            if(b[i]!=a[i]) uneq++;
        }
        if(ca==cb && uneq==0) {
            cout<<0<<"\n";
            continue;
        }
        if(ca==cb && uneq!=0){
            cout<<1<<"\n";
            continue;
        }
        if(ca!=cb){
            ll d=abs(ca-cb);
            if(d==uneq) cout<<d<<"\n";
            else cout<<d+1<<"\n";
        }

    }
    return 0;
}
