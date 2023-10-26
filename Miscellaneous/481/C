#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<long long int>a(n), b(m);
    for(int i=0;i<n;i++) cin>>a[i];
    for(int i=0;i<m;i++) cin>>b[i];
    long long int i=0,r=0;
    for(int j=0;j<m;j++){
        long long int d=0, ans=0;
        bool chk=0;
        while(!chk){
            if(b[j]<=r) {
                ans+=b[j]-r+a[i-1];
                d=i;
                cout<<d<<" "<<ans<<"\n";
                chk=1;
            }
            else {
                r+=a[i];
                i++;
            }
        }
    }
    return 0;
}
