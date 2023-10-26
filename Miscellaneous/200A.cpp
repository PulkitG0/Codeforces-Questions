#include<bits/stdc++.h>
using namespace std;
int main(){
    long int n;
    int ans=0;
    cin>>n;
    string pos[n];
    for(int i=0;i<n;i++){
        cin>>pos[i];
    }

    for(int i=1;i<n;i++){
        if(pos[i-1]==pos[i]) continue;
        else ans++;
    }
    cout<<ans+1;
    return 0;
}
