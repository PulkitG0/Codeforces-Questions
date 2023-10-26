#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        long int max=0,min=1000000000;
        for(int i=0;i<n;i++){
            if(v[i]>max) max=v[i];
            if(v[i]<min) min=v[i];
        }
        long int ans=max-min;
        cout<<ans<<endl;
    }
    return 0;
}
