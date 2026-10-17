#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

int main(){
    int number;
    printf("Enter a number (0-255):");
    scanf("%d",&number);
    printf("\n the character you entered:%c\n",number);

    if(isalnum(number))
    printf("correct\n");

    else 
    printf("wrong\n");
}