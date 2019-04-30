//  DRAW!
/// https://codeforces.com/contest/1131/problem/B

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
    ll px=0,py =0 ;
    cin>>n ;
    s=1;
    for(i=0;i<n;i++){
        cin>>x>>y;
        //s++;
        // total number of ties should be n+1 ;

        //case 1
        //if( x==px && y==py ){
            // do nothing
        //}

        // case 2
        /*
        if( x>px && x > y && y>=py ){
            // add (y-py)
            s+=(y-py);
            cout<<x<<y<<"   :  \n";
        }
        else if( y>py && y > x && x>=px ){
            // add (x-px)
            s+=(x-px);
            cout<<"   ::  \n";
        }*/
        if(x >= py && px <= py && (y!=0 && x !=0)  ){
            // add (py-px)  then add max(x-y)-py
            s+=1;
            //cout<<x<<y<<"   ::,  \n";
            if(y>py){
            	s+= (min(x,y)-py);
            	//cout<<"   .:  \n";
            }
        }
        else if(y >= px && py <=px  && (y!=0 && x !=0) ){
            s+=1;
            //cout<<x<<y<<"   :  d \n";
            if(x>px){
            	s+= (min(x,y)-px);//cout<<"  e :  \n";
            }
        }



        px = x ;
        py = y ;
    }
    cout<<s<<endl;
    return 0;
}
