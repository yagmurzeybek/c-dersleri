#include <stdio.h>

int main()

/*Kapalı bir kapta bulunan gazın basıncını hesaplayan program
Basınç(P)=nRT/V*/
{

    float pressure,constantR;
    int numberofmoles,volume,heat;
constantR=0.82;
printf("Kap hacmini giriniz:");
scanf("%d",&volume);
printf("Kaptaki mol sayisini giriniz:");
scanf("%d",&numberofmoles);
printf("Ortam sicakliğini giriniz:");
scanf("%d",&heat);

pressure=(numberofmoles*constantR*heat)/volume;
printf("%d hacimli kaptaki gazin basinci:%f\n\n\n",volume,pressure);


return 0;
}