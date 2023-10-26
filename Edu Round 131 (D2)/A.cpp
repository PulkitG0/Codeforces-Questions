#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<int>>v(2, vector<int>(2));
        int count =0;
        for(int i=0;i<2;i++) {
            for(int j=0;j<2;j++) {
                cin>>v[i][j];
                if(v[i][j]==1) count++;
            }
        }
        if(count==3 || count==2) cout<<1<<"\n";
        if(count==4) cout<<2<<"\n";
        if(count==0 || count==1) cout<<count<<"\n";
    }
    return 0;
}   
