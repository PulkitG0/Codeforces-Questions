#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, hr=0, minute=0, count=0,t1=1500, t2=1500;
        cin>>n>>hr>>minute;
        int ti=(60*hr)+minute;
        for(int i=0;i<n;i++) {
            int a, b;
            cin>>a>>b;
            int tmp=(60*a)+b;
            if(tmp>=ti) {
                count++;
                t1=min(tmp, t1);
            }
            else{
                t2=min(t2, tmp);
            }
        }
        if(count){
            cout<<(t1-ti)/60<<" "<<(t1-ti)%60<<'\n';
        }
        else{
            cout<<(t2-ti+1440)/60<<" "<<(t2-ti+1440)%60<<"\n";
        }
    }
    return 0;
}   
