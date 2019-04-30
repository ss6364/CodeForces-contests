// http://codeforces.com/problemset/problem/32/B


#include<bits/stdc++.h>
using namespace std ;
int main(){
	string str;
	cin>>str;
	for(auto i = str.begin();i<str.end();i++){
		if(*i=='-' && *(i+1) == '.'){
			cout<<"1";
			i+=1;
		}
		else if(*i=='-' && *(i+1) == '-'){
			cout<<"2";
			i+=1;
		}
		else{
			cout<<"0";
		}
	}

	return 0;
}
