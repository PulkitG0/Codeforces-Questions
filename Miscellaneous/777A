#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll>v(n/3+1);
        if(n/3==0){
            if(n==1) {
                cout<<1<<endl;
                continue;
            }
            if(n==2){
                cout<<2<<endl;
                continue;
            }
        }
        if(n%3==1) {
            v[0]=1;
            for(int i=1;i<=n/3;i++){
                v[i]=21;
            }
        }
        else if(n%3==2) {
            v[0]=2;
            for(int i=1;i<=n/3;i++){
                v[i]=12;
            }
        }
        else {
            for(int i=0;i<n/3;i++){
                v[i]=21;
            }
        }
        if(n%3==0){
            for(int i=0;i<n/3;i++){
                cout<<v[i];
            }
        }
        else{
            for(int i=0;i<=n/3;i++){
                cout<<v[i];
            }
        }
        cout<<"\n";
    }
    return 0;
}
