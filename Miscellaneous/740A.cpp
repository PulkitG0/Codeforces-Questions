#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,count=0;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++){
            cin>>v[i];
        }
        vector<int>a=v;
        sort(a.begin(),a.end());
        for(;count<=n;){
            if(v==a){
                cout<<count;
                break;
            }
            else if (v!=a){
                for(int j=0;j<n-1;){
                    if(v[j]>v[j+1]) swap(v[j],v[j+1]);
                    j+=2;
                }
                count++;
                if(v==a) {
                    cout<<count;
                    break;
                }
                for(int j=1;j<n-1;){
                    if(v[j]>v[j+1]) swap(v[j],v[j+1]);
                    j+=2;
                }
                count++;
                if(v==a) {
                    cout<<count;
                    break;
                }
            }
        }
        cout<<"\n";
    }
    return 0;
}
