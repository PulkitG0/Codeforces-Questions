#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        if(n==1){
            cout<<"YES\n";
            continue;
        }
        else if(n==2){
            if(s[0]!=s[1]) cout<<"YES \n";
            else cout<<"NO\n";
        }
        else cout<<"NO \n";
    }
    return 0;
}
