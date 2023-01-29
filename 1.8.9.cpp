#include<bits/stdc++.h>
using namespace std;
int a[105][105],b[105][105],c[105][105];
int main()
{
	int i,j,k,l,n,m;
	cin>>n>>m>>k;
	for(i=1;i<=n;i++)
	{
        for(j=1;j<=m;j++)
		{
        	cin>>a[i][j];
		}
    }
    for(i=1;i<=m;i++)
	{
        for(j=1;j<=k;j++)
		{
        	cin>>b[i][j];
		}  
    }
    for(i=1;i<=n;i++)
	{
        for(j=1;j<=k;j++)
		{
			for(l=1;l<=m;l++)
			{
				c[i][j]=c[i][j]+a[i][l]*b[l][j];
			}
        	
		}  
    }
    for(i=1;i<=n;i++)
	{
        for(j=1;j<=k;j++)
		{
        	cout<<c[i][j]<<" ";
		}  
		cout<<endl;
    }
	return 0;
}
