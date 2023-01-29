#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n=1,a[20],x,sum=0;
	while(1)
	{
		cin>>x;
		if(x!=0)
		{
			a[n]=x;
			n++;
		}
		else break;
	}
	for(int i=1;i<n;i++)
	{
		for(int j=1;j<=n;j++)
		{
			if(a[i]==a[j]*2) sum++;
		}
	}
	cout<<sum;
	return 0;
}
