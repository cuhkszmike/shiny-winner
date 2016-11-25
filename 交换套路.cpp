#include<stdio.h>
int main()
{
	int a=3;
	int b=4;
	int t;
	t=a;
	a=b;
	b=t;
	
	printf("%d %d",a,b);
	
	return 0;
}
