#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0;i<n;i++) {
            v[i]=i+1;
        }
        if(n%2==0){
            for(int i=0;i<n-1;i++){
                swap(v[i],v[i+1]);
                i+=1;
            }
        }
        else{
            for(int i=0;i<n-4;i++){
                swap(v[i],v[i+1]);
                i+=1;
            }
            int temp=v[n-3];
            v[n-3]=v[n-2];
            v[n-2]=v[n-1];
            v[n-1]=temp;
        }
        for(int i=0;i<n;i++) cout<<v[i]<<" ";
        cout<<endl;
    }
    return 0;
}
