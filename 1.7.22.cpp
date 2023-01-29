#include<iostream>
#include<string.h>
using namespace std;
struct node
{
	char name[55],code[55],em[55];
};
node person[10005];
int main()
{
	char email[55];
	int n,i,j,flag=0;
	cin>>email;
	cin>>n;
	for(i=1;i<=n;i++)
	{
		flag=1;
		cin>>person[i].name>>person[i].code>>person[i].em;
		if(strcmp(email,person[i].em)==0)
		{
			cout<<person[i].name<<" ";
			for(j=0;j<strlen(person[i].code);j++)
			{
				if(person[i].code[j]>='a'&&person[i].code[j]<='z')
				{
					person[i].code[j]-=32;
				}
				else if(person[i].code[j]>='A'&&person[i].code[j]<='Z')
				{
					person[i].code[j]+=32;
				}
			}
			cout<<person[i].code<<endl;
		}
	}
	if(flag==0)
	{
		cout<<"empty";
	}
	return 0;
}
