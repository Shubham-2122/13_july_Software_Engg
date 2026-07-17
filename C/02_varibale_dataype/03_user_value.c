#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b;
	
	printf("Enter A : ");
	scanf("%d",&a);
	
	printf("Enter B : ");
	scanf("%d",&b);
	
	printf("A : %d",a);
	printf("\nB : %d",b);
	
	int sum; 
	
	sum = a+b;
	printf("\nSum : %d",sum);
	
	printf("\nSub : %d",a-b);
	printf("\nMul : %d",a*b);
	
	getch();
}
