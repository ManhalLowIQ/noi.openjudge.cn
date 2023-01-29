#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[105],sum=0,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	
	for(i=1;i<=n;i++)
	{
		if(a[i]!=a[i+1])
		{
			sum++;
		}
	}
	cout<<sum<<endl;
	for(i=1;i<=n;i++)
	{
		if(a[i]!=a[i+1])
		{
			cout<<a[i]<<" ";
		}
	}
	return 0;
}
