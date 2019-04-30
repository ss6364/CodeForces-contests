//         http://codeforces.com/contest/1015/problem/C
//            Songs Compression

#include <bits/stdc++.h>
using namespace std;

bool comp(pair<int,int> a,pair<int,int> b){
	if(abs(a.first-a.second)>abs(b.first-b.second))return true;
	return false;
}


int main() {
	int n=0,m=0;
	cin>>n>>m;
	vector<pair<int,int>> v;
	int a[n],b[n],i=0;
	long long sum_a=0,sum_b=0,c=0;
	while(n--){
		cin>>a[i]>>b[i];
		v.push_back({a[i],b[i]});
		sum_a+=a[i];
		sum_b+=b[i];
		i++;
	}
	cout<<sum_a<<"  suma :: sumb  "<<sum_b<<endl;
	sort(v.begin(),v.end(),comp);

	/*
	for(auto i: v){
		cout<<i.first<<" "<<i.second<<endl;
	}
	cout<<v[0].first<<"pahila"<<endl;
	*/
	if(sum_b>m){
		cout<<"-1"<<endl;
		return 0 ;
	}
	else{i=0;
		while(sum_a > m){
			c++;
			sum_a-=abs(v[i].first-v[i].second);
			i++;
		}
	}
	cout<<c<<endl;
	return 0;
}
