 //   http://codeforces.com/contest/1037/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define For(n) for(int i=0;i<n;i++)
int main() {
	ll n=0,s=0;
	cin>>n>>s;
	ll a[n];
	for(ll i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	ll sum=0;
	int k=n/2;
	if(a[k] <= s){
		for(ll i=n/2;i<n;i++){
			if(a[i]<s){
				sum += (s-a[i]);
			}
			else{
				break;
			}
		}
		cout<<sum<<endl;
	}
	else{
		for(ll i=n/2;i>=0;i--){
			if(a[i]>s){
				sum += (a[i]-s);
			}
			else{
				break;
			}
		}
		cout<<sum<<endl;
	}


	return 0;
}
