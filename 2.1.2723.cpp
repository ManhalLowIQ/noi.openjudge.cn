#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,m,i;
	cin>>n>>m;
	for(i=1;i<=n;i++)
	{
		if(n%i==0&&n%(m-i)==0)
		{
			cout<<i;
			return 0;
		}
	}
	cout<<"-1";
	return 0;
}
