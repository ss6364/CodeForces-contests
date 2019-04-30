//  http://codeforces.com/problemset/problem/961/B
//      Lecture Sleep
#include<bits/stdc++.h>
using namespace std ;

int main(){
	 int n,k,theo[100000],time[100000];
	 long long int res=0,max=0;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>theo[i];
	}
	for(int i=0;i<n;i++){
		cin>>time[i];
	}
	for(int i=0;i<n;i++){
		if(time[i]==1){
			res=res+theo[i];
			theo[i]=0;
		}
	}
	int pre[100000];
	pre[0]=theo[0];
	for(int i=1;i<n;i++){
		pre[i]=pre[i-1]+theo[i];
	}
	int value=0,dick[200000];

	//cout<<"  \n ";
	for(int i=0;i<=n-k;i++){
		dick[i]=pre[i+k+1]-pre[i+1];
	}
	for(int i=0;i<=n-k;i++){
		if(max<dick[i]){
			max=dick[i];
		}
	}

	cout<<res+max;
	//##testing

	return 0 ;
}
