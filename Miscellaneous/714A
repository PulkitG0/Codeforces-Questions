#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int nn=n,kk=k;
        if(n%2!=0){
            if(k>(n-1)/2){
                cout<<-1<<endl;
                continue;
            }
            else{
                int i=1;
                while(kk--){
                    cout<<i<<" "<<n-i+1<<" ";
                    i++;
                }
                for(int j=k+1;j<=n-k;j++) cout<<j<<" ";
                cout<<endl;
                continue;
            }
        }
        else{
            if(k>(n-2)/2){
                cout<<-1<<endl;
                continue;
            }
            else{   
                int i=1;
                while(kk--){
                    cout<<i<<" "<<n-i+1<<" ";
                    i++;
                }
                for(int j=k+1;j<=n-k;j++) cout<<j<<" ";
                cout<<endl;
                continue;
            }
        }
    }
    return 0;
}
