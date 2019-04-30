// SEA BATTLE
//    https://codeforces.com/contest/1131/problem/A


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
    ll w1,w2,h1,h2 ;
    cin>>w1>>h1>>w2>>h2;
    n = w1 + 2 + (2*h1) ;
    s = w2 + 2 + (2*h2) ;
    if(abs(w1-w2) > 0 ){
    	n +=abs(w1-w2);
    }

    cout<<n+s<<endl;
    return 0;
}
