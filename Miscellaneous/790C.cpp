#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<string>v(n);
        vector<int>dif(m);
        int min=201;
        for(int i=0;i<n;i++) cin>>v[i];
        //for(int i=0;i<n;i++) cout<<v[i]<<" ";
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int sum=0;
                for(int k=0;k<m;k++){
                    int p=v[i][k]-v[j][k];
                    //cout<<p<<" ";
                    dif[k]=abs(p);
                    //cout<<dif[k]<<" ";
                    sum+=dif[k];
                }
                if(sum<min) min=sum;
            }
        }
        cout<<min<<"\n";
    }
    return 0;
}
