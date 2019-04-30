//   http://codeforces.com/problemset/problem/445/A

#include <bits/stdc++.h>
using namespace std;

int main() {
	int n=0,m=0;
	cin>>n>>m;
	char s[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>s[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
				if((i+j) %2==0 && s[i][j]=='.'){
					s[i][j]='B';
				}
				else if((i+j) %2!=0 && s[i][j]=='.'){
					s[i][j]='W';
					//cout<<i+j<<endl;
				}
				cout<<s[i][j];
		}
		cout<<"\n";
	}
	return 0;
}