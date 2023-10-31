#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, k;
        cin>>n>>k;
        int mi=INT_MAX, e=0;
        vector<int>v(n);
        bool chk=0;
        for(int i=0;i<n;i++) {
            cin>>v[i];
            if(v[i]%2==0) e++;
            if(v[i]%k==0) chk=1;
        }
        if(chk){
            cout<<0<<"\n";
            continue;
        }
        for(int i=0;i<n;i++){
            mi=min(mi, k-(v[i]%k));
        }
        if(k==4)
		{
			if(e>=2)
				mi=0;
			else if(e==1)
				mi=min(mi,1);
			else
				mi=min(mi,2);
		}
        cout<<mi<<"\n";
    }
    return 0;
}
