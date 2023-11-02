#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int a[5];
		for(int i=1;i<=3;i++)
		cin>>a[i];
		sort(a+1,a+4);
		if(a[2]%a[1]==0&&a[3]%a[1]==0&&(a[3]/a[1]-1)+(a[2]/a[1]-1)<=3)
		cout<<"YES\n";
		else
		cout<<"NO\n";
	}
}
