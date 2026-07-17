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
	
	int max;
	max = a > b;
	printf("\nmax : %d",max);
	int min;
	min = a < b;
	printf("\nmin : %d",min);
	
	int com ; 
	com = a == b;
	printf("\ncompare : %d",com);
	
	int data;
	
	data = a !=b;
	printf("\nnot comprare : %d",data);
	
	getch(); 
}
