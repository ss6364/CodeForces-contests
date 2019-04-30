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
            s=0;
		int k=0;
			cin>>n>>k;
		    int a[n];
		    For(n){
		        cin>>a[i];
		    }
		    sort(a,a+n);
		    For(n){
		        if( a[i]>k ){
		            x = i ;
		            break;
		        }
		    }
		    for(i=x;i<n-1;i++){
		        if(a[i]>k && a[i+1]>k){
		            y = a[i]-k ;
		            a[i] = k ;
		            a[i+1] -= y ;
		        }
		    }
		    For(n){
		        s+=a[i];
		    }
		    cout<<s<<endl;
	}
	return 0;
}
