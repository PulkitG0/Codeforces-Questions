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
        set<ll>s;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            s.insert(v[i]);
        }
        if(s.size()!=n) cout<<"no \n";
        else cout<<"yes \n";
    }
    return 0;
}
