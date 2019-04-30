//           https://www.codechef.com/SNCKQL19/problems/QUALPREL


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
    IOS;
    int t=0;
    cin>>t;
    while(t--){
    	x = 0;
        cin>>n >>x;
        int a[n],count=0;
        For(n){
            cin>>a[i];
        }
        sort(a,a+n,greater<>());
        //For(n){
        //	cout<<i<<"  "<<a[i]<<endl;
      //  }

        for(i=x;i<n;i++){
            if(a[i]==a[x-1]){
                count++;
            }
            else{
                break;
            }
        }
        //cout<<count<<"  count      ";
        cout<<x+count<<endl;

    }

    return 0;
}
