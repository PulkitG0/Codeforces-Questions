#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long int b=0,a,s;
        cin>>a>>s;
        int p,q,n=1;
        for(;a>0;){
            p=a%10;
            q=s%10;
            if((q-p)<0){
                q=s%(10*10);
                s/=10;
            }
            //cout<<p<<" "<<q<<" "<<s<<" ";
            if((q-p)<0 || (q-p)>9){
                b=-1;
                break;
            }
            b+=n*(q-p);
            n*=10;
            a=a/10;
            s/=10;
            //cout<<a<<" "<<s<<" "<<n;
            //cout<<"\n";
        }
        if(b!=-1) b+=n*s;
        cout<<b<<endl;
    }
    return 0;
}
