#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll>v(n);
        for(int i=0;i<n;i++) {
            int x;
            cin>>x;
            v[i]=x-1;
        }
        vector<int>c(50);
        vector<char>ans(m, 'B');
        for(int i=0;i<n;i++){
            int a=v[i], b=m-1-v[i];
            if(a>=b) {
                if(ans[b]!='A') ans[b]='A';
                else ans[a]='A';
            }
            else{
                if(ans[a]!='A') ans[a]='A';
                else ans[b]='A';
            }
        }
        for(int i=0;i<m;i++) cout<<ans[i];
        cout<<"\n";
    }
    return 0;
}
