#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>v(2*n);
        bool siu=0;
        for(int i=0;i<2*n;i++) cin>>v[i];
        sort(v.begin(), v.end());
        for(int i=0;i<n;i++){
            if(v[i]+x>v[n+i]) siu=1;
        }
        if(siu) cout<<"NO \n";
        else cout<<"YES \n";
    }
    return 0;
}
