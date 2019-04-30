// https://www.codechef.com/LTIME61B/problems/NUM239

#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,l,r,count=0;
	cin>>n;
	while(n--){
		cin>>l>>r;
		int set=r-l;
		int remain=l%10;
		if(set<10){
			for(int i=l;i<r;i++){
				if(i%10==3 || i%10==2 || i%10==9){
					count++;
				}
			}
		}
		else {
				if(remain<=2 && r-l>9){
					count=3;
					l=l+(10-(l%10));
				}
				else if(remain<=3 && r-l>9){
					count=2;
					l=l+(10-(l%10));
				}
				else if(remain<=9 && r-l>9){
					count=1;
					l=l+(10-(l%10));
				}
				int re=r%10;
				if(re==2){
					count=count+1;
					r=r-(r%10);
				}
				else if(re<=8 ){
					count=count+2;
					r=r-(r%10);
				}
				else if(re>8){
					count=count+3;
					r=r-(r%10);
				}
				
				set=r-l;
				//cout<<set;
				if(set%10==0){
					count=count+3*(set/10);
				}
		}
		cout<<count<<endl;		
	}
	
	return 0 ;
} 
