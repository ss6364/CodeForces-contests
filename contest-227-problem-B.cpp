//          http://codeforces.com/contest/227/problem/B

#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll int
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)

ll x=0,y=0,s=0,n=0,i=0;

map < int ,int >  mpp ;
int main(){
	cin>>n ;
	ll  a[n] ;
	Fors(n){
		cin>>a[i];
		mpp.insert({a[i],i});
	}
	int q,k ;
	long long s=0,t=0 ;
	cin>>q;
	while(q--){
		cin>>k ;
		s += mpp[k] ;
		t += (n-mpp[k])+1 ;
	}
	cout<<s<<" "<<t ;
    return 0;
}
