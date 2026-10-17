#include <stdio.h>

int main() {
	int a,b;
    	
    a = 10;
	b = 3;
	//printf("%d\n",&a);
	//printf("%d\n",&b);
	//printf("%d\n",a);
    printf("Toplama: %d\n", a + b);
    printf("Cikarma: %d\n", a - b);
    printf("Carpma: %d\n", a * b);
    printf("Bolme: %d\n", a / b);
    //printf("Donusumlu Bolme: %.2f\n", (float)a / b);
    printf("Mod: %d\n", a % b);
    printf("Dönüsümlü bölme: %.5f\n",(float)a/b);
    return 0;
}