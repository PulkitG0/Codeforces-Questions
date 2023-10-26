#include<bits/stdc++.h>
using namespace std;
int count(string c){
	int count_1=0;
	for(int i=0; i<c.size();i++){
		if (c[i]=='+') count_1 += 1;
	}
	return count_1;
}
void array_conv(string orig, string b[], int n){
	int i=0;
	for (int j=0;j<orig.size();j++){
		if(orig[j]=='+'){
            i++;
        } else{
            b[i]+=orig[j];
        }
	}
	return;
}
int pow(int x){
    int exp=1;
    for (int i=0;i<x;i++){
        exp *=10;
    }
    return exp;
}
int ret_num(string s){
	int num=0;
	for (int i=0;i<s.size();i++){
		num += (s[i]-'0')*pow(s.size()-i-1);
	}
	return num;	
}
void bub_sort(int a[], int n){

	for (int x=0;x<(n-1);x++){
		for (int i=0; i<(n-x);i++){
			if (a[i]>a[i+1]){
				int t=a[i];
				a[i]=a[i+1];
				a[i+1]=t;
			}
		}
	}
	return;
}
int main(){
    string s;
    cin>>s;
    int r=count(s);
    string a[r+1];
    array_conv(s, a, r+1);
    int ans[r+1];
    for (int i=0;i<r+1;i++){
        ans[i]=ret_num(a[i]);
    }
    bub_sort(ans,r+1);
    for(int i=0;i<r+1;i++){
        cout<<ans[i];
        if (i!=r) cout<<"+";
    }
    return 0;
}
