#include <bits/stdc++.h>
using namespace std;
int m[10005];
int main()
{
	int n,a[105]={0},sum=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
			{
				if(a[i]==a[j]+a[k]&&m[i]==0&&k!=j)
				{
					sum++;
					m[i]=1;
				}
			}
		}
	}
	cout<<sum;
	return 0;
}
