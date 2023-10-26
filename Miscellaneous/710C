#include<bits/stdc++.h>
using namespace std;
int ret_idx(string &temp,string &longer){
    size_t found = longer.find(temp);
    if (found != string::npos) return found;
    else return -1;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        string a,b,temp,shorter,longer;
        cin>>a>>b;
        bool aloo=false;
        if(a==b) {
            cout<<"0 \n";
            continue;
        }
        int x=a.size(),y=b.size(),max_size=0;
        int idx=-1;
        if(x>y) shorter = b, longer = a;
        else shorter = a, longer = b;
        for(int i=shorter.size();i>0;i--){
            for(int j=0;j<=(shorter.size()-i);j++){
                temp=shorter.substr(j,i);
                idx=ret_idx(temp,longer);
                //cout<<idx<<" ";
                if(idx!=-1) {
                    aloo=true;
                    max_size=i;
                    if(aloo)break;
                }
            }
            if(aloo)break;
        }
        int ans=(x-max_size)+(y-max_size);
        cout<<ans<<"\n";
    }
    return 0;
}
