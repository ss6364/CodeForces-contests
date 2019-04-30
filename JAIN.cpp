//    https://www.codechef.com/MARCH19B/problems/JAIN
//                CHEF GOT RECIPES



#include<bits/stdc++.h>

using namespace std ;


int main(){
 	int t=0;
 	cin>>t ;
 	while(t--){
 		int n=0,i;
 		cin>>n;
 		int a[n+1][5];

 		memset(a,0,sizeof(a));

 		for(i=0;i<=n;i++){
 			string s;
 			getline(cin,s);
 			//cout<<s<<endl;
 			for(int j=0;j<s.length();j++){
 				if(s[j]=='a'){
 					a[i][0]=1;
 				}
 				if(s[j]=='e'){
 					a[i][1]=1;
 				}
 				if(s[j]=='i'){
 					a[i][2]=1;
 				}
 				if(s[j]=='o'){
 					a[i][3]=1;
 				}
 				if(s[j]=='u'){
 					a[i][4]=1;
 				}
 			}
 		}
 		/*

 		print bit masked array

 		for(i=1;i<=n;i++){
 			for(int j=0;j<5;j++){
 				cout<<a[i][j]<<" : ";
 			}
 			cout<<endl;
 		}
 		*/
 		int count=0 , d=0;
 			for(i=1;i<=n-1;i++){
 				for(int j=i+1;j<=n;j++){
 					for(int k=0;k<5;k++){
 						if( (a[i][k]||a[j][k])){
 							d++;
 							/*

 							check++++++++++++++++++++++++++++++++++++++

 							if(d==5){
 								for(int q=0;q<=n;q++){
 									cout<<" .. "<<a[i][q];
 								}
 								cout<<endl;
 								for(int q=0;q<=n;q++){
 									cout<<" .. "<<a[j][q];
 								}
 								cout<<endl;
 							}
 							cout<<a[i][k]<<"  :  "<<a[j][k]<<" ||| "<<i<<": "<<j<<" ||| q= "<<k<<endl;

 							+++++++++++++++++++++++++++++++++++++++++++
 							*/
 						}
 					}
 					if(d==5){
 						count++;

 					}
 					d=0;
 				}
 			}
 			cout<<count<<endl;

 	}
 	return 0;
 }
