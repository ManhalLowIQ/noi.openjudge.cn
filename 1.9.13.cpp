#include"bits/stdc++.h"
using namespace std;
int a[20005];
int main()
{
	int n,i,j;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
		for(j=1;j<=i-1;j++)
		{
			if(a[j]==a[i])break;
		}
		if(j==i) cout<<a[i]<<" ";
	}

	return 0;
} 
