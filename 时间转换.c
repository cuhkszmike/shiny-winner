#include<stdio.h>
int main()
{
	int bjt;
	scanf("%d",&bjt);
	int utc=0;
	int hour1;
	int minute;
	int hour2;
	
	if (bjt<=59)
	{
		utc=1600+bjt;
	} else if(bjt<=759)
	{
		hour1=bjt/100;
		minute=bjt%100;
		hour2=hour1+16;
		utc=hour2*100+minute;
	} else 
	{
		hour1=bjt/100;
		minute=bjt%100;
		hour2=hour1-8;
		utc=hour2*100+minute;
	}
	printf("%d",utc);
	
}

