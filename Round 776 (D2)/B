#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        ll l,r,a;
        cin>>l>>r>>a;
        ll ans, x=r/a*a-1;
		if(r%a==(a-1))ans = r/a+r%a;
		else if(x>=l)ans = x/a+x%a;
        else ans=(r/a)+(r%a);
        cout<<ans<<"\n";
    }
    return 0;
}
