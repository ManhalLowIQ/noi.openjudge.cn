#include<bits/stdc++.h>
using namespace std;
int a[105][105];
double b[105][105];
int main()
{
	int m,n,i,j;
	cin>>m>>n;
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i!=1||i!=n||j!=1||j!=m)
			{
				b[i][j]=(a[i][j]+a[i+1][j]+a[i-1][j]+a[i][j+1]+a[i][j-1])/5;
				if(i==1||i==n||j==1||j==m)
				{
					b[i][j]==a[i][j];
				}
			}
		}
	}
	for(i=1;i<=m;i++)
	{
		for(j=1;j<=n;j++)
		{
			printf("%.0lf ",b[i][j]);
		}
		cout<<endl;
	}
	return 0;
}
