#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int n;
        cin>>n;
        set<int>a;
        for(int i=1;i<32000;i++){
            if((i*i)<=n) a.insert(i*i);
        }
        for(int i=1;i<=1000;i++){
            if(i*i*i<=n) a.insert(i*i*i);
        }
        cout<<a.size()<<endl;
    }
    return 0;
}
