#include <functional>
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <iomanip>
#include <numeric>
#include <cstring>
#include <cassert>
#include <cstdio>
#include <string>
#include <vector>
#include <bitset>
#include <queue>
#include <stack>
#include <cmath>
#include <ctime>
#include <list>
#include<deque>
#include <set>
#include <map>
using namespace std;
typedef long long ll;
typedef long double ld;
#define mp make_pair
#define pb push_back
#define ff first
#define ss second
#define all(x) x.begin(), x.end()
#define sz(x) x.size()
#define FOR(i,a,b) for(int i=a;i<b;i++)
#define FORT(i,a,b) for(int i=a;i<=b;++i)
#define RFOR(i,a,b) for(int i=a;i>b;--i)
#define RFORT(i,a,b) for(int i=a;i>=b;--i)
typedef pair<int,int> pi;
typedef pair<ll,ll> pl;
typedef pair<ld,ld> pd;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<ld> vd;
typedef vector<pi> vpi;
typedef vector<pl> vpl;
typedef vector<pd> vpd;
const int MOD = 1000000007;
const ll INF = 1e18;
const int MX = 100001;

int main()
{
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--){
		string s;
		cin>>s;
		vector<pair<int,int> > a;
		for(int i=0;i<s.length();++i){
			if(s[i]=='.')
				continue;
			else{
				int L=0,R=s.length();
				if(i-(s[i]-'0')>=0)
					L=i-(s[i]-'0');
				if(i+(s[i]-'0')>=0)
					R=i+(s[i]-'0');
			//	cout<<L<<" "<<R<<endl;
				a.push_back(make_pair(L,R));
			}
		}
		sort(a.begin(),a.end());
		string ans="safe";
		for(int i=1;i<a.size();++i){
				if(a[i].ff <= a[i-1].ss)
					ans="unsafe";
		}
		cout<<ans<<endl;
	}
	return 0;
}
