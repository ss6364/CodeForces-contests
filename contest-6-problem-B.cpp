//  http://codeforces.com/contest/6/problem/B

#include <bits/stdc++.h>
using namespace std;

int main() {
	int j,n=0,m=0,i,count=0;
	char c;
	cin>>n>>m;
	cin>>c;
	char a[n][m];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cin>>a[i][j];
		}
	}
	/*for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			cout<<a[i][j];
		}cout<<endl;
	}  /*/
	std::set<char> set;
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(a[i][j]==c){
				if(a[i-1][j]!='.' && a[i-1][j]!=c && i!=0){
					set.insert( a[i-1][j] );
				}
				if( a[i+1][j]!='.' && a[i+1][j]!=c && i<n-1){
					set.insert( a[i+1][j] );
				}
				if(a[i][j+1]!='.' && a[i][j+1]!=c && j<m-1){
					set.insert( a[i][j+1] );
				}
				if(a[i][j-1]!='.' && a[i][j-1]!=c && j!=0){
					set.insert( a[i][j-1] );
				}
			}
		}
	}
	count=set.size();
	cout<<count<<endl;
	return 0;
}
