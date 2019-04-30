//271A
#include<bits/stdc++.h>
using namespace std;
int check(int arr[]);
int main()
{
	int n,a[4],i,j,s=0;
	cin>>n;
	for(i=3;i>=0;i--)
	{
		a[i]=(n%10);
		n=n/10;
		//cout<<a[i]<<" "<<n;
	}
	check(a);
	for(i=0;i<4;i++)
	{cout<<a[i]<<" ";}
	return 0 ;
}
int check(int arr[])
{
	int b[4],j,i,k=0;
	for(i=0;i<4;i++)
	{b[i]=arr[i];cout<<b[i]<<" ";}
	cout<<"\n";
	
	for(i=0;i<3;i++)
	{
	   for(j=i+1;j<4;j++)
	   {
	      if(arr[i]!=b[j])
	      {k++;cout<<arr[i]<<" "<<b[j]<<"   >   ";}
	   }
	}
	
}
