#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        int idxl=-1,idxr=-1,count=0,vada=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='a') {
                idxl=idxr=i;
                vada++;
            }
        }
        if(vada>1){
            cout<<"NO"<<endl;
            continue;
        }
        //cout<<idxl<<" "<<idxr<<endl;
        if(idxl==-1 && idxr==-1) {
            cout<<"NO"<<endl;
            continue;
        }
        for(int i=0;i<s.size();i++){
            if(s[idxl-1]==('a'+i)) {
                count++;
                idxl-=1;
                //cout<<idxl<<" vv"<<endl;
                continue;
            }
            else if(s[idxr+1]==('a'+i)) {
                count++;
                idxr+=1;
                //cout<<idxr<<" uu"<<endl;
                continue;
            }
        }
        if(count+1==s.size()) cout<<"YES \n";
        else cout<<"NO \n";
    }
    return 0;
}
