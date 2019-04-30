//   FENCING
//    https://www.codechef.com/APRIL19B/problems/FENCE

#include<bits/stdc++.h>
using namespace std ;


int main(){
    int t=1;
    cin>>t;
    while(t--){
        long long ans=0;
        int m,n,d;
        vector<pair<int,int>> v;
        map< pair<int,int> , int >  mp ;
        cin>>n>>m>>d;
        int p,q,d2=d; 
        while(d2--){
                cin>>p>>q;
                mp[{p,q}] = 1 ;
                v.push_back({p,q}) ;
            }
        
        sort(v.begin(),v.end());         
        for(int i=0;i<d;i++){
                p = v[i].first;
                q = v[i].second;
                auto p1 = make_pair(p-1,q);
                auto q1 = make_pair(p,q-1);
  
                if( mp[p1]!=1  && mp[q1]!= 1  ){
                    /*         0
                            0  $  0
                               0
                            */
                    ans+=4;
                }
                else if( mp[p1]==1  && mp[q1]!= 1 ){
                    /*         0
                            1  $  0
                               0
                            */
                    ans+=2;
                }
                else if( mp[p1]!=1  && mp[q1]== 1 ){
                    /*         1
                            0  $  0
                               0
                            */
                    ans+=2;
                }
            
            
        }
        
            cout<<ans<<endl ;
    
    }

   
    return 0;
} 
