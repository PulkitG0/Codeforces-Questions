#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    string descp,s;
    for (int i=0;i<t;i++){
        cin>>descp;
        cin>>s;
        int a[s.size()];
        int ans=0;
        for(int j=0;j<s.size();j++){
            a[j]=0;
        }
        for(int k=0;k<s.size();k++){
            for(int j=0;j<26;j++){
                if(descp[j]==s[k]) a[k]=j+1;
            }
        }
        for(int j=1;j<s.size();j++){
            ans += abs(a[j]-a[j-1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}
