#include"stdio.h"
int main()
{
	int n,a[10005],maxx=0,sum=0,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a);
		if(a[i]>maxx)
		{
//			sum++;
			maxx=a[i];
			
		}
	}
	for(i=1;i<=n;i++)
	{
//		if(a[i]>a[i-1]&&a[i]<=maxx)
//		{
//			maxx=a[i];
//			sum++;
//			printf("%d",sum);
//		}
		if(a[i-1]>i) sum++;
		printf("%d ",sum);
		sum=0;
	}
	
	
	return 0;
}
