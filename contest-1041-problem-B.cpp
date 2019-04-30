//     http://codeforces.com/contest/1041/problem/B

#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll long long
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}



int main(){
	ll a,b,x,y ;
	cin>>a>>b>>x>>y ;
	ll s = gcd(x,y);
	if( s>1 ){
		x=x/s ;
		y=y/s ;
	}

	ll f1=0,f2=0 ;
	f1 = (a - (a%x))/x ;
	f2 = (b - (b%y))/y ;
	cout<<min(f1,f2)<<endl;
     return 0;
}
