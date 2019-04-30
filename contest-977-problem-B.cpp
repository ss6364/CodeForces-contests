#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/detail/standard_policies.hpp>
using namespace __gnu_pbds;
using namespace std;
int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int>mp;
    for(int i=0;i<s.length()-1;++i){
        string temp="";
        temp+=s[i];
        temp+=s[i+1];
        if(mp.find(temp)==mp.end())
            mp.insert(make_pair(temp,1));
        else
            mp[temp]++;
    }
    string res;
    int cnt=-1;
    for(auto it:mp){
        if(it.second>cnt){
            cnt=it.second;
            res=it.first;
        }
    }
    cout<<res<<endl;
    return 0;
}
