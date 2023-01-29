#include<bits/stdc++.h>
using namespace std;
int main()
{
	char a[260];
	int len,sum=0;
	gets(a);
	len=strlen(a);
	for(int i=0;i<len;i++)
	{
		if(a[i]>='0'&&a[i]<='9') sum++;
	}
	cout<<sum;
	return 0;
}
