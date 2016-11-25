#include<stdio.h>
int main()
{
	int a;
	int b;
	int c;
	int target;
	int largest;
	
	scanf("%d %d",&a,&b);
	
	if(a>b){
		largest=a;
		target=b;
	} else{
		target=b;
		largest=a;
	}
	
	scanf("%d",&a);
	while(a!=-1){
		if(a>largest){
			target=largest;
			largest=a;
		} else if(a<=largest&&a>=target){
			target=a;
		}
		scanf("%d",&a);
	}
	
	printf("The second largest number among the sequence is %d",target);
	
	return 0; 
} 
