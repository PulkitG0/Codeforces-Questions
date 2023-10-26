#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main(){
	ll t;
	cin>>t;
	while(t--){
		ll n, q;
		cin>>n>>q;
		vector<ll>v(n), a(q), b(q);
		ll o=0, e=0;
		for(int i=0;i<n;i++) {
		    cin>>v[i];
		    if(v[i]%2==1) o++;
		    else e++;
		}
		for(int i=0;i<q;i++){
		    cin>>a[i]>>b[i];
		}
		ll ans=0;
		for(int i=0;i<n;i++) ans+=v[i];
		for(int i=0;i<q;i++){
		    if(a[i]==1){
		        ans+=b[i]*o;
		        if(b[i]%2){
		            e+=o;
		            o=0;
		        }
		    }
		    else{
		        ans+=(b[i]*e);
		        if(b[i]%2){
		            o+=e;
		            e=0;
		        }
		    }
		    cout<<ans<<"\n";
		}
	}
	return 0;
}
