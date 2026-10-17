#include<stdio.h>

int main()
{
 /*dairenin alan ve çevresini hesaplayan program*/
    float r,Cevre,alan;
   const float PI=3.1415;
   printf("Dairenin yariçapini giriniz:");
   scanf("%f",&r);
   alan= PI*r*r;
   Cevre= 2*PI*r;
   printf("dairenin cevresi:%f\n",Cevre);
   printf("dairenin alani:%f\n",alan);




    return 0;
}