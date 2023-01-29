#include<bits/stdc++.h>
using namespace std;
int a[105][105],b[105][105];
int main()
{
	int n,m,i,j;
	cin>>n>>m; 
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<b[i][j]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
