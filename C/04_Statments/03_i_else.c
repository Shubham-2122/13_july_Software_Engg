/*
	if(){
	
	}
	else{
		
	}
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
		printf("\nAge is Allowd : %d",age);
	}
	else{
			printf("\nAge is not Allowd : %d",age);
	}
	
	getch();
}
