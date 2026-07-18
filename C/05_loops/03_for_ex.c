#include<stdio.h>
#include<conio.h>

int main()
{
	int i;

//	for(i=1;i<=10;i++){
//		if(i<=5){
//			printf("%d\n",i);
//		}
//	}
	
//	for(i=1;i<=10;i++){
//		if(i>=5){
//			printf("%d\n",i);
//		}
//	}

// 6 7 8
//	for(i=1;i<=10;i++){
//		if(i<=8 && i>=6){
//			printf("%d\n",i);
//		}
//	}

	//1 2 3 4 5 9 10
	for(i=1;i<=10;i++){
		if(!(i<=8 && i>=6)){
			printf("%d\n",i);
		}
	}
	
	return 0;
}

