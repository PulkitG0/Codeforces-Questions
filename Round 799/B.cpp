#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>v;
        for(int i=0;i<n;i++) {
            int k;
            cin>>k;
            v.insert(k);
        }
        int ans=v.size();
        if((n-v.size())%2==1) ans--;
        cout<<ans<<"\n";
        
    }
    return 0;
}
