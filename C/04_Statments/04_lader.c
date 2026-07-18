 /*
 	if(){
	 }
	 else if(){}
	 else{}
 */
#include<stdio.h>
#include<conio.h>

int main()
{
	int marks;
	printf("Enter your marks : ");
	scanf("%d",&marks);
	
	printf("Marks : %d",marks);
	
	if(marks > 100 || marks < 0){
		printf("\nInavlid Marks");
	}
	else if(marks >= 85 && marks <=100){
		printf("\nA grade Student");
	}
	else if(marks >= 70 && marks<85){
		printf("\nB grade Student");
	}
	else if(marks <70 && marks >=55){
		printf("\nC grade Student");
	}
	else if(marks >=34 && marks <55){
		printf("\nD grade Student");
	}
	else{
		printf("\nFaild Student");
	}
	
	
	return 0;
}
