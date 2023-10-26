#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        bool chk=false;
        for(int i=0;i<n;i++) cin>>v[i];
        int o,e, ce=0,co=0;
        if(n%2==1) o=n/2, e=(n/2)+1;
        else o=n/2, e=n/2;
        vector<int>ev, od;
        for(int i=0;i<n;i++){
            if(i%2==0) ev.push_back(v[i]);
            else od.push_back(v[i]);
        }
        
        for(int i=0;i<e;i++){
            if(ev[i]%2==0) ce++;
        }
        for(int i=0;i<o;i++){
            if(od[i]%2==0) co++;
        }
        if(ce==0 || ce==e){
            if(co==0 || co==o) cout<<"YES \n";
            else chk=1;
        }else chk=1;
        if(chk) cout<<"NO \n";
    }
    return 0;
}
