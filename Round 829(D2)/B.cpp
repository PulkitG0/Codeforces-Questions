#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        if(n%2==0){
            for(int i=0;i<n/2;i++){
                cout<<(n/2)-i<<" "<<n-i<<" ";
            }
        }
        else {
            cout<<n<<" ";
            for(int i=0;i<n/2;i++){
                cout<<(n/2)-i<<" "<<n-1-i<<" ";
            }
        }
        cout<<"\n";
    }
    return 0;
}
