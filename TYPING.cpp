///    TYPING
//   https://www.codechef.com/SNCK1A19/problems/TYPING


#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll int
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll x=0,y=0,n=0,i=0;

int main(){
    IOS;
    int t=0;
    cin>>t;
    while(t--){
    		cin>>n;
		    string s[n];
		    int a[n];
		    memset(a,0,sizeof(a));
		    for(i=0;i<n;i++){
		    	cin>>s[i];
		    	int sum=0;
		    	bool flag=false;
		    	for(x=0;x<s[i].length();x++){
		    		if(x==0){
		    			sum=+2;
		    			if(s[i][x]=='j' || s[i][x]=='k')flag=1;
		    		}
		    		else{

		    			if(s[i][x]=='d' && flag==0){
		    				sum+=4;
		    				flag=0;
		    			}
		    			if(s[i][x]=='d' && flag==1){
		    				sum+=2;
		    				flag=0;
		    			}
		    			if(s[i][x]=='f' && flag==0){
		    				sum+=4;
		    				flag=0;
		    			}
		    			if(s[i][x]=='f' && flag==1){
		    				sum+=2;
		    				flag=0;
		    			}
		    			if(s[i][x]=='j' && flag==1){
		    				sum+=4;
		    				flag=1;
		    			}
		    			if(s[i][x]=='j' && flag==0){
		    				sum+=2;
		    				flag=1;
		    			}
		    			if(s[i][x]=='k' && flag==1){
		    				sum+=4;
		    				flag=1;
		    			}
		    			if(s[i][x]=='k' && flag==0){
		    				sum+=2;
		    				flag=1;
		    			}
		    		}
		    	}
		    	a[i]=sum;
		    	for(int j=0 ; j<i ;j++){
		    		if(s[i]==s[j]){
		    			a[i] = a[j]/2 ;
		    			break;
		    		}
		    	}
		    }

		    For(n){
		    	//cout<<a[i]<<" ";
		    	y+=a[i];
		    }
		    cout<<y<<endl;
    		y=0;
    }

    return 0;
}
