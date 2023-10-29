#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; 
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) cin>>v[i];
        if(n==2){
            cout<<"Yes \n"; 
            continue;
        }
        else{
            set<int>s;
            for(int i=0;i<n;i++) s.insert(v[i]);
            if(s.size()>2) cout<<"No \n";
            else if(s.size()==2){
                int c1=0, c2=1;
                for(int i=1;i<n;i++){
                    if(v[i]!=v[0]) c1++;
                    else c2++;
                }
                if(abs(c2-c1)>1) cout<<"No \n";
                else cout<<"Yes \n";
            }
            else cout<<"Yes \n";
        }
    }
    return 0;
}
