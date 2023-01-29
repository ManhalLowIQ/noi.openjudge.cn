#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,sum1=0,sum2=0;
	cin>>n;
	sum2=n/2;
	if(n%4==0) sum1=n/4;
	else sum2=n%4/2+n-n%4/2;
	cout<<sum1<<" "<<sum2;
	return 0;
}
