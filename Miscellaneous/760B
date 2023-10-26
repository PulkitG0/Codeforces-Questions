#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n==3){
            string x;
            cin>>x;
            x+="a";
            cout<<x;
            cout<<endl;
            continue;
        }
        string a;
        vector<string>v(n-2);
        for(int i=0;i<n-2;i++){
            cin>>v[i];
        }
        for(int j=0;j<n-2;j++){
            if(v[j][1]!=v[j+1][0]){
                if(v[j][1]=='a' && v[j+1][0]=='a') v.insert(v.begin()+j+1,"aa");
                else if(v[j][1]=='a' && v[j+1][0]=='b') v.insert(v.begin()+j+1,"ab");
                else if(v[j][1]=='b' && v[j+1][0]=='a') v.insert(v.begin()+j+1,"ba");
                else v.insert(v.begin()+j+1,"bb");
                break;
            }
            else if(v[n-3][1]=='a') v.push_back("aa");
            else v.push_back("bb");
        }
        for(int i=0;i<n-1;i++) a+=v[i][0];
        a+=v[n-2][1];
        cout<<a;
        cout<<"\n";
    }
    return 0;
}
