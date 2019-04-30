//       http://codeforces.com/problemset/problem/931/A
//         Friends Meeting
#include<bits/stdc++.h>
using namespace  std ;
int main(){
	int a,b,i=0,k=0;
	cin>>a>>b;
	int c=a-b;
	if(a<b){
		c*=-1;
	}
	if(c<2){
		cout<<"1"<<"\n";
		return 0 ; 
	}
	int x=0,y=0;
	k=c/2;
	c=c-k;
	for(i=1;i<=c;i++){
		x+=i;
	}
	for(i=1;i<=k;i++){
		y+=i;
	}
	cout<<x+y<<"\n";
	return 0;
	
}
