#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int n=s.size();
        vector<int>count(26);
        vector<char>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<26;j++){
                if((s[i]-'a')==j) count[j]++;
            }
        }
        for(int i=0;i<26;i++){
            if(count[i]==1){
                char a='a'+i;
                ans.push_back(a);
            }
        }
        for(int i=0;i<26;i++){
            if(count[i]==2){
                char a='a'+i;
                ans.push_back(a);
            }
        }
        for(int i=0;i<26;i++){
            if(count[i]==2){
                char a='a'+i;
                ans.push_back(a);
            }
        }
        for(int i=0;i<ans.size();i++){
            cout<<ans[i];
        }
        cout<<endl;
    }
    return 0;
}
