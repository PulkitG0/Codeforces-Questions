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
        /*vector<ll>a(n);
        for(int i=0;i<n;i++) a[i]=v[i];
        sort(a.begin(), a.end());
        vector<int>idx(2);
        for(int i=0;i<n;i++){
            if(v[i]==a[n-1]) {
                idx.push_back(i);
                break;
            }
        }
        for(int i=0;i<n;i++){
            if(v[i]==a[n-2]) {
                idx.push_back(i);
                break;
            }
        }*/
        sort(v.begin(), v.end());
        cout<<v[n-1]+v[n-2]<<endl;
    }
    return 0;
}
