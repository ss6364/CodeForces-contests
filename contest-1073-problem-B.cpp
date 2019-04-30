//     http://codeforces.com/contest/1073/problem/B



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
    int a[n],b[n],c[n],k,j,t;
    stack<int> st;
    Fors(n){
    	cin>>a[i];
    }

    for(i=n;i>0;i--){
    	st.push(a[i]);
    }

    memset(a,0,sizeof(a));
    a[n]=0;
    Fors(n){
    	int count=0;
    	cin>>b[i];
    //	cout<<b[i]<<"  " <<a[b[i]]<<endl;

    	if(a[b[i]]==1){
    		c[i]=0;continue;
    	}
    	else{
    		k = st.top();

    		if(k!=b[i] && a[b[i]]!=1 ){

	    		while(k!=b[i]){

	    			a[k]=1 ;
	    //			cout<<k<<"   K ::::::::::\n";
	    			st.pop();
	    			k=st.top();
	    			count++;
	    		}
	    	}
	    	if(st.top()==b[i]){
	    		st.pop();
	    		a[b[i]]=1;
	    		count++;
	    	}
	    	c[i] = count ;
    	}
    	//cout<<c[i]<<" c&a  "<<a[b[i]]<<endl;
    }
    Fors(n){
    	cout<<c[i]<<" ";
    }
    return 0;
}
