#include<bits/stdc++.h>
using namespace std;
int cmp(int x,int y)
{
	if(x%2==1&&y%2==0) return x<y;
	else if(x%2==0&&y%2==1) return x>y;
	else
	{
		if(x%2==0&&y%2==0) return x<y;
		else return x>y;
	}	
}
int main()
{
	int a[15];
	for(int i=0;i<10;i++)
		cin>>a[i];
	sort(a,a+10,cmp);
	for(int i=0;i<10;i++)
		cout<<a[i]<<" ";
	return 0; 
}
