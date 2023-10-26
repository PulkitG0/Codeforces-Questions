#include<bits/stdc++.h>
using namespace std;
# define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        vector<ll>v(26,0);
        set<int>c;
        for(int i=0;i<n;i++) {
            v[s[i]-'A']++;
            c.insert(s[i]);
        }
        ll ans=0;
        for(int i=0;i<26;i++) ans+=v[i];
        ans+=c.size();
        cout<<ans<<"\n";
    }
    return 0;
}
