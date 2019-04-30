//  http://codeforces.com/problemset/problem/980/A
//           Links and Pearls
#include<bits/stdc++.h>
using namespace std;
int main(){
	char str[100000];
	int k,i,links=0,pearls=0,length;
	cin>>str;
	length=strlen(str);
	for(i=0;i<length;i++){
		if(str[i]=='-'){
			links++;
		}
		else{
			pearls++;
		}
	}
	if(pearls==0){
		cout<<"YES";
	}
	else if(links%pearls==0){
		cout<<"YES";
	}
	else{
		cout<<"NO";
	}
	return 0;
}
