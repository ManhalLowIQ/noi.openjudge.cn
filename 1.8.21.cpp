#include<bits/stdc++.h>
using namespace std;
int a[105][105];
int main()
{
	int i,j,k,row,col,sum=0;
	cin>>row>>col;
	for(i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			cin>>a[i][j];
		}
	}
	for(i=0;i<col+row;i++)
	{
		for(j=0;j<row;j++)
		{
			for(k=col-1;k>=0;k--)
			{
				if(j+k==i) cout<<a[j][k]<<endl;
			}
		}
	}
	return 0;
 } 
