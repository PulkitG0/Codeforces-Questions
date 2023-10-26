#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int index=-1,count=0,n=s.size();
        for(int i=n-1;i>=0;i--){
            if(s[i]=='N'){
            index=i;
            break;
            }
        }
        string a=s.substr(0,index+1);
        string b=s.substr(index+1);
        s=b+a;
        vector<int>parent(n);
        for(int i=0;i<n;i++){
            parent[i]=i+1;
        }
        for(int i=1;i<n;i++){
            if(s[i-1]=='E') parent[i]=parent[i-1];
        }
        if(s[n-1]=='E') parent[n-1]=parent[0];
        else {
            if(parent[n-1]==parent[0]){
                cout<<"NO"<<endl;
                count++;
                continue;
            }
        }
        for(int i=0;i<n-1;i++){
            if(s[i]=='N') {
                if(parent[i+1]==parent[i]) {
                    cout<<"NO";
                    count++;
                    break;
                }
            }
        }
        if(count==0) cout<<"YES";
        cout<<"\n";
    }
    return 0;
}
