#include <stdio.h>
int main(){

int a, b, secim;

printf("Bir sayi giriniz:");
scanf("%d",&a);

printf("Bir sayi daha giriniz:");
scanf("%d",&b);

printf("Topalama için 1i çikarma için 2,bölme için 3e basiniz:");
scanf("%d",&secim);

if(secim==1){
    printf("Toplam:%d", a+b);
}
else if(secim==2){
    printf("Fark:%d",a-b);
}
else if (secim==3){
    printf("Bölüm:%.3f",(float) a/b);
}
else{
    printf("Geçersiz işlem");
}


return 0;

}