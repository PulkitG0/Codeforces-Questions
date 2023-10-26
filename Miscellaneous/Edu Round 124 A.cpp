#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        long long int ans=1;
        while(n--) ans*=2;
        cout<<ans-1<<endl;
    }
    return 0;
}
