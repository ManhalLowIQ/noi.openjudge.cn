#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,a[505],b[505],i,len=0;
	cin>>n;
	for(i=0;i<n;i++)
		cin>>a[i];
		if(a[i]%2!=0)
			b[len++]=a[i];
	sort(b,b+len);
	for(i=0;i<len;i++)
		cout<<b[i];
		if(i!=len-1)
			cout<<",";
		
	return 0;
}
