#include<bits/stdc++.h>
using namespace std ;
int main(){
	int n,count=0;
	cin>>n;
	int n2=n;
	char a[1000],b[1000];
	vector<string> vect1;
	vector<string> vect;
	while(n--){
		cin>>a;
		vect.push_back(a);
	}
	n=n2;
	while(n2--){
		cin>>b;
		vect2.push_back(a);
	}
	vect.sort(vect.begin(),vect.end());
	vect1.sort(vect1.begin(),vect1.end());
	for(int i=0;i<n;i++){
		int l=strlen(vect[i]);
		char s[1000],s2[1000];
		s=vect[i];
		s2=vect1[i];
		for(int j=0;j<l;j++){
			if(s[j]!=s2[j]){
				count++;
			}
		}
	}
	cout<<count<<endl;
	return 0 ;
}
