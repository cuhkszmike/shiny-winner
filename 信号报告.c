#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	int r;
	int s;
	
	r=t/10;
	r=r+8;
	s=t%10;
	
	switch(s){
		case 1:
			printf("Faint signals, barely perceptible, ");
			break;
		case 2:
			printf("Very weak signals, ");
			break;
		case 3:
			printf("Weak signals, ");
			break;
		case 4:
			printf("Fair signals, ");
			break;
		case 5:
			printf("Fairly good signals, ");
			break;
		case 6:
			printf("Good signals, ");
			break;
		case 7:
			printf("Moderately strong signals, ");
			break;
		case 8:
			printf("Strong signals, ");
			break;
		default:
			printf("Extremely strong signals, ");
			break;
	}
	
	switch(r){
		case 9:
			printf("unreadable.");
			break;
		case 10:
			printf("barely readable, occasional words distinguishable.");
			break;
		case 11:
			printf("readable with considerable difficulty.");
			break;
		case 12:
			printf("readable with practically no difficulty.");
			break;
		default:
			printf("perfectly readable.");
			break;
	}
	return 0;
}
