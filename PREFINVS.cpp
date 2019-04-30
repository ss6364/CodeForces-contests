//    https://www.codechef.com/problems/PREFINVS


#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll long long
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)

ll x=0,y=0,s=0,n=0,i=0;
bool flag = false  ;

int main() {
	string s;

	cin>>s ;
	ll l = s.length();
	bool a[l] ;
	for( i=0 ; i<s.length() ; i++ ){
		if( s[i] == '1' ){
			a[i]=true ;
		}
		else{
		    a[i] = false ;
		}

	}

	ll count=0 ;

	for( i=s.length()-1 ; i>=0 ; i-- ){
		if(a[i]==1){
			count++;
			for(ll j=0 ; j<=i ; j++){
				a[j]=!a[j] ;
			}
		}

	}

	cout<<count<<endl ;
	return 0;
}
