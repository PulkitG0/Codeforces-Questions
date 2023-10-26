#include<bits/stdc++.h>
using namespace std;
long long int ret_digcount(long long num){
    vector<long long int>rng(13,0);
    rng[0]=9;
    for(int i=1;i<13;i++){
        rng[i]=10*rng[i-1];
    }
    long long int t=0, idx=0;
    for(int i=0;i<13;i++){
        idx=i;
        if(t+rng[i]>num) break;
        else t+=rng[i];
    }
    long long int digits=0;
    for(int i=0;i<idx;i++) {
        digits+=(i+1)*rng[i];
        num-=rng[i];
    }
    digits+=(idx+1)*num;
    return digits;
}
int main(){
    long long int k;
    cin>>k;

    long long int hi=1e12, lo=1, mid=(hi+lo)/2;
    while(hi-lo>1){
        if(k>ret_digcount(mid)) lo=mid;
        else hi=mid;
        mid=(hi+lo)/2;
        //if(hi<500)cout<<mid<<" "<<hi<<" "<<lo<<endl;
    }
    if(ret_digcount(lo)==k)cout<<lo%10;
    else{
        long long int pos = ret_digcount(hi)-k;
        while(pos--){
            hi/=10;
        }
        cout<<hi%10;
    }
    return 0;
}
