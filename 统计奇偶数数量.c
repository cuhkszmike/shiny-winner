#include<stdio.h>
int main()
{
	int odd=0;
	int even=0;
	int a;
	int i;
	
	scanf("%d",&a);
	while(a!=-1){
		if(a%2==1){
			odd+=1;
		} else {
			even+=1;
		}
		scanf("%d",&a);
	}
	
	printf("%d %d",odd,even);
	
	return 0;
}
