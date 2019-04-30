//    https://codeforces.com/contest/1150/problem/C
//      Prefix Sum Primes



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
    cin>>n;
    int a[n];
    For(n){
    	cin>>a[i];
    	if(a[i]==1){
    		x++;
    	}
    	else{
    		y++;
    	}
    }
    ll c2=y,c1=x;
    if(c1==0 || c2==0){
    	For(n){
    		cout<<a[i]<<" ";
    	}
    	return 0;
    }

    cout<<2<<" ";
    cout<<1<<" ";
    c1--;
    c2--;
    while(c2!=0){
    	cout<<2<<" ";
    	c2--;
    }
    while(c1!=0){
    	cout<<1<<" ";
    	c1--;
    }



    return 0;
}
