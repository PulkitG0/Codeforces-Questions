#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    int t;
    cin>>t;
    while(t--){
        int x,count=0;
        cin>>x;
        vector<int>v(3);
        for(int i=0;i<3;i++) cin>>v[i];
        bool chk=0;
        while(chk==0){
            if(v[x-1]==0){
                chk=1;
                break;
            }
            else{
                x=v[x-1];
                count++;
            }
        }
        if(count<2) cout<<"NO \n";
        else if(count==2) cout<<"YES \n";
    }
    return 0;
}
