#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> inp(int n){
    vector<vector<int>>v(n);
    for (int i = 0; i < n; i++){
        v[i].resize(5);
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<5;j++){
            cin>>v[i][j];
        }
    }
    return v;
}

bool is_possible(int a,int b,int n, vector<vector<int>> &v){
    int count1=0,count2=0,count3=0;
    for(int i=0;i<n;i++){
        if(v[i][a]==1) count1++;
        if(v[i][b]==1) count2++;
        if(v[i][a]==0 && v[i][b]==0)count3++;
    }

    if(count1>=n/2 && count2>=n/2 && count3==0) return 1;
    else return 0;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> v = inp(n);

        bool flag = false;

        for(int a=0;a<5;a++){
            for(int b=a+1;b<5;b++){
                if(is_possible(a,b,n,v))flag=true;
            }
        }

        if(flag)cout<<"YES\n";
        else cout<<"NO\n";
    }
    return 0;
}
