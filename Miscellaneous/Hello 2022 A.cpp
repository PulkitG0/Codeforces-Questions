#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k,donei=-1,donej=-1;
        cin>>n>>k;
        double kk=((1.0*n)+1)/2;
        vector<vector<char>>ans(n,vector<char>(n));
        if(k>kk) {
            cout<<"-1"<<endl;
            continue;
        }
        else {
            for(int i=n-1;i>=0;i--){
                for(int j=n-1;j>=0;j--){
                    if(i!=j) ans[i][j]='.';
                    else {
                        if(k!=0){
                            if((donei-i)!=1){
                                ans[i][j]='R';
                                donei=i;
                                donej=j;
                                k--;
                            }
                            else ans[i][j]='.';
                        }
                        else ans[i][j]='.';
                    }
                }
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++) {
                cout<<ans[i][j];
            } cout<<endl;
        }
    }
    return 0;
}
