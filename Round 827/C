#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        vector<vector<char>>v(8, vector<char>(8));
        bool chk=0;
        for(int i=0;i<8;i++) for(int j=0;j<8;j++) cin>>v[i][j];
        for(int i=0;i<8;i++) {
            ll count=0;
            for(int j=0;j<8;j++){
                if(v[i][j]=='R') count++;
            }
            if(count==8){
                chk=1;
                break;
            }
        }
        if(chk) cout<<"R \n";
        else cout<<"B \n";
    }
    return 0;
}
