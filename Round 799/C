#include<bits/stdc++.h>
using namespace std;
 
int main(){
    int t;
    cin>>t;
    while(t--){
        vector<vector<char>>v(8, vector<char>(8));
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++) cin>>v[i][j];
        }
        
        vector<int>c1(8, 0);
        vector<int>c2(8, 0);
        for(int i=0;i<8;i++){
            for(int j=0;j<8;j++){
                if(v[i][j]=='#') {
                    c1[i]++;
                    c2[j]++;
                }
            }
        }
        /*for(int i=1;i<7;i++) cout<<c1[i]<<" ";
        cout<<endl;
        for(int i=1;i<7;i++) cout<<c2[i]<<" ";
        cout<<endl;*/
        
        int x,y;
        bool a=0, b=0;
        for(int i=1;i<7;i++){
            if(c1[i-1]==2 && c1[i]==1 && c1[i+1]==2) {
                x=i+1;
                a=1;
            }
            if(a==true) break;
        }
        for(int i=1;i<7;i++){
            if(c2[i-1]==2 && c2[i+1]==2 && c2[i]==1) {
                y=i+1;
                b=1;
            }
            if(b==true) break;
        }
        cout<<x<<" "<<y<<endl;
    }
    return 0;
}
