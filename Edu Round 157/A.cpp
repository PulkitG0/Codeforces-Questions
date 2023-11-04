#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, y, k, ans=0;
        cin>>x>>y>>k;
        if(x>y) ans=x;
        else{
            if(k>(y-x)) ans=y;
            else{
                ans=2*y-x-k;
            }
        }
        cout<<ans<<"\n";
    }
    return 0;
}
