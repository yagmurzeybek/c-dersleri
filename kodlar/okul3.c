#include <stdio.h>
int main(){

int ay;

printf("Bir sayi giriniz:");
scanf("%d", &ay);

if(ay==1){
printf("Ocak");
}
else if(ay==2){
    printf("Şubat");
}
else if(ay==3){
printf("Mart");
}
else if (ay==4){
    printf("Nisan");
}
else if(ay==5){
    printf("Mayis");
}
else if(ay==6){
printf("Haziran");
}
else if (ay==7){
    printf("Temmuz");
}
else if (ay==8){
    printf("Agustos");
}
else if (ay==9){
    printf("Eylül");
}
else if (ay==10){
    printf("Ekim");
}
else if (ay==11){
    printf("Kasim");
}
else if (ay==12){
    printf("Aralik");
}
else{
    printf("Hatali tuslama yaptiniz");
}
return 0;
}