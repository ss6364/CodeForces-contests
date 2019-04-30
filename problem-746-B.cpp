// http://codeforces.com/contest/746/problem/B
// DeCODER 
#include<bits/stdc++.h>
#include<string.h>
using namespace std ;
int main(){
	char str2[10000],str[10000],str1[10000];
	int n,len,i=0,j;
	cin>>n;
	cin>>str;
	
	for(j=0;j<n;j++){
		str2[j]=str[j];
	}i=0;
	if(n%2!=0){
		str2[n/2]=str[0];
	}int s=n/2;len = n-1;
            while(s--){
            	str2[i]=str[n-2];
            	str2[len]=str[n-1];
            i++;len--;
            n=n-2;//cout<<str2[i]<<" "<<str2[len]<<"\n";
            }cout<<str2<<" ";
           
 	//cout<<str;           
            //cout<<str2;
	return 0;
}
