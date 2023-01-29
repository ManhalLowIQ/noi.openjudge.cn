#include"bits/stdc++.h"
int main()
{
	int n,maxx,minn,i;
	double a[305],sum=0,js,max2;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%lf",&a[i]);
		if(a[i]>a[maxx]) maxx=i;
		if(a[i]<a[minn]) minn=i;
	}
	maxx=a[1];
	minn=a[1];
	for(i=0;i<n;i++)
	{
		sum+=a[i];
	}
	sum=(sum-a[maxx]-a[minn])/(n-2);
	for(i=0;i<n;i++)
	{
		if(i!=maxx&&i!=minn)
		{
			if((a[i]-sum)>max2) max2=(a[i]-sum);
		}
	}
	printf("%.2lf %.2lf",sum,max2);
	return 0;
}
