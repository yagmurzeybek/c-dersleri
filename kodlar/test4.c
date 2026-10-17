#include<stdio.h>

int main()
{

int myNumber,myNumber2,mySum,myMultiplication,myDivision,myExtraction;
myNumber=20;
myNumber2=10;

mySum=myNumber+myNumber2;
myExtraction=myNumber - myNumber2;
myMultiplication=myNumber * myNumber2;
myDivision=myNumber / myNumber2;

printf("Toplama: %d\n",mySum);
printf("Cikarma: %d\n",myExtraction);
printf("Carpma: %d\n",myMultiplication);
printf("Bolme: %d\n",myDivision);

return 0;
}

