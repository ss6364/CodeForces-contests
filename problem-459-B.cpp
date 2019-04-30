//       http://codeforces.com/problemset/problem/459/B

#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll long long
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)

ll x=0,y=0,s=0,n=0,i=0;

int main(){
    cin>>n ;
    int a[n] ;
    For(n){
        cin>>a[i];
    }
    sort(a,a+n);
    int min = 0,max = 0 ;
    For(n){
        if(a[i]==a[0]){
            min++;
        }
        if(a[i]==a[n-1]){
            max++ ;
        }
    }
    cout<<abs(a[0]-a[n-1]);
    if(a[0]!=a[n-1]) cout<<" "<<(min*max)<<endl ;
    else cout<<" "<<((n-1)*n)/2<<endl;
    return 0;
}
