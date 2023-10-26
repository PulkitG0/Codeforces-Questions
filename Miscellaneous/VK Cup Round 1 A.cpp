#include<bits/stdc++.h>
using namespace std;
int main(){
	int k,n,ans;
	cin>>n>>k;
	int a[n];
	ans=0;
	for (int i=0; i<n;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		if(a[i]>0 && a[i]>=a[k-1])ans++;
	}
	cout<<ans;
	return 0;
}
