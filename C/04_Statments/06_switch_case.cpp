/*
	multiple case 
	
	switch(){
		case 1:
		default:
	}
	
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	
	int choice;
	printf("Enter Your Choice : ");
	scanf("%d",&choice);
	
	switch(choice){
		case 1:
			printf("\nMonday");
		case 2:
			printf("\nTuesday");
		case 3:
			printf("\nWensday");
		case 4:
			printf("\nthursday");
		case 5:
			printf("\nFriday");
		default:
			printf("\nInvalid choice");
	}
	
	getch();
}
