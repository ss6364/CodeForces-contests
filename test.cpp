#include<bits/stdc++.h>
using namespace std ;


// MAIN

int main(){
    int n,i,j;
    int C=2000000 ;
    cin>>n;
    string s,s1;
    cin>>s>>s1;
    int b[27],a[27];
    memset( b , 0, sizeof(b)) ;
    memset( a , 0, sizeof(a)) ;

    map<int,int> mp ;
    stack<int> v,v1;


    for(i=0;i<n;i++){

        mp[i+1]=C;
        if(s[i]!='?'){
			a[s[i]-'a'+1] += 1 ;

		}
		else {
			a[0]++;
			mp[i+1]=C-1 ;
			v1.push(i+1);
		}

        if(s1[i]!='?')b[s1[i]-'a'+1]++;
        else{
            v.push(i+1);
            b[0]++;
        }

    }
   // +++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\\

   // counting number of pairs

    int ans=0;
	//cout<<":: A[] ::\n";
	for(i=1;i<27;i++){
		ans+=min(a[i],b[i]);
		//cout<<a[i]<<" ";
	}
	ans+=(a[0]+b[0]);
	if(ans>n)ans=n;

	cout<<ans<<endl;

	//++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++\\

    //for(i=0;i<27;i++)cout<<char('a'+i-1)<<b[i]<<" : ";


    int chk[n+1];
    memset(chk,0,sizeof(chk));
    int chk1[n+1];
    memset(chk1,0,sizeof(chk1));

    //for(i=0;i<n;i++)cout<<chk[i]<<" ";

    //cout<<endl;

    for(i=0;i<n;i++){

	    if(b[s[i]+1-'a']!=0 && s[i]!='?'){
	        	//cout<<s[i]<<" ";


	        	//cout<<"\n"<<s[i]<<" :: ";

	            for(j=0;j<n;j++){

	            	//cout<<s1[j]<<" : ";

	                if(s[i]==s1[j] && chk[j]==0 && s[i]!='?'){
	                    chk[j]=1;
	                    chk1[i]=1;
	                    mp[i+1] = j+1 ;
	                    b[s[i]+1-'a']--;
	                    break;
	                }
	            }
	        }
        else if(b[0]!=0 && chk[v.top()-1]==0){
            int d = v.top() ;
            //cout<<v.top()<<"HEHE";
            mp[i+1] = d;
            v.pop();
            chk[d-1]=1;
            b[0]--;
        }

    }

    while(!v1.empty()){

    	//cout<<v1.top()<<":::";

    	for(j=0;j<n;j++){
    		if(chk[j]==0){
    			mp[v1.top()] = j+1 ;
    			chk[j]=1;
    			v1.pop();
    			break;
    		}
    	}

    }

    //for(i=0;i<n;i++)cout<<chk[i]<<" ";

    //cout<<"\n\t\t::::\n";
    for(i=1;i<=n;i++){
    	if(mp[i]!=C)cout<<i<<" "<<mp[i]<<endl;
    }

    return 0;
}
/*   passed code cout

--------------------------------------------------------------------------------------------------------------------------------------------
______________________________________________________________________________________________________________________________________________


#include <bits/stdc++.h>

#define ll long long int
#define ri register int

using namespace std;

int main()
{
	int n;
	cin >> n;

	vector< stack<int> > v(27);
	vector< stack<int> > v2(27);

	string a, b;
	cin >> a >> b;
	for (int i = 0; i < n; i++)
	{
		if (a[i] != '?')
		{
			v[a[i] - 'a'].push(i+1);
		}
		else
		{
			v[26].push(i + 1);
		}
		if (b[i] != '?')
		{
			v2[b[i] - 'a'].push(i + 1);
		}
		else
		{
			v2[26].push(i + 1);
		}
	}

	vector< pair<int, int> > ans;

	stack<int> lefta, leftb;
	for (int i = 0; i < 26; i++)
	{
		while (!v[i].empty() && !v2[i].empty())
		{
			ans.push_back({ v[i].top(), v2[i].top() });
			v[i].pop();
			v2[i].pop();
		}
		while (!v[i].empty())
		{
			lefta.push(v[i].top());
			v[i].pop();
		}
		while (!v2[i].empty())
		{
			leftb.push(v2[i].top());
			v2[i].pop();
		}
	}

	while (!v[26].empty() && !leftb.empty())
	{
		ans.push_back({ v[26].top(), leftb.top() });
		v[26].pop();
		leftb.pop();
	}

	while (!v2[26].empty() && !lefta.empty())
	{
		ans.push_back({ lefta.top(), v2[26].top() });
		v2[26].pop();
		lefta.pop();
	}

	while (!v[26].empty() && !v2[26].empty())
	{
		ans.push_back({ v[26].top(), v2[26].top() });
		v[26].pop();
		v2[26].pop();
	}

	cout << ans.size() << endl;

	for (int i = 0; i < ans.size(); i++)
	{
		cout << ans[i].first << " " << ans[i].second << endl;
	}
	return 0;
}


+++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++++
*/
