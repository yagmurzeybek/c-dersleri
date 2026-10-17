#include<stdio.h>

int main()
{
/*Enflasyona göre elektrik faturası hesaplayan program
fatura=harcanan elektrık*birim fiyat+abonelık ucretı*/

float odenecekfatura,eskibirimfiyati,yenibirimfiyati;
float enflasyon,eskiabonelikücreti,yeniabonelikücreti;
int yeniokuma,eskiokuma,toplamharcananelektrik;

printf ("Enflasyon oranini giriniz:");
scanf("%f",&enflasyon);
printf ("Onceki aya ait birim fiyati giriniz:");
scanf("%f",&eskibirimfiyati);
printf("Önceki aya ait abonelik ücretini giriniz:");
scanf("%f",&eskiabonelikücreti);
printf("Önceki aya ait okuma değerini giriniz:");
scanf("%d",&eskiokuma);
printf("Bu aya ait okuma değerini giriniz:");
scanf("%d",&yeniokuma);

toplamharcananelektrik=yeniokuma-eskiokuma;
yenibirimfiyati=eskibirimfiyati*(1+enflasyon/100);
yeniabonelikücreti=eskiabonelikücreti*(1+enflasyon/100);
odenecekfatura=toplamharcananelektrik*yenibirimfiyati+yeniabonelikücreti;
printf("\n odeyeneciginiz fatura tutari:%f\n\n",odenecekfatura);


    return 0;
}