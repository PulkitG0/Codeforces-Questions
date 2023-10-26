#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        string a, b;
        cin>>a>>b;
        ll ca=0, cb=0;
        bool cha=0, chb=0, ma=0, mb=0;

        for(int i=0;i<a.size();i++) {
            if(a[i]=='X') ca++;
            if(a[i]=='M') ma=1;
            if(a[i]=='L') cha=1;
        }
        for(int i=0;i<b.size();i++) {
            if(b[i]=='X') cb++;
            if(b[i]=='M') mb=1;
            if(b[i]=='L') chb=1;
        }
        if(cha) {
            if(chb) {
                if(ca>cb) cout<<"> \n";
                else if(ca==cb) cout<<"= \n";
                else cout<<"< \n";
            }
            else cout<<"> \n";
        }
        if(ma) {
            if(chb) {
                cout<<"< \n";
            }
            else if(mb) cout<<"= \n";
            else cout<<"> \n";
        }
        if(!cha && !ma){
            if(chb) {
                cout<<"< \n";
            }
            else if(mb) cout<<"< \n";
            else {
                if(ca>cb) cout<<"< \n";
                else if(ca==cb) cout<<"= \n";
                else cout<<"> \n";
            }
        }
    }
    return 0;
}
