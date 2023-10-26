#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long int a,b,c;
        cin>>a>>b>>c;
        bool vada;
        long int cd1,cd2,cd3,A,B,C;
        cd1=b-a;
        cd2=c-b;
        //cout<<cd1<<" "<<cd2<<" "<<cd3<<endl;
        A=b-cd2;
        C=b+cd1;
        //cout<<A<<" "<<B<<" "<<C<<endl;
        if(A%a==0 && A>=a){
            cout<<"YES \n";
            continue;
        }
        if(C%c==0 && C>=c){
            cout<<"YES \n";
            continue;
        }
        if((a+c)%2==0 && (a+c)/2>=b){
            if((a+c)/2==b || ((a+c)/2)%b==0) {
                cout<<"YES \n";
                continue;
            }
        }
        cout<<"NO \n";
    }
    return 0;
}
