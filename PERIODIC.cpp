//     https://www.codechef.com/SNCK1A19/problems/PERIODIC

#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll long long
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll x=0,y=0,s=0,n=0,i=0;

int main(){
    IOS;
    int t=0;
    cin>>t;
    while(t--){
    	n=0;
    	x=0;
    	cin>>n;
    	int a[n],diff=0,max = -1 ,index = -1 ;
    	bool flag = 0;
    	Fors(n){
    		cin>>a[i];
    		if(max<=a[i]){
    			max=a[i];
    			index=i;
    		}
    		if( a[i]-a[i-1]>1 && a[i]!=-1 && a[i-1]!=-1 ){
    			flag=1;
    		}
    	}
    	int var=0;
    	if(max==-1){
    		cout<<"inf"<<endl;
    	}
    	else if(flag==1){
    		cout<<"impossible"<<endl;
    	}
    	else{
    		for(i=index+1;i<n;i++){
    			if(a[i]==-1)x++;
	    		else if(a[i]>0){
	    			var=a[i];
	    			break;
	    		}
	    	}
	    	max+=x ;
	    	if( x == (n-index) && var == 0 ){
	    		cout<<"inf"<<endl;return 0;
	    	}
	    	max = max - var + 1;
	    	cout<<max<<endl;
    	}
    }
    return 0;
}
