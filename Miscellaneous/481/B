#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ans=0;
    for(int i=0;i<n;i++){
        int count=0;
        while(s[i]=='x') {
            count++;
            i++;
        }
        if(count>=3) ans+=(count-2);
    }
    cout<<ans;
    return 0;
}
