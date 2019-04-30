//      https://www.codechef.com/problems/COOK82B


#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll long long
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)
#define MOD 1000000007
#define mod 100000

ll x=0,y=0,s=0,n=0,i=0;
vint(v);
bool prime[mod] ;


void seive(){
    int t ;
    For(mod){
        prime[i] = 1 ;
    }

    prime[1]=0 ;
    prime[0]=0 ;
    for(i=2;i<100000;i++){
        if(prime[i]=1){
            v.pb(i);
            for(j=i*i;j<100000;j+=i){
                prime[i] = 0 ;
            }
        }
    }
}

int main(){
    cin>>n ;
    int a[n];
    For(n){
        cin>>a[i];
    }
    For(n){

    }


    return 0;
}
