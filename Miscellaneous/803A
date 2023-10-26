#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        int ans=0;
        bool chk=0;
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=0;i<n;i++){
            int x=v[i];
            //int it=v.begin()+i;
            v.erase(v.begin()+i);
            for(int j=0;j<n-1;j++) ans=ans^v[j];
            if(ans==x) {
                chk=1;
                break;
            }
            else v.push_back(x);
            if(chk) break;
        }
        cout<<ans<<'\n';
    }
    return 0;
}
