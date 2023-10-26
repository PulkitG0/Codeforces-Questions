#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,ans=0;
        cin>>n;
        string s;
        cin>>s;
        for(int i=0;i<n-2;i++){
            string a=s.substr(i,3);
            if(a=="010") ans++;
        }
        for(int i=0;i<n-1;i++){
            string b=s.substr(i,2);
            if(b=="00") ans+=2;
        }
        cout<<ans<<endl;
    }
    return 0;
}
