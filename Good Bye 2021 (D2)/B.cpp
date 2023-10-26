#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        string ans;
        int pos=-1;
        for(int i=0;i<n-1;i++){
            if(s[i]<s[i+1]){
                pos=i;
                break;
            }
        }
        if(pos==-1){
            pos=n-1;
        }
            string temp=s.substr(0,pos+1);
            ans+=temp;
            reverse(temp.begin(), temp.end());
            ans+=temp;
            if(s[0]==s[1] && n>1) ans=s.substr(0,2);
        
        cout<<ans<<endl;
    }
    return 0;
}
