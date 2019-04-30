// https://codeforces.com/contest/1157/problem/C1
// C! easy version


#include<bits/stdc++.h>
using namespace std ;
#define Fors(n) for(int i=1;i<=n;i++)
#define For(n) for(i=0;i<n;i++)
#define ll long long
#define vint(s) vector<int> s
#define pb(x)  push_back(x)
#define mpair(x,y) make_pair(x,y)
#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

ll x=0,y=0,s=0,n=0,i=0;

int main(){
    IOS;
    cin>>n;
    int a[n+1];
    For(n){
    	cin>>a[i];
    }
    int g=0,h=n-1;
    vector<char> v,v1;
    stack<int> st;
    x=n+1;
    while(g!=h){

    	if(a[h]>a[g] && (st.empty() || a[g]>st.top() ) ){
    		st.push(a[g]);
	    	v.push_back('L');
	    	g++;

	    }
	    else if(a[h]<a[g] && (st.empty() || a[h]>st.top() )){
	    	st.push(a[h]);
	    	v.push_back('R');
	    	h--;
	    }
	    else if(a[h]>a[g] && (st.empty() || a[h]>st.top() ) ){
    		st.push(a[h]);
	    	v.push_back('R');
	    	h--;
	    }
	    else if(a[h]<a[g] && (st.empty() || a[g]>st.top() )){
	    	st.push(a[g]);
	    	v.push_back('L');
	    	g++;
	    }
	    if(st.top()>a[g] && st.top()>a[h]){
	    	break;
	    }

    }
    if(v.size()==n-1 && g==h && a[g]>st.top()){
            cout<<g<<" g--h "<<h<<endl;
            if(v[n-2]=='L'){
                v.push_back('R');
            }
            else if(v[n-2]=='R'){
                v.push_back('L');
            }
    }
    cout<<v.size()<<endl;
    for(i=0;i<v.size();i++){
    	cout<<v[i]<<" ";
    }
    return 0;
}
