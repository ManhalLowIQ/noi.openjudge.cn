#include<bits/stdc++.h>
using namespace std;
struct stu
{
	int yw,sx,yy,zf,xh;
};
stu a[305];
int cmp(stu a1,stu a2)
{
	
	if(a1.zf>a2.zf) return 1;
	else if(a1.zf<a2.zf) return 0;
	else
	{
		if(a1.yw>a2.yw) return 1;
		else if(a1.yw<a2.yw) return 0;
		else
		{
			if(a1.xh>a2.xh) return 0;
			else return 1;
		}
	}
}
int main()
{
	int n,i;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		a[i].xh=i;
		cin>>a[i].yw>>a[i].sx>>a[i].yy;
		a[i].zf=a[i].yw+a[i].sx+a[i].yy;
	}
	sort(a+1,a+1+n,cmp);
	for(i=1;i<=5;i++)
		cout<<a[i].xh<<" "<<a[i].zf<<endl;
	return 0;
}
