#include<stdio.h>

int main()
{
	int hour1,hour2,minute1,minute2;
	
	printf("�������һ��ʱ���Сʱ����ӣ��м��Կո����\n");
	scanf("%d %d",&hour1,&minute1);
	
	printf("������ڶ���ʱ���Сʱ����ӣ��м��Կո����\n");
	scanf("%d %d",&hour2,&minute2);
	
	int t1;
	t1=hour1*60+minute1;
	
	int t2;
	t2=hour2*60+minute2;
	
	int t;
	t=t1-t2;
	
	printf("ʱ���Ϊ%dСʱ%d����\n",t/60,t%60);
	
	return 0;
 } 
