/*
	
	if(codition){
		..code;
	}
	
	only true store

*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int age;
	
	printf("Enter your Age : ");
	scanf("%d",&age);
	printf("Age : %d",age);
	
	if(age >= 18){
		printf("\nAge is Allow : %d",age);
	}
	
	getch();
}
