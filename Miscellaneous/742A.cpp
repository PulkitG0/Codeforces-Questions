#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,ans[n];
        cin>>s;
        for(int i=0;i<n;i++){
            if(s[i]=='L') ans[i]="L";
            else if(s[i]=='R') ans[i]="R";
            else if(s[i]=='U') ans[i]="D";
            else ans[i]="U";
        }
        for(int i=0;i<n;i++){
            cout<<ans[i];
        }
        cout<<" \n";
    }
    return 0;
}
