 //    https://www.codechef.com/SEPT18B/problems/MAGICHF


#include <bits/stdc++.h>
using namespace std;


int main() {
	int t=0;
	cin>>t;
	while(t--){

			int n=0,x=0,s=0;
			cin>>n>>x>>s;
			bool a[n];
			for(int i=1;i<=n;i++){
				a[i]=0;
			}
			a[x]=1;
			int A=0,B=0,res=x;
			while(s--){
				cin>>A>>B;
				bool temp = a[A];
				a[A] = a[B];
				a[B] = temp ;
				if(a[B]==1){
					res = B;
				}
				else if(a[A]==1){
					res = A;
				}
			}
			cout<<res<<endl;
	}

	return 0;
}
