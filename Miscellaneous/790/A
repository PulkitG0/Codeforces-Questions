#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int lsum=0, rsum=0;
        for(int i=0;i<s.length();i++){
            if(i<(s.length()/2)) lsum += s[i]-'0';
            else rsum += s[i]-'0';
        }
        if(lsum==rsum) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
