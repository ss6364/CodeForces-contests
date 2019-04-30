//     http://codeforces.com/contest/1051/problem/B


#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll long long
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)

ll l=0,r=0,s=0,n=0,i=0;

int main(){
	int k ;
	cin>>l>>r ;
	k = r - l+1 ;
	k /= 2 ;
    if(k<1){
    	cout<<"No"<<endl;
    }
    else{   cout<<"YES"<<endl;
    	for(i=l;i<r;i+=2){
    		cout<<i<<" "<<i+1<<endl;
    	}
    }
    return 0;
}
