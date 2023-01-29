#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,a,b,h,tz,minn=4002;
	cin>>n;
//	v=a*b*h;
	for(a=1;a<=n;a++)
	{
		for(b=1;b<=n;b++)
		{
			h=n/a/b;
			if(a*b*h==n)
			{
				tz=2*a*b+2*b*h+2*a*h;
				if(tz<minn)
				{
					minn=tz;
				}
			}
		}
	}
	cout<<minn;
	return 0;
}
