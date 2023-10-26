#include<bits/stdc++.h>
using namespace std;

int main(){
	string s;
	cin>>s;
	int count[26];
	int ans=0;
	for (int i=0;i<26;i++){
		count[i]=0;
	}
	for (int i=0;i<s.size();i++){
		int idx=s[i]-'a';
		count[idx]++;
	}
	for(int i=0;i<26;i++){
	    if(count[i]>=1) ans++;
	}
	if (ans%2==0){
		cout<<"CHAT WITH HER!";
	}
	else {
		cout<<"IGNORE HIM!";
	}
	return 0;
}
