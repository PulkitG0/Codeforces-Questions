#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<long long int>v(n), b, count;
        for(int i=0;i<n;i++) cin>>v[i];
        if(n==1 || v[n-1]!=v[n-2]) {
            cout<<-1<<"\n";
            continue;
        }
        bool ans=0;
        for(int i=1;i<n;i++){
            int c=1;
            while(v[i]==v[i-1]){
                c++;
                i++;
            }
            count.push_back(c);
        }
        
        /*for(int i=0;i<count.size();i++) cout<<count[i]<<" ";
        cout<<"\n";*/
        for(int i=0;i<count.size();i++) {
            if(count[i]==1) {
                ans=1;
                break;
            }
        }
        if(ans) {
            cout<<-1<<"\n";
            continue;
        }
        int temp=0;
        for(int i=0;i<count.size();i++){
            b.push_back(count[i]+temp);
            for(int j=0;j<count[i]-1;j++) b.push_back(temp+j+1);
            temp+=count[i];
        }
        if(!ans) for(int i=0;i<b.size();i++) cout<<b[i]<<" ";
        cout<<"\n";
    }
    return 0;
}
