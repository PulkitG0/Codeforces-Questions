#include<bits/stdc++.h>
using namespace std;
            
int main(){
    int n;
    cin>>n;
    //cout<<n<<endl;
    int a[n],b[n],x[n+1];
    for(int i=0;i<n+1;i++){
        x[i]=0;
    }
    for(int i=0; i<n;i++){
        cin>>a[i];
        cin>>b[i];
        //cout<<a[i]<<" ";
        //cout<<b[i]<<endl;
    }
    for(int i=0;i<n;i++){
        x[i+1]=x[i]-a[i]+b[i];
    }
    //for(int i=0;i<n-2;i++) cout<<x[i]<<" ";
    sort(x,x+n+1);
    //for(int i=0;i<n-2;i++) cout<<x[i]<<" ";
    cout<<x[n];
    return 0;
}
