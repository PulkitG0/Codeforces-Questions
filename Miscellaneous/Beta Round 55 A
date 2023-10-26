#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    int a=0;
    for(int i=0;i<s.size();i++){
        if(s[i]<'a') a++;
    }
    if(a>(s.size()-a)){
        transform(s.begin(),s.end(), s.begin(), ::toupper);
    }
    else transform(s.begin(),s.end(), s.begin(), ::tolower);
    cout<<s;
    return 0;
}
