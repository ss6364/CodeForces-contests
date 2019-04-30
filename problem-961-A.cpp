//  http://codeforces.com/problemset/problem/961/A
//     TETRIS POINTS CALCULATOR
#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,m,a[100000],count[10000],k,s;
	cin>>n>>m;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	for(int i=0;i<m;i++){
		count[a[i]]++;
	}
	sort(count,count+n+1);

	cout<<count[1];
	return 0;
}
