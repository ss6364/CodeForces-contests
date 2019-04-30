//   https://codeforces.com/contest/1153/problem/C
//    Serval and Parenthesis Sequence

#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n;
	cin>>n;
	//char s1[n+1];
	string s,s1;
	cin>>s;
	if(n%2==1){
			cout<<":(";
			return 0;
	}
	int a=0,i,b=0,avg=0,d=0;
	for(i=0;i<n;i++){
		if(s[i]=='?'){
			d++;
		}
		else if(s[i]=='('){
			a++;
			avg+=1;
		}
		else if(s[i]==')'){
			b++;
			avg-=1;;
		}
		if( (avg<0 && d==0) || ((avg + d)<0) ){
			cout<<":(";
			return 0;
		}

	}
	if((s[n-1]=='?' && b==(n/2)) || a>(n/2)){
			cout<<":(";
			return 0;
	}
	else if(s[n-1]=='?' && b<(n/2)){
		s[n-1]=')';
		b++;
	}
	//cout<<a<<" "<<b<<" :: "<<s<<endl;
	avg=0;
	for(i=0;i<n;i++){
		//cout<<a<<" : "<<b<<" ; "<<s[i]<<endl;
		if( (s[i]=='?') && ((avg >= 0 && a<(n/2) ) || (b == (n/2) && a<(n/2) )) ){
			avg++;
			a++;
			s[i]='(';
		}
		else  if( (s[i]=='?') && ((avg >= 1 && b<n/2 ) || (a==(n/2) && b< (n/2))) ){
			avg--;
			b++;
			s[i]=')';
		}
		else if(s[i]==')'){
			avg--;
			//cout<<s[i];
		}
		else if(s[i]=='('){
			avg++;
			//cout<<s[i];
		}

		if(avg<=0 && i!=(n-1)){

			cout<<":(";
			return 0;
		}
	}
	cout<<s;

	//cout<<a<<" "<<b<<"::"<<avg;

	return 0;
}
