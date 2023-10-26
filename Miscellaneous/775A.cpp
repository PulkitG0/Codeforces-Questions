#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        cin>>n;
        vector<int>v(105);
        for(int i=1;i<=n;i++) cin>>v[i];
        int s=1,e=n;
        while (s<e && v[s+1]) s++;
        while (e>s && v[e-1]) e--;
        cout<<e-s<<endl;
    }
    return 0;
}
