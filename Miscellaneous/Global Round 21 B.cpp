#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n),idx;
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=0;i<n;i++) if(v[i]!=0) idx.push_back(i);
        int ans=idx.size();
        if(ans==0 || ans==1){
            cout<<ans<<endl;
            continue;
        }
        for(int i=1;i<idx.size();i++) if(idx[i]==idx[i-1]+1) ans--;
        if(ans>2) ans=2;
        cout<<ans<<"\n";
    }
    return 0;
}
