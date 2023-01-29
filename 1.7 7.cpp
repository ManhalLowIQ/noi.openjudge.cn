#include<bits/stdc++.h>
using namespace std;
char a[114514];
int main()
{
	int n;
	gets(a);
	n=strlen(a);
	for(int i=0;i<n;i++)
	{
		if(a[i]=='A') cout<<'T';
		if(a[i]=='T') cout<<'A';
		if(a[i]=='G') cout<<'C';
		if(a[i]=='C') cout<<'G';
	}
	return 0;
}
