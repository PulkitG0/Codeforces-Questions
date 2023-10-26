#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2==0) {
            cout<<0<<" "<<0<<" "<<n/2<<"\n";
            continue;
        }
        else cout<<-1<<"\n";
    }
    return 0;
}
