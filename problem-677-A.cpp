//  http://codeforces.com/contest/677/problem/A
//    Vanya and Fence
#include<bits/stdc++.h>
using namespace std ;
int main (){
	int n,max_height ,heights[10000],s=0;
	cin>>n>>max_height;
	for(int i=0;i<n;i++){
		cin>>heights[i];
		if(heights[i]>max_height){
			s=s+2;
		}
		else{
			s+=1;
		}
	}
	cout<<s;
	return 0;
}
