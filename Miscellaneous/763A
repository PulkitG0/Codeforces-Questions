#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m,Rb,Cb,Rd,Cd;
        int time=0;
        bool aloo=false;
        cin>>n>>m>>Rb>>Cb>>Rd>>Cd;
        if((Rb-Rd)==0 || (Cb-Cd)==0){
            cout<<"0"<<endl;
            continue;
        }
        int req_num=0,Row=0,Column=0;
        if(Rd-Rb<0) Row+=(((2*n)-Rb)-Rd);
        else Row+=(Rd-Rb);
        if(Cd-Cb<0) Column+=(((2*m)-Cb)-Cd);
        else Column+=(Cd-Cb);
        if(Row>Column) time+=Column;
        else time+=Row;
        cout<<time<<"\n";
    }
    return 0;
}
