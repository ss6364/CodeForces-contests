//   http://codeforces.com/contest/439/problem/B


#include <bits/stdc++.h>
using namespace std;

int main() {
	long long n,x=0;
	cin>>n>>x;
	long long a[n],i,k=0;
	long long sum=0;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	for(i=0;i<n;i++){
		if(x<1){
			x=1;
		}
		sum=sum+(a[i]*x);
		if(x>1){
			x--;
		}
	}
	cout<<sum<<endl;
	return 0;
}
