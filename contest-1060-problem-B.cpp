//              http://codeforces.com/contest/1060/problem/B


#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll long long
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)
#define IOS ios_base::sync_with_stdio(false)

ll x=0,y=0,s=0,n=0,i=0;

int main(){
	cin>>n;
	x = n%10 ;
	if(n<10){
		cout<<n<<endl;
		return 0;
	}
	if(n>100){
		ll d=0,k=n/10;
		while(k){
			k=k/10;
			d *= (10);
			d+=9;
		//	cout<<d<<"   ";
			s+=9;
		//	cout<<s<<"   ss\n";
		}
		n -= d ;
		while(n){
			s+=(n%10);
			n/=10;
		}
	}
	else{
			//cout<<x<<" x "<<endl;
			y = -x+9;
			y = 10-y ;
			//cout<<y<<endl;
			if(n>=9)
		    n = n-y ;
		    while(n){
		    	s += (n%10);
		    	n/=10 ;
		    }
		    if(y==10){
		    	y=1;
		    }
		    s+=y;//cout<<s+y<<endl;
	}
	cout<<s<<endl;
    return 0;
}
