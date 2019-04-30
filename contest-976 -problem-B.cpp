//    http://codeforces.com/problemset/problem/976/B


#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);


	int n,m;
	ll l;
	cin>>n>>m>>l;

	int s=1,t=1;
	if(l<n){
		s+=l;
		cout<<s<<" "<<t;
		return 0 ;
	}
	if(l){
		s=n;
		t+=1;
		l=l-n;
		if(l==0){
			cout<<s<<" "<<t;
			return 0 ;
		}
		//cout<<s<<" : "<<t<<" "<<l<<endl;
	}
	int div=0;
	if(l<m-2){
		t +=l;
		l=l-(m-2);

		if(l==0){
			cout<<s<<" "<<t;
			return 0 ;
		}
		//cout<<s<<" :: "<<t<<" "<<l<<endl;
	}
	else{
		div = l/(m-1);
		l=l%(m-1);
		s=s-(div);
		if(s%2==0){
			t=2+(l);
		}
		else{
			t=m-l;
		}
	}
	//cout<<s<<" ::: "<<t<<" "<<l<<endl;
	/* */
	cout<<s<<" "<<t<<endl;
	return 0;
}

