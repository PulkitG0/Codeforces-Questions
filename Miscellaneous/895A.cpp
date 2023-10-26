#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        ll a, b, c;
        cin>>a>>b>>c;
        if(a==b) cout<<0<<"\n";
        else{
            ll m = c*2;
            if(abs(a-b)%m!=0) cout<<abs((a-b)/m)+1<<"\n";
            else cout<<abs(a-b)/m<<"\n";
        }
    }
    return 0;
}
