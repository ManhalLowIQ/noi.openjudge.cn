#include"stdio.h"
int main()
{
	int a[8],b[8],i,maxx=0,k=-1;
	for(i=1;i<=7;i++)
	{
		scanf("%d%d",&a,&b);
	}
	
	for(i=1;i<=7;i++)
	{
		if(a[i]+b[i]>8&&a[i]+b[i]>maxx)
		{
			maxx=a[i]+b[i];
			k=i;
		}
	}
	if(k==0) printf("0");
	else printf("%d",k);
	return 0;
}
