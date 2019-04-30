//		http://codeforces.com/contest/79/problem/B
//		Colorful Field

#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,m,k,q;
	cin>>n>>m>>k>>q;
	int k2=k;
	int x[1001],y[1001],a,b,i=1,count=0,var=0,temp=0;
	while(k2--){
		cin>>x[i]>>y[i];
		i++;
	}
	int flag=1;
	while(q--){
			cin>>a>>b;
			count=(a-1)*m + (b-1);
			for(i=1;i<=k;i++){
				if(x[i]<=a){
					var++;
				}
				
				if(x[i]==a && y[i]>b){
					temp++;
				}
				if(x[i]==a && y[i]==b){
					cout<<"Waste"<<"\n";
					flag=0;
				            
				}
			}
		//	cout<<"var : "<<var<<"  temo : "<<temp<<"\n";
			if(flag!=0){
				var=var-temp;
				count=count-var;
				//cout<<count<<"\n";
				if(count%3==0){
					cout<<"Carrots"<<"\n";
				}
				else if(count%3==1){
					cout<<"Kiwis"<<"\n";
				}
				else if(count%3==2){
					cout<<"Grapes"<<"\n";
				}
				
			}
			var=0,temp=0,count=0;		
			flag++;
	 }
	
//	cout<<var<<"var  "<<count;
	
	
	return 0;
}
