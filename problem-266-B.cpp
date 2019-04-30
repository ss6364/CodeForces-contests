//   http://codeforces.com/problemset/problem/266/B

#include<bits/stdc++.h>
using namespace std ;
int main(){
  int n=0,t=0;
  cin>>n>>t;
  //string s,a;
  char s[n] , a[n] ;
  cin>>s;
  while(t--){

  	  for(int i=0;i<n;++i){
  	  	if(i== n-1 && s[n-1]=='B'){
  	  		s[i];break;
  	  	}
	    if(s[i+1]=='G' && s[i]=='B'){
	       s[i+1]='B';
	       s[i]='G';
	        i++;
	    }
	    else {
	        a[i]=s[i];
	    }
	  }
	  //strcpy(s,a);
	    //cout<<a<<endl;
  }
  cout<<s<<endl;
  return 0;
}
