#include <stdio.h>

int main()
{ 

/*4 sayının kare ve küpünü alan program*/

float myNumber1,myNumber2,myNumber3,myNumber4;
printf("Enter four number:");
scanf("%f %f %f %f",&myNumber1,&myNumber2,&myNumber3,&myNumber4);


printf("The number\t\t");
printf("Square of number\t\t");
printf("Cube of number\t\t\n");

printf("%f\t\t",myNumber1);
printf("%f\t\t\t",myNumber1*myNumber1);
printf("%f\t\t\n",myNumber1*myNumber1*myNumber1);


printf("%f\t\t",myNumber2);
printf("%f\t\t\t",myNumber2*myNumber2);
printf("%f\t\t\n",myNumber2*myNumber2*myNumber2);


printf("%f\t\t",myNumber3);
printf("%f\t\t\t",myNumber3*myNumber3);
printf("%f\t\t\n",myNumber3*myNumber3*myNumber3);

printf("%f\t\t",myNumber4);
printf("%f\t\t\t",myNumber4*myNumber4);
printf("%f\t\t\n",myNumber4*myNumber4*myNumber4);

return 0;

}
