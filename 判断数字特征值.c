#include<stdio.h>
#include<math.h>
int main()
{
	int t;
	int a;
	int i=1;
	int two;
	int power;
	int out=0;
	
	scanf("%d",&t);
	
	while (t>0){
		a=t%10;
		if((a%2==1&&i%2==1)||(a%2==0&&i%2==0)){
			two=1;
			} else {
			two=0;
			}
		power=pow(2,i-1);
		out+=two*power;
		t=t/10;
		i++;
	}
	
	printf("%d",out);
	
	return 0;
}

