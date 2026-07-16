/*
	syntax : 
	
	datatype vari-name = value
*/


#include<stdio.h>
#include<conio.h>

int main(){
	
	int a = 10; // +,- bit = 4
	
	printf("A : %d",a);
	printf("\nA : %i",a);
	
	
	float b = 24.467; // -,+ . : 8 bit
	
	printf("\nB : %f",b);
	printf("\nB : %.2f",b);
	printf("\nB : %.f",b);
	
	char data = 'S'; // 1 bit
	
	printf("\nData : %c",data);
	return 0;
}
