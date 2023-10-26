#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int num;
        cin>>num;
        if(num>=1900) cout<<"Division 1";
        if(num>=1600 && num<=1899) cout<<"Division 2";
        if(num>=1400 && num<=1599) cout<<"Division 3";
        if(num<=1399) cout<<"Division 4";
        cout<<endl;
    }
    return 0;
}
