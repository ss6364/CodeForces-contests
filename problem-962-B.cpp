//  http://codeforces.com/problemset/problem/962/B
#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,a,b,i;
	char arr[200000];
	cin>>n>>a>>b;//input 'a' are programmers and 'b' are athletes 
	for(i=0;i<n;i++){// initial arrangements
		cin>>arr[i];
	}
	int ath=0,prog=0;	
	int s,k;
	if(a>b){
	s=a;k=b;}
	else {
		s=b;k=a;
	}
	if(arr[0]=='.'){
		arr[0]='0';ath++;
	}

	for(i=1;i<n;i++){int p,q,temp;
			p=s-ath;q=k-prog;
		//if(q>=p){temp=p;p=q;q=temp;}
		if(arr[i]=='.'  && arr[i-1]!='0'  && ath<s && p>=q){
	
			arr[i]='0';//athelete occupying seat
			ath++;
		}
		else if(arr[i]=='.' && arr[i-1]!='1' && prog<k){
			arr[i]='1';
			prog++;
		}
	}
	/*
	// ## testing
	i=0;
	for(int j=0;j<n;j++){
		if(arr[j]=='0' || arr[j]=='1'){
			i++;
		}cout<<arr[j]<<" ";
	}cout<<i<<" ";
	// ## testing
	*/
	cout<<prog+ath;
	return 0;
}


/*test case
15 6 3
*.*.*.*.*.*.... 
*/
