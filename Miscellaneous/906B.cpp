#include<bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin>>k;
    while(k--){
        int n,m,flag=0;
	    cin>>n>>m;
	    string s,t;
	    cin>>s>>t;
	    for(int i=1;i<m;i++){	
	        if(t[i]==t[i-1]){	
		        flag=1;
			    break;
    		}
	    }
	    bool chk=0;
    	for(int i=1;i<n;i++){	
    	    if(s[i-1]==s[i]){	
    	        if(s[i-1]==t[0] || s[i]==t[m-1] || flag){	
			        chk=1;
			        break;
    			}
		    }
	    }
	    if(chk) cout<<"No \n";
	    else cout<<"Yes \n";
	//cout<<"YES\n";
    }
    return 0;
}
