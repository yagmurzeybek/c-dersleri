#include <stdio.h>
int main(){

int i;
double bugday=1;
double sumbugday=0;

for(i=1;i<=64;i++){

printf("%d. kare icin bilgine verilecek bugday sayisi : %20.0f\n",i,bugday);
sumbugday+=bugday;
bugday *=2;

}
printf("\n bilgine verilecek toplam bugday sayisi :%20.0f\n",sumbugday);
return 0;
}