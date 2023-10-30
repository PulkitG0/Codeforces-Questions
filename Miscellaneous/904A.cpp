#include<bits/stdc++.h>
using namespace std;

int sumOfDigits(int n){
    int sum=0;
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int x, k;
        cin>>x>>k;
        for(int i=0;i<=20;i++){
            if(sumOfDigits(x)%k!=0) x++;
            else break;
        }
        cout<<x<<"\n";
    }
    return 0;
}
