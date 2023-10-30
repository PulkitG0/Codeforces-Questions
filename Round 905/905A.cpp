#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int ans=0;
        if(s[0]=='0') ans+=10;
        else ans+=abs(s[0]-'1')+1;
        //cout<<ans<<"\n";
        for(int i=1;i<4;i++){
            if(s[i]==s[i-1]){
                ans++;
                continue;
            }
            if(s[i]=='0' || s[i-1]=='0'){
                ans+=11-(abs(int(s[i])-int(s[i-1])));
            }
            else{
                ans+=abs(int(s[i])-int(s[i-1]))+1;
            }
            //cout<<ans<<" ";
        }
        //cout<<"\n";
        cout<<ans<<" \n";
    }
    return 0;
}
