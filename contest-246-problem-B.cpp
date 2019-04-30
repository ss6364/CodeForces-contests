//    http://codeforces.com/problemset/problem/913/B
//   Christmas SPRUCE


#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n=0;
	cin>>n;
	int a[n+1],i,b[n+1],s=0;
	map<int,stack<int>> mp ;
	memset(b,0,sizeof(b));
	a[1]=0;
	for(i=2;i<=n;i++){
		cin>>a[i];
		b[a[i]]++;
		mp[a[i]].push(i);
	}
	
	bool flag=0 ;
	for(i=1;i<=n;i++){
		if(b[i]<3 && b[i]>0){
			cout<<"No\n";
			return 0;
		}
		else if( b[i]>=3 ){
			s=0;
			while(!mp[i].empty()){
				if(b[mp[i].top()]==0){
					//cout<<i<<" :: "<<mp[i].top()<<endl;
					s++;
				}
				mp[i].pop();
			}
			if(s>=3){
				flag = 1;
			}
			else {
				flag=0;
				break;
			}
		}
	}
	if(flag==1){
		cout<<"Yes";
	}
	else{
		cout<<"No";
	}
	
	return 0;
}