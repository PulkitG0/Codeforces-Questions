#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a,b,c;
        if(n%3!=0) a=n/3+2;
        else a=n/3+1;
        b=a-1;
        c=a-2;
        if(a+b+c!=n){
            while(a+b+c!=n && b>c && c>0){
                if(c>1) c--;
                if(c==1 && a+b+c!=n) b--; 
            }
        }
        cout<<b<<" "<<a<<" "<<c<<endl;
    }
    return 0;
}
