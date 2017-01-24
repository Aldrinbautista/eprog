#include<stdio.h>

main(){
	int i, j, num;
	printf("input num:");
	scanf("%d", &num);
		for(i=0; i<num; i++){
		for(j=0; j<=i; j++){
			printf("*");
		}
		printf("\n");
	}


	for(i=num-1; i>0; i--){
		for(j=1; j<=i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}
