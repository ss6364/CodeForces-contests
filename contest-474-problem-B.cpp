//    http://codeforces.com/problemset/problem/474/B

#include <bits/stdc++.h>
using namespace std;
#define ll  long long

int main() {
	int n,i;
	cin>>n;
	int a[n],sum=0;
	for(i=0;i<n;i++){
		cin>>a[i];
		sum = sum+a[i];
	}
	int count[sum];
	i=1;
		for(int j=0;j<n;j++){
			while(a[j]--){
				count[i]=j+1;
				i++;
			}
		}

	int q;
	cin>>q;
	for(int j=0;j<q;j++){
		int quest=0;
		cin>>quest;
		cout<<count[quest]<<endl;

		/*for(i=0;i<n;i++){
			if(count[i]>=quest){
				cout<<i+1<<endl;
				break;
			}
		}*/

	}
	return 0;
}
