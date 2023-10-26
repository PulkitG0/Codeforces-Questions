#include<bits/stdc++.h>
using namespace std;

int give_odd(int num){
    while(num%2==0)num/=2;
    return num;
}

void solve(){
    int n;
	int p=0;
	long long int ans=0;
	long long int max_no=0;
	int ev_no=0;
    cin>>n;
    long long int a[n];
    
	for(int x=0;x<n;x++){
		cin>>a[x];
	}
	
	for(int x=0;x<n;x++){
		int odd = give_odd(a[x]);
		if(max_no < odd){
		    max_no = odd;
		    p = x;
		}
	}
	
	
	
// 	cout<<"max_no : "<<max_no<<" p : "<<p<<"\n";
// 	for(int i=0;i<n;i++)cout<<a[i]<<" "; cout<<"\n";
	
	for(int j=0;j<n;j++){
		if(j!=p){
			ev_no=a[j];
			while(ev_no%2==0){
				ev_no=ev_no/2;
				a[p]*=2;
				if (ev_no%2==1) a[j]=ev_no;
			}
		//	cout<<"j = "<<j<<" a[p] = "<<a[p]<<"\n";
		}
	}
// 	cout<<"max_no : "<<max_no<<"\n";
// 	for(int i=0;i<n;i++)cout<<a[i]<<" "; cout<<"\n";
	
	for(int i=0;i<n;i++){
		ans += a[i];
	}
	
	cout<<ans<<endl;
}
int main(){
	int t;
	cin>>t;
	for(int i=0;i<t;i++){
        solve();
	}
	return 0;
}
