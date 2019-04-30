//   http://codeforces.com/problemset/problem/339/B


#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n=0,q=0 ;
	cin>>q>>n ;
	ll a[n],k=0,sum=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];

		if( a[i-1] > a[i] && k!=0){
			sum = sum+ (q - ( a[i-1] - a[i] ) ) ;
			//cout<<sum<<" :: "<<i<<endl ;
		}
		else if( a[i-1] <= a[i] && k!=0){
			sum += ( a[i] - a[i-1] ) ;
			//cout<<sum<<" : "<<i<<endl ;
		}

		if( sum<=a[i] && k==0){
			sum=sum+a[i]-1;
			k=1;
		}

	}
	cout<<sum ;
	return 0;
}
