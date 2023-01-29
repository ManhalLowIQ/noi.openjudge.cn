#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,b,c;
	for(a=2;a<=100;a++)
		for(b=2;b<=100;b++)
			for(c=2;c<=100;c++)
				if(a<=b&&a*a+b*b==c*c)
					printf("%d*%d + %d*%d = %d*%d\n", a, a, b, b, c, c);
	return 0;
}

