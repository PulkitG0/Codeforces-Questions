#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        set<int>final;
        vector<int>v(n);
        map<int,int>count;
        for(int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(), v.end());

        for(int i=1;i<=n;i++){
            count[(v[i-1])]++;
        }
        for(int i=-100;i<=100;i++){
            for(int j=0;j<n;j++){
                if (count[i]!=0 && v[j]==i){
                    v[j]*=-1;
                    break;
                }
            }
        }
        for(int i=0;i<n;i++){
            final.insert(v[i]);
        }
        cout<<final.size()<<" \n";
    }
    return 0;
}
