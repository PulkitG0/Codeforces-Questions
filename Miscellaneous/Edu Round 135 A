#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, max=0, idx;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) {
            cin>>v[i];
            if(v[i]>max) max=v[i];
        }
        for(int i=0;i<n;i++) {
            if(v[i]==max) idx=i;
        }
        cout<<idx+1<<"\n";
    }
    return 0;
}
