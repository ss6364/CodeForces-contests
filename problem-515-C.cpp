// http://codeforces.com/problemset/problem/515/C
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	cin>>n;
	string a;
	vector<char> v;
	cin>>a;
	for(int i=0;i<n;i++){

		if(a[i]=='4'){
			//a[i]='322';
			v.push_back('3');
			v.push_back('2');
			v.push_back('2');
		}
		else if(a[i]=='8'){
			v.push_back('7');
			v.push_back('2');
			v.push_back('2');
			v.push_back('2');
		}
		else if(a[i]=='6'){
			v.push_back('5');
			v.push_back('3');
		}
		else if(a[i]=='9'){
			v.push_back('7');
			v.push_back('3');
			v.push_back('3');
			v.push_back('2');
		}
		else if(a[i]=='1' || a[i]=='0'){
			continue;//
		}
		else {
			v.push_back(a[i]);
		}
	}
	sort(v.begin(),v.end());
	for(auto it=v.rbegin();it!=v.rend();it++){
		cout<<*it;
	}
	cout<<endl;
	return 0;
}
