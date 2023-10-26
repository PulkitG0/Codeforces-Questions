#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int diff=INT_MAX;
        vector<int>a(n), b(n), d(n, -1);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++) {
            cin>>b[i];
        }
        bool ch = 0;
        for(int i=0;i<n;i++){

            if(b[i]!=0){
                d[i] = a[i]-b[i];
                if(d[i]<0){
                    ch=1;
                    break;
                }
                else diff = d[i];
            }
            else d[i]=a[i];
        }
        if(n==1 && b[0] ==0){
            cout<<"YES \n";
            continue;
        }
        for(int i=0;i<n;i++){
            if(d[i]!=diff && b[i]!=0) ch=1;
            else if(d[i]>diff && b[i]==0) ch=1;
        }
        if(ch) cout<<"NO \n";
        else cout<<"YES \n";
    }
    return 0;
}

