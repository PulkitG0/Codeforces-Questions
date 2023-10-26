#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    string s;
    for(int i=0;i<5000;i++){
        string a=to_string(i);
        for(int j=0;j<a.size();j++){
            s.push_back(a[j]);
        }
    }
    cout<<s[k];
    return 0;
}
