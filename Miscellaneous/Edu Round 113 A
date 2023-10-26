#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s,a;
        bool found = false;
        int lidx=-1, ridx=-1;

        cin>>s;
        int count=0,count1=0,count2=0;
        for(int x=n;x>1;x--){
            count1=count2=0;
            if(x%2==1) continue;
            for(int i=0;i+x-1<n;i++){
                if(i==0){
                    for(int j=0;j<x;j++){
                        if(s[j]=='a') count1++;
                        else count2++;
                    }
                } else {
                    if(s[i-1]=='a')count1--;
                    else count2--;
                    if(s[i+x-1]=='a')count1++;
                    else count2++;
                }
                
                if(count1==count2){
                    found=true;
                    lidx=i,ridx=i+x-1;
                    lidx++,ridx++;
                }

                if(found)break;

            }
            if(found)break;
        }

        cout<<lidx<<" "<<ridx;
        cout<<endl;
    }
    return 0;
}
