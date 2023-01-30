#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,m,ah=0;
	cin>>n;
	for(a=1;a<=n;a++)
	{
		ah+=a;
		for(m=1;m<=n;m++)
		{
			if(ah-2*m==n)
			{
				cout<<m<<" "<<a;
				return 0;
			}
		}
	}
	return 0;
}
