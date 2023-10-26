#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        set<char>v;
        int count=0;
        for(int i=0;i<s.size();i++) {
            v.insert(s[i]);
            if(v.size()>3){
                i--;
                count++;
                v.clear();
            }
        }
        if(v.size()!=0) count++;
        cout<<count<<"\n";
    }
    return 0;
}
