// http://codeforces.com/contest/66/problem/B
//      Petya and Countryside
#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,a[10000],i,j,count=0;
	cin>>n;
	for(i=0;i<n;i++){
		cin>>a[i];
	}
	int c[1000];j=0;i=0;int k=n,max=0;
	while(k--){count=0;
		if(i!=n-1){
			for(j=i;j<n-1;j++){
				if(a[j]>=a[j+1]){
					count++;
				}
				else{
					break;
				}
			}
	    }
			if(i!=0){
				for(j=i;j>0;j--){
					if(a[j]>=a[j-1]){
					   count++;//cout<<count<<" ";
				    }
				    else{
					   break;
				    }
				}
			}
			
			c[i]=count;
			i++;
			if(max<count){
				max=count;
			}
			//cout<<count<<" ";
	}
	cout<<max+1<<"\n";
	return 0;
}
