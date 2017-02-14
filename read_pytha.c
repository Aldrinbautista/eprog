#include <stdio.h>
main(){
    FILE *myFile;
    myFile = fopen("sample.txt", "r");

    //read file into array
    int i;
    int a=3;
    int b=4;
    int c;
    int numberArray[2];

    for (i = 0; i < 2; i++){
        fscanf(myFile, "%d", &numberArray[i]);
    }

    for (i = 0; i < 2; i++){
        printf("Number is= %d\n\n", numberArray[i]);
        
    }
printf("letter c= %d\n",c=sqrt((a*a)+(b*b)));
}
