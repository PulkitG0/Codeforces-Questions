#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        vector<int>count(101);
        for(int i=1;i<=100;i++){
            for(int j=0;j<n;j++){
                if(v[j]==i) count[i]++;
            }
        }
        for(int i=1;i<=100;i++){
            for(int j=0;j<n;j++){
                if(count[i]==1 && v[j]==i) ans=j;
            }
        }
        cout<<ans+1<<"\n";
    }
    return 0;
}
