#include"stdio.h"
int main()
{
	int a[15],c,sum=0;
	for(int i=1;i<=10;i++)scanf("%d",&a[i]);
	scanf("%d",&c);
	c+=30;
	for(int i=1;i<=10;i++)
	{
		if(c>=a[i])
		{
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}
