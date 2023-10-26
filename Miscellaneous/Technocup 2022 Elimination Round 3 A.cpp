#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,height=1,count=0;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++) cin>>a[i];
        for(int i=0;i<n;i++){
            if(a[i]){
                if(i)height+=(a[i-1])?5:1;
                else height++;
            } else{
                if(i){
                    if(!a[i-1]){
                        height=-1;
                        break;
                    }
                }
            }
        }
        cout<<height<<"\n";
    }
    return 0;
}
