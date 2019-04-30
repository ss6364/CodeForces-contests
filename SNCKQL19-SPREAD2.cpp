#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll long long
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)
#define IOS ios_base::sync_with_stdio(false)


int main(){
	IOS;
	int t=0;
	cin>>t ;
	while(t--){
		int n=0;
		cin>>n;
		int a[n],sum[n] ;
		//cin>>a[0];
		//sum[0] = a[0] ;
		for(int i=0;i<n;i++){

			cin>>a[i];
			if(i==0){
                sum[i]=a[i];
			}
			else
			sum[i] = sum[i-1] + a[i] ;
		}
		int set = 0 ;
		int count = 1 ;
		int days = 0;
		while(count<n){
			count+=sum[set];
			days++;
			set = count - 1 ;
		}
		cout<<days<<"\n";
	}
 return 0 ;
}
