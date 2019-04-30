#include<bits/stdc++.h>
using namespace std ;
int main(){
	int k,s=0;
	cin>>s>>k;
	while(k--){
		if(s%10==0){ 
			s=s/10;
		}
		else{
			s=s-1;
		}
	}cout<<s;
	
	return 0 ;
}
