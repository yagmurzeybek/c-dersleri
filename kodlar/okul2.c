#include <stdio.h>
int main (){

int x, y, swi;
 printf ("Bir sayi giriniz:");
 scanf("%d", &x);
 printf ("Bir sayi daha giriniz:");
scanf("%d", &y);

 printf("Toplam ise 1 fark ise 2 çarpim ise 3e basiniz");
 scanf("%d", &swi);

 switch (swi)
 {
 case 1:
    printf("Toplam değer:%d\n" ,x+y);
    break;
 case 2:
 printf("Çikartmada değer:%d\n" ,x-y);
 break;
 case 3:
 printf("Çarpmada değer:%d\n",x*y);
 break;
 default:
 printf("Geçersiz işlem");
    break;
 }
 
}