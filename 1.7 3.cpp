#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,i;
	double m,sum=0.00;
	char a[505],b[505];
	cin>>m;
	cin>>a>>b;
	n=strlen(a);
	for(i=0;i<n;i++);
	{
		if(a[i]==b[i]) sum++;
	}
	sum=sum/n;
	if(sum>=m) cout<<"yes";
	else cout<<"no";
	return 0;
}
