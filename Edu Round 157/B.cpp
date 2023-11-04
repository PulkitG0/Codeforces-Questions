#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(2*n), x, y;
        for(int i=0;i<2*n;i++) cin>>v[i];
        sort(v.begin(), v.end());
        int ans=0;
        for(int i=0;i<n;i++){
            x.push_back(v[i]);
            y.push_back(v[n+i]);
        }
        for(int i=0;i<n-1;i++){
            ans+=(x[i+1]-x[i])+(y[i+1]-y[i]);
        }
        cout<<ans<<"\n";
        for(int i=0;i<n;i++) cout<<x[i]<<" "<<y[i]<<"\n";
    }
    return 0;
}
