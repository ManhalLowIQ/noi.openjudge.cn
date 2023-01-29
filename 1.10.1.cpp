#include<bits/stdc++.h>
using namespace std;
struct student
{
	int xh;
	double fs;
};
int main()
{
	int n,k;
	student a[105];
	cin>>n>>k;
	for(int i=0;i<n;i++)
		cin>>a[i].xh>>a[i].fs;
	for(int i=0;i<n;i++)
		for(int j=i;j>0;j--)
			if(a[j].fs>a[j-1].fs) 
				swap(a[j],a[j-1]);
	printf("%d %g",a[k-1].xh,a[k-1].fs);
	return 0;
}
