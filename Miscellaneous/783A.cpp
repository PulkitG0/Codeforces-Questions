#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n,m;
        cin>>n>>m;
        if(n==1 || m==1) {
            if(abs(n-m)>1) {
                cout<<"-1 \n";
                continue;
            }
        }
        long long int ans;
        if(n>m){
            if((n-m)%2==0) ans=2*(m-1) + 2*(n-m);
            else ans = 2*(m-1) + 2*(n-m) - 1;
        }
        else {
            if((m-n)%2==0) ans=2*(n-1) + 2*(m-n);
            else ans = 2*(n-1) + 2*(m-n) - 1;
        }
        cout<<ans<<"\n";
        
    }
    return 0;
}
