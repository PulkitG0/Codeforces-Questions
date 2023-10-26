#include<bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>v(n);
        bool chk=0;
        for(int i=0;i<n;i++) cin>>v[i];
        for(int i=1;i<n;i++){
            if(v[i]%v[0]!=0) {
                chk=1;
                break;
            }
        }
        if(chk) cout<<"NO \n";
        else cout<<"YES \n";
    }
    return 0;
}
