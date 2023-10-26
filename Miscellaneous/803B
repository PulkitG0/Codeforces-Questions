#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        vector<long int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        if(k==1) {
            if(n%2==1) cout<<n/2<<"\n";
            else cout<<(n/2)-1<<"\n";
        }
        else {
            int ans=0;
            for(int i=1;i<n-1;i++){
                if(a[i]>a[i+1]+a[i-1]) ans++;
            }
            cout<<ans<<"\n";
        }
    }
    return 0;
}
