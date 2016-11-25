#include<stdio.h>
#include<math.h>
int main()

{
	int t; 
	int i;
	int sum=0;
	int n;
	
	printf("请输入一个十位以下数字\n");
	scanf("%d",&t);
	
	for(i=1;i<=10;i++)
	{
		n=pow(10,11-i);
		t=t%n;
		n=pow(10,10-i);
		sum+=t/n;
	}
	
	printf("该十位数的各位数码和为%d\n",sum);
	
	int a,b;
	a=sum/10;
	b=10+sum%10;
	
	switch(a){
		case 1:
			printf("one ");
			break;
		case 2:
			printf("two ");
			break;
		case 3:
			printf("three ");
			break;
		case 4:
			printf("four ");
			break;
		case 5:
			printf("five ");
			break;
		case 6:
			printf("six ");
			break;
		case 7:
			printf("seven ");
			break;
		case 8:
			printf("eight ");
			break;
		case 9:
			printf("nine ");
			break;
		default:
			printf("");
			break;
		}
	
	switch(b){
		case 11:
			printf("one\n");
			break;
		case 12:
			printf("two\n");
			break;
		case 13:
			printf("three\n");
			break;
		case 14:
			printf("four\n");
			break;
		case 15:
			printf("five\n");
			break;
		case 16:
			printf("six\n");
			break;
		case 17:
			printf("seven\n");
			break;
		case 18:
			printf("eight\n");
			break;
		case 19:
			printf("nine\n");
			break;
		default:
			printf("zero\n");
			break;
		}
		
	return 0;
 } 
