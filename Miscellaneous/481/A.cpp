#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    vector<int>ans;
    for(int i=n-1;i>=0;i--){
        bool chk=0;
        for(auto j:ans){
            if(v[i]==j) chk=1;
        }if(!chk) ans.push_back(v[i]);
        /*for(auto j:ans) cout<<j<<" ";
        cout<<"\n";*/
    }
    cout<<ans.size()<<"\n";
    for(int i=ans.size()-1;i>=0;i--) cout<<ans[i]<<" ";
    cout<<"\n";
    return 0;
}
