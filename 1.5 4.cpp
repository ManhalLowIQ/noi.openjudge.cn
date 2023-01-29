#include"stdio.h"
int main()
{
	int n,i,x,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&x);
		sum+=x;
	}
	printf("%d %.5f",sum,sum*1.0/n);
	return 0;
}
