#include<stdio.h>
int main()
{
	int a;
	int b;
	int gcd=1;
	scanf("%d",&a);
	scanf("%d",&b);
	int lcm=a*b;
	int i;
	int j;
	
	for (i=1;i<=a;i++){
		if(a%i==0&&b%i==0){
			gcd=i;
		}
	}
	
	for (j=a*b;j>0;j--){
		if(j%a==0&&j%b==0){
			lcm=j;
		}
	}
	
	printf("the GCD of %d and %d is %d\n",a,b,gcd);
	printf("the LCM of %d and %d is %d",a,b,lcm);
	
	return 0;
 } 
