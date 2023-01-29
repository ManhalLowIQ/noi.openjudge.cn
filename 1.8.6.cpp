#include<bits/stdc++.h>
using namespace std;
int a[105][105],b[105][105];
int main()
{
    int m,n,i,j,sum=0,x;
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
        	cin>>b[i][j];
		}  
    }
    for(i=1;i<=m;i++)
	{
        for(j=1;j<=n;j++)
		{
            if(a[i][j]==b[i][j]) sum++;
        }
    }
    x=m*n;
    printf("%.2lf",(double)sum/x*100);
    return 0;
}
