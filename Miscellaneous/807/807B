#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long ans=0;
        vector<long long>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=0;i<n-1;i++) ans+=v[i];
        int i=0, b=0;
        while(v[i]==0) {
            b++;
            i++;
        }
        if(ans==0){
            cout<<0<<"\n";
            continue;
        }
        int c=0;
        for(int j=0;j<n-1;j++) if(v[j]==0) c++;
        ans+=(c-b);
        cout<<ans<<"\n";
    }
    return 0;
}
