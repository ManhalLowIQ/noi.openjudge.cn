#include<bits/stdc++.h>
using namespace std;
int a[1005][1005];
int main()
{
	int n,i,j,e,r,sum=0,sum1=0,sum2=0,sum3=0,k,m,maxx=0,s=0,mini;
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j<0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}
	mini=n+n;
	for(i=0;i<n;i++)
	{
		for(j<0;j<n;j++)
		{
			if(a[i][j]==0)
			{
				if(i+j<mini)
				{
					mini=i+j;
					sum=i;
					sum1=j;
				}
				if(i+j>maxx)
				{
					maxx=i+j;
					sum2=i;
					sum3=j;
				}
			}
		}
	}
	for(i=sum;i<=sum2;i++)
	{
		for(j=sum1;j<=sum3;j++)
		{
			if(a[i][j]==255)
			{
				s++;
			}
		}
	}
	cout<<s;
	return 0;
 } 
