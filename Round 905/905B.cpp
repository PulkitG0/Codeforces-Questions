#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        string s;
        cin>>s;
        vector<int>v(26, 0);
        for(int i=0;i<n;i++){
            v[s[i]-'a']++;
        }
        /*for(int i=0;i<26;i++) cout<<v[i]<<" ";
        cout<<"\n";*/
        int c1=0, c2=0;
        for(int i=0;i<26;i++){
            if(v[i]==1) c1++;
            else if(v[i]>=2){
                if(v[i]%2==0) c2+=v[i]/2;
                else {
                    c2+=v[i]/2;
                    c1++;
                }
            }
        }
        //cout<<c2<<" "<<c1<<"\n";
        int chk=n-k;
        bool ans=0;
        for(int i=1;i<=c2;i++){
            if(2*i==chk || 2*i==(chk-1)) ans=1;
        }
        if(ans || (n-k)==1) cout<<"Yes \n";
        else cout<<"No \n";
    }
    return 0;
}   
