#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int rem=n%10;
        int q=n/10;
        if(n%7==0) {
            cout<<n<<" \n";
            continue;
        }
        else {
            for(int i=0;i<=9;i++){
                if(((q*10)+i)%7==0){
                    cout<<((q*10)+i)<<" \n";
                    break;
                }
            }
        }
    }
    return 0;
}
