#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        bool ans=0;
        vector<int>d(n), a(n);
        for(int i=0;i<n;i++) cin>>d[i];
        a[0]=d[0];
        for(int i=1;i<n;i++){
            if(a[i-1]>=d[i] && d[i]!=0) {
                ans=1;
                break;
            }
            else a[i]=a[i-1]+d[i];
        }
        if(ans) cout<<-1;
        else for(int i=0;i<n;i++) cout<<a[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
