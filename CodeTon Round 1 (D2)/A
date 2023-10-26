#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        if(n==1) {
            cout<<1<<" "<<1<<endl;
            continue;
        }
        else if(n==2) {
            cout<<1<<" "<<2<<endl;
            continue;
        }
        else {
            ll hi=0,lo=10000000000, idx1, idx2;
            for(int i=0;i<n;i++){
                if(v[i]<lo) {
                    idx1=i;
                    lo=v[i];
                }
                if(v[i]>hi) {
                    idx2=i;
                    hi=v[i];
                }
            }
            cout<<idx1+1<<" "<<idx2+1<<endl;
        }
    }
    return 0;
}
