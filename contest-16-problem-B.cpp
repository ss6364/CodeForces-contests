///  http://codeforces.com/contest/16/problem/B

#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
	ll n,m;
	cin>>n>>m;
	vector < pair<ll , ll >>  mp;
	ll i,key,val;
	for(i=0;i<m;i++){
		cin>>key>>val;
		mp.push_back( make_pair(val,key) ) ;
	}
	sort(mp.begin(),mp.end());
	//for(auto it=mp.rbegin();it!=mp.rend();it++ )
		//cout<<it->first<<"  "<<it->second<<"   "<<endl;
	ll bag=0;


	for(auto it=mp.rbegin();it!=mp.rend();it++ ){

		if(it->second >= n && n!=0){
			//cout<<it->first<<" :: "<<it->second<<endl;
			bag += n * it->first;
			n=0;
		}
		else if(it->second < n){

			bag+=(it->second * it->first);
			n= n - it->second;
			//cout<<bag<<"    <<  "<<endl;
		}
		if(n==0){
			break;
		}
	}
	cout<<bag<<endl;
	return 0;
}
