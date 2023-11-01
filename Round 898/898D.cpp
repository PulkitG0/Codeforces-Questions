#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(n<=k){
            if(count(s.begin(), s.end(), 'B')>0) cout<<1<<"\n";
            else cout<<0<<"\n";
            continue;
        }
        else{
            if(count(s.begin(), s.end(), 'B')==0) cout<<0<<"\n";
            else{
                int ans=0;
                for(int i=0;i<n;i++){
                    if(s[i]=='B'){
                        ans++;
                        i+=(k-1);
                    }
                }
                cout<<ans<<"\n";
            }
        }
    }
    return 0;
}
