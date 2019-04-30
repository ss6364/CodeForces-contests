#include<bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	int a[2][n];
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<n;j++){
			cin>>a[i][j];
		}
	}
	int s=0,c=0,k=0,s1,k1;
	for(i=0;i<n*2;i++){
		c=c+i*a[s][k];
		s1=s%2 + 1;
		k1=k%n +1;
		if(a[s][k1] > a[s1][k]){
			s=s1;
		}
		else {
			k=k1;
		}
	}
	cout<<c;
	return 0;
}
