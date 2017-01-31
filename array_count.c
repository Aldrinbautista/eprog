#include <stdio.h>
int main(){
	int i, bin[5], num_ones=0;
	for(i=0; i<5; i++){
		printf("num%d:",i+1);
		scanf("%d", &bin[i]);
		
	}
	for(i=0; i<5; i++){
	
	if(bin[i]==1)
	num_ones++;
	
	}
	 printf("Ones:%d\n", num_ones);
	 printf("zeros:%d", 5-num_ones);
}
