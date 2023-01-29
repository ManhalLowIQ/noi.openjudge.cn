#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,k,l,n;
	cin>>n;
	for(i=2;i<=n;i++)
	{
		for(j=2;j<i;j++)
		{
			for(k=j+1;k<i;k++)
			{
				for(l=k+1;l<i;l++)
				{
					if(i*i*i==j*j*j+k*k*k+l*l*l)
					{
						printf("Cube = %d, Triple = (%d,%d,%d)\n",i,j,k,l);
					}
				}
			}
		}
	}
	return 0;
 } 
