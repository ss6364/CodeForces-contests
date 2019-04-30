// http://codeforces.com/contest/591/problem/B


#include<bits/stdc++.h>
using namespace std ;


//ifstream f("data.in") ;
//ofstream g("data.out") ;
int main(){
    int n,i,t;
    //f>>n>>t;
    cin>>n>>t;
    string s;
    char c,c1;
    cin>>s;
    
    //f>>s;
    map<int , stack< char>> vs ;
    for(i=0;i<26;i++){
        vs[i].push({'a'+i}) ;    
    }
    
    
    while(t--){
    	cin>>c>>c1;
    	for(i=0;i<26;i++){
    		if(vs[i].top()==c ){
    			vs[i].push(c1);
    		}
    		else if(vs[i].top()==c1 ){
    			vs[i].push(c);
    		}
    	}
    	
    	
    }
    string s1;
    for(i=0;i<s.length();i++){
    	s[i] = vs[s[i]-'a'].top();
    	//cout<<s[i]<<":";
    }
//    cout<<endl;
    cout<<s<<endl;
  
  /*
    // print map
    for(i=0;i<26;i++){
        while(!vs[i].empty()){
            cout<<vs[i].top()<<" ";
            vs[i].pop();
        }
        cout<<endl;
    }
    */
    return 0 ;
}