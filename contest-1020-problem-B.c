//    http://codeforces.com/contest/1020/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n=0,i,j=0;
	cin>>n;
	int a[n],c[n];
	for(i=1;i<=n;i++){
		cin>>a[i];
		c[i]=0;
	}
	int k=0;
	for(i=1;i<=n;i++){
		j=i;
		k=j;
		while(c[k]!=2){
			k=j;
			c[j]++;
			j=a[j];
		}
		for(int s=1;s<=n;s++){
			c[s]=0;
		}
		cout<<k<<" ";
	}
	return 0;
}
