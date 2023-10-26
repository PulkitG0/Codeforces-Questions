#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n,c,ans=0;
        cin>>n>>c;
        vector<int>v(n), count(101);
        for(int i=0;i<n;i++) {
            cin>>v[i];
            count[v[i]]++;
        }
        for(int i=1;i<101;i++){
            if(count[i]>1){
                if(c>count[i]) ans+=count[i];
                else ans+=c;
            }
            else if(count[i]==1) ans++;
        }
        cout<<ans<<"\n";
    }
    return 0;
}
