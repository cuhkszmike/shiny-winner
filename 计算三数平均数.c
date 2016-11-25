#include<stdio.h>;
int main()
{
	double a=0,b=0,c=0;
	
	printf("请输入要求平均数的三个数，以空格隔开\n");
	scanf("%lf %lf %lf",&a,&b,&c);
	
	double d=(a+b+c)/3.0; 
	
	printf("三数的平均数为%f\n",d);
	
	return 0;
	
}
