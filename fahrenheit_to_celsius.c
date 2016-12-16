#include <stdio.h>
#include<math.h>

main(){
	int celsius;
	int Fahrenheit;
	
	printf("Enter the value for Fahrenheit:");
	scanf("%d", &Fahrenheit);
	printf("%d", celsius=(Fahrenheit-32)*5/9);
}
