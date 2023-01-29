#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,k,i,j,a[1005];
	cin>>n>>k;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=0;i<n;i++)
	{
		if(a[i]+a[i+1]==k)
		{
			for(j=0;j<i;j++)
			{
				if(a[i]+a[j]==k) {cout<<"yes";return 0;}
			}
		}
	}
	cout<<"no";
	return 0;
 } 
