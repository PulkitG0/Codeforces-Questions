#include<bits/stdc++.h>
using namespace std;
int main(){
	long long int n,m,a,ans;
	cin>>n>>m>>a;
	ans=(n/a + (n%a>0))*(m/a + (m%a>0));
	cout<<ans;
	return 0;
}
