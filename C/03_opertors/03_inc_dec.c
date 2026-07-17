/*
	inc : add
	dec - remove 
	
	preinc  ++value
	postinc value++
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	
	int a = 10;
	printf("A : %d",a); //10
	a++; //post inc 
	printf("\nA : %d",a); //11 
	++a; //pre inc
	printf("\nA : %d",a); //12
	
	printf("\nA : %d",++a); //pre inc 
	printf("\nA : %d",a++); //post inc
	
	printf("\nA : %d",a++); 
	printf("\nA : %d",++a); 
	printf("\nA : %d",a++); 
	printf("\nA : %d",++a);
	printf("\nA : %d",a++); 
	printf("\nA : %d",a++); 
	printf("\nA : %d",++a);
	printf("\nA : %d",++a);
	printf("\nA : %d",a++);
	printf("\nA : %d",++a);
	printf("\nA : %d",a++);
	printf("\nA : %d",++a);



	printf("\nA : %d",a--); 
	printf("\nA : %d",--a); 
	printf("\nA : %d",a--); 
	printf("\nA : %d",--a);
	printf("\nA : %d",a--); 
	printf("\nA : %d",a--); 
	printf("\nA : %d",--a);
	printf("\nA : %d",--a);
	printf("\nA : %d",a--);
	printf("\nA : %d",--a);
	printf("\nA : %d",a--);
	printf("\nA : %d",--a);
		
	printf("\nA : %d",a);
	
	getch();
}
