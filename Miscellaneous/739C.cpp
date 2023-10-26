#include<bits/stdc++.h>
using namespace std;
int ret_lim(int k){
    for(int i=0;i<32000;i++){
        if(k<=(i*i) && k>=((i-1)*(i-1))) {
            return i;
            break;
        }
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        long int k;
        cin>>k;
        int bl,br,tr,lim;
        lim=ret_lim(k);
        bl=lim*lim; 
        tr=bl-(2*lim)+2;
        br=bl-lim+1;
        int r=0,c=0;
        if(k>=tr && k<=br) {
            c+=lim;
            r+=lim-(br-k);
        }
        if(k>br && k<=bl) {
            r+=lim; 
            c+=lim-(k-br);
        }
        cout<<r<<" "<<c<<endl;
    }
    return 0;
}
