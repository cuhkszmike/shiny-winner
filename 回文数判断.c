#include<stdio.h>
#include<math.h>
int main()
{
	int a;
	int t;
	int b;
	int i=1;
	int m;
	int power;
	
	scanf("%d",&a);
	t=a;
	
	while (t/10>0){
		i++;
		t/=10; 
	}
	
	t=a;
	for(i=i-1;i>0;i--){
		m=t%10;
		power=pow(10,i);
		b+=m*power;
		t/=10;
	}
	
	if(a==b){
		printf("the integer is a Palindromic number");
	} else{
		printf("the integer is not a Palindromic number");
	}
	
	return 0;
}
