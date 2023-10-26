#include<bits/stdc++.h>
using namespace std;

int main(){
	int ans,a,b,c,n;
	cin>>n;
	ans=0;
	for (int i =0;i<n;i++){
		cin >> a>> b >> c ;
		if (a+b+c>=2){
			ans += 1;
		}		
	}
	cout<<ans<<endl;
	return 0;
}
