#include<bits/stdc++.h>
using namespace std;
struct person
{
	int grade;
	char name[25];
};
int cmp(person a,person b)
{
	if(a.grade>b.grade||b.grade&&strcmp(a.name,b.name)<0) return 1;
	else return 0;
};
int main()
{
	int i,j,n;
	person student[25];
	cin>>n;
	for(i=1;i<=n;i++)
	{
		cin>>student[i].name>>student[i].grade<<endl; 
	}
	sort(student+1,student+n+1,cmp);
	for(i=1;i<=n;i++)
	{
		cout<<student[i].name<<" "<<student[i].grade;
	}
	return 0;
}
