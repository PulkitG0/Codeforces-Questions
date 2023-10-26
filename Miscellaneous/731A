#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int Xa,Xb,Xf,Ya,Yb,Yf,ans=0;
        cin>>Xa>>Ya>>Xb>>Yb>>Xf>>Yf;
        if(Xa==Xb){
            if(Yf>Ya && Yb>Yf && Xa==Xf) ans+=(abs(Ya-Yb))+2;
            else if(Yf>Yb && Ya>Yf && Xa==Xf) ans+=(abs(Ya-Yb))+2;
            else ans+=(abs(Ya-Yb));
        }
        else if(Ya==Yb){
            if(Xf>Xa && Xb>Xf && Ya==Yf) ans+=(abs(Xa-Xb))+2;
            else if(Xf>Xb && Xa>Xf && Ya==Yf) ans+=(abs(Xa-Xb))+2;
            else ans+=(abs(Xa-Xb));
        }
        else ans+= (abs(Xa-Xb))+(abs(Ya-Yb));
        cout<<ans<<"\n";
    }
    return 0;
}
