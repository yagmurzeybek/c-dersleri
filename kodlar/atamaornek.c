#include <stdio.h>

int main()
{
int mynumber,bolum,kalan,sum;

sum=0;
printf("4 basamakli bir sayi giriniz=");
scanf("%d",&mynumber);8975
//4.basamağı bul
bolum=mynumber/1000; //9
sum+=bolum; //0+9=9
kalan=mynumber %1000; //871
//3.basamağı bul
bolum=kalan/100;//8
sum+=bolum;//9+8=17
kalan=kalan %100;//71
//2.basamağı bul
bolum=kalan/10;//7
sum+=bolum;//9+8+7=24
kalan=kalan %10;//1
//1.basamağı bul
sum+=kalan;

printf("Girdiğiniz sayinin rakamlari toplami=%d",sum);

return 0;


}