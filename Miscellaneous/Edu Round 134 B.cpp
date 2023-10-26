#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,Sx,Sy,d;
        bool c1=0, c2=0;
        cin>>n>>m>>Sx>>Sy>>d;
        for(int i=1;i<=n;i++){
            int D1=abs(Sx-i)+abs(Sy-1);
            int D2=abs(Sx-i)+abs(Sy-m);
            if(D1<=d) c1=1;
            if(D2<=d) c2=1;
        }
        for(int i=1;i<=m;i++){
            int D1=abs(Sx-1)+abs(Sy-i);
            int D2=abs(Sx-n)+abs(Sy-i);
            if(D1<=d) c2=1;
            if(D2<=d) c1=1;
        }
        if(c1&&c2) cout<<-1<<"\n";
        else cout<<n+m-2<<"\n";
    }
    return 0;
}
