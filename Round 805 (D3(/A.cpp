#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a=n;
        ll p=0;
        while(a/10!=0){
            a/=10;
            p++;
        }
        ll ex=pow(10, p);
        cout<<n-ex<<"\n";
    }
    return 0;
}
