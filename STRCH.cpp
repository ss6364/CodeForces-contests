//   https://www.codechef.com/APRIL19B/problems/STRCH


#include<bits/stdc++.h>
using namespace std ;
int main(){
	int t=0;
	cin>>t;
	while(t--){
			string s;
			char c;
			int n=0;
			cin>>n ;
			long long i,k=0,cnt=0;
			cin>>s>>c;
			long long dick = 0;
			k = s.length();
			
			dick = (k*(k+1));
			dick/=2;
			//cout<<dick<<endl;
			
			for(i=0;i<s.length();i++){
				if(s[i]==c){
					k=cnt;
					long long d = (k*(k+1))/2;
					dick-=d ;
					//cout<<k<<" :: ";
					cnt=0;
				}
				else{
					cnt++;
				}
			}
			if(cnt!=0){
				k = cnt ;
				long long d = (k*(k+1))/2;
				dick-=d ;	
			}
			cout<<dick<<"\n";
	}
	
	return 0;
}