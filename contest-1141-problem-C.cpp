  ///   http://codeforces.com/contest/1141/problem/C
  //  Polycarp Restores Permutation


  #include<bits/stdc++.h>

using namespace std ;

int main(){

	int d;
	cin>>d;
	int n = d-1 ,i,a[n],b[d];
	for(i=1;i<=n;i++){
		cin>>a[i];
	}
	b[1]=1;
	for(i=2;i<=d;i++){
		b[i]= a[i-1]+b[i-1];
	}
	int flag=1,mx=0 ;

	//cout<<"::b[i]::"<<endl;

	for(i=1;i<=d;i++){

		//cout<<" :: "<<b[i];
		mx = max(mx,b[i]);
	}
	//cout<<mx<<endl;

	if(mx<=d){
		d -= mx ;
		//cout<<"::D::"<<d<<endl;
	}
	n+=1;
	vector<int> v ;
	for(i=1;i<=n;i++){
		b[i]+=d ;
		//cout<<b[i]<<" : ";
		v.push_back(b[i]);
	}
	sort(v.begin(),v.end());
	for(i=0;i<v.size();i++){
		if(v[i]!=i+1){
			flag = 0 ;break;
		}
	}
	if(flag==0){
		cout<<"-1";

	}
	else{
		for(i=1;i<=n;i++){
			cout<<b[i]<<" ";
		}
	}

	return 0;
}
