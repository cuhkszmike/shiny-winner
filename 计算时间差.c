#include<stdio.h>

int main()
{
	int hour1,hour2,minute1,minute2;
	
	printf("请输入第一个时间的小时与分钟，中间以空格隔开\n");
	scanf("%d %d",&hour1,&minute1);
	
	printf("请输入第二个时间的小时与分钟，中间以空格隔开\n");
	scanf("%d %d",&hour2,&minute2);
	
	int t1;
	t1=hour1*60+minute1;
	
	int t2;
	t2=hour2*60+minute2;
	
	int t;
	t=t1-t2;
	
	printf("时间差为%d小时%d分钟\n",t/60,t%60);
	
	return 0;
 } 
