///    http://codeforces.com/problemset/problem/200/B

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n=0;
	cin>>n;
	int a[n];
	double sum=0,ans;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum=sum+a[i];
	}

	ans = double( sum / n );
	;
	cout<<setprecision( 12 )<<ans<<endl;
	return 0;
}
