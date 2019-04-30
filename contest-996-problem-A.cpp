		//http://codeforces.com/contest/996/problem/A
		//Hit the Lottery
#include<bits/stdc++.h>
using namespace std ;

int main(){
	int n,count=0;
	cin>>n;
	if(n>=100){
		count=count+(n/100);
		n=n%100;
	}
	if(n>=20  &&  n<100){
		count=count+(n/20);
		n=n%20;
	}
	if(n>10 && n<20){
		count=count+(n/10);
		n=n%10;
	}
	if(n>=5  && n<10){
		count=count+(n/5);
		n=n%5;
	}
	if(n!=0  && n<5){
		count=count+(n/1);
	}
	cout<<count<<endl;
	return 0;
}
