#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        long int min = 10000000;
        for(int i=0;i<n;i++){
            if(v[i]<min) min=v[i];
        }
        long long int ans = 0;
        for(int i=0;i<n;i++){
            ans += (v[i] - min);
        }
        cout<<ans<<endl;
    }
    return 0;
}
