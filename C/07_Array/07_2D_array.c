/*
	a[][]
*/

#include<stdio.h>
#include<conio.h>

void main()
{
	int a[2][2];
	int i,j;
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("Enter your Element : ");
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("a[%d][%d] : %d\n",i,j,a[i][j]);
		}
	}
	
	getch();
}
