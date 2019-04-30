//	http://codeforces.com/contest/78/problem/B
//	Easter Eggs
#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,i,k=0,c=0;
	cin>>n;
	char str[10];
	str[0]= 'R' ;
	str[1]= 'O' ;
	str[2]= 'Y' ;
	str[3]= 'G' ;
	str[4]= 'B' ;
	str[5]= 'I' ;
	str[6]= 'V' ;
	k = n % 7 ;
	c= n / 7 ;
	for(i=0;i<c;i++){
		cout<<str;
	}
	c=3;
	c=c-(k/2);
	if(k!=0){
		
		for(i=c;i<c+k;i++){
			cout<<str[i];
		}	
	}
	return 0 ;
}
