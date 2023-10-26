#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n==3 || n==1) {
            cout<<-1<<"\n";
            continue;
        }
        if(n==5) {
            cout<<"5 4 1 2 3 \n";
            continue;
        }
        if(n%2==0) {
            for(int i=n;i>=1;i--) cout<<i<<" ";
            cout<<"\n";
        }
        else {
            for(int i=n;i>=1;i--) {
                if(i==(n+1)/2) {
                    cout<<(n-1)/2<<" ";
                    continue;
                }
                if(i==((n+1)/2)-1) {
                    cout<<(n+1)/2<<" ";
                    continue;
                }
                cout<<i<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
