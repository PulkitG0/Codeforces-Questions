#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n, q=0, qt=0, at=0, a=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='Q') qt++;
            else at++;
        }
        if(qt>at) {
            cout<<"no \n";
            continue;
        }
        bool chk=0;
        for(int i=0;i<n;i++) {
            while(s[i]=='Q') {
                qt--;
                i++;
            }
            while(s[i]=='A') {
                at--;
                i++;
            }
            i--;
            if(qt>at){
                chk=1;
                break;
            }
        }
        if(chk) cout<<"no \n";
        else cout<<"yes \n";
    }
    return 0;
}
