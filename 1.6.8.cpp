#include<bits/stdc++.h>
using namespace std;
int main()
{
	int wa=0,wb=0,n,na,nb,a[105],b[105],xha=0,xhb=0,cqa,cqb;
	cin>>n>>na>>nb;
	for(int i=0;i<na;i++) cin>>a[i];
	for(int i=0;i<na;i++) cin>>b[i];
	for(int i=0;i<n;i++)
	{
		cqa=a[xha],cqb=b[xhb];
		if(cqa!=cqb)
		{
			if(cqa==0&&cqb==2||cqa==2&&cqb==5||cqa==5&&cqb==0) wa++;
			if(cqa==0&&cqb==2||cqa==2&&cqb==0||cqa==5&&cqb==2) wb++;
			//else wb++;
		}
		xha=(cqa+1)%na;
		xhb=(cqb+1)%nb;
	}
	if(wa>wb) cout<<"A"<<endl;
	else if(wb>wa) cout<<"B"<<endl;
	else cout<<"draw"<<endl;
	return 0;
}
