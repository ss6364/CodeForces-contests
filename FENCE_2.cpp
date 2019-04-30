#include<bits/stdc++.h>
using namespace std ;
#define m 10007

int parent[m];

int size[m];



void make_set(int v){
    parent[v] = v;
    size[v] = 1;
}

int find_set(int v){
    if(v==parent[v]){
        return v;
    }
    return parent[v] = find_set(parent[v]);
}

void union_set(int a,int b){
    a = find_set(a);
    b = find_set(b);
    if(a!=b){
        if(size[a]<size[b]){
            int temp = a;
            a = b;
            b = temp;
        }
        parent[b]=a;
        size[a]+=size[b];
    }

}




int main(){
	int n=0;
	cin>>n;
	int a,b;
	int i,j;
	memset(parent,0,sizeof(parent));
	memset(size, 0, sizeof( size ));
	
    for(i=1;i<=n;i++){
        make_set(i);
    }
	int count =0 ;
	for(i=1;i<n;i++){
		cin>>a>>b;
		union_set(a,b) ;
	}
	
	for(i=1;i<=n;i++){
        //cout<<parent[i]<<" ";
        if(i==parent[i]){
        	count++;
        }
    }
    cout<<count<<endl;
    for(i=1;i<=n;i++){
        cout<<size[i]<<" ";
    }
    cout<<endl;


	return 0;
}