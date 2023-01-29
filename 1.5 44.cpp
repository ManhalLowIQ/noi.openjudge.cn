#include "stdio.h"
int main()
{
	int n,i,sum=0,a,flag;
	scanf("%d",&n);
	a=2;
	
	while(1)
	{
		flag=0;
		for(i=2;i*i<=a;i++)
	    {
	       if(a%i==0)
	       {
	    		flag=1;
	    		break;
		   }
	    }
	    if(flag==0)
	    {
			sum++;
		}
		if(sum==n)
	    {
	    	printf("%d",a);
	    	return 0;
		}	
		a++;
	}
	return 0;
}
