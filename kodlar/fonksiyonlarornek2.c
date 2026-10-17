#include <stdio.h>

// Fonksiyon prototipleri
float toFahrenheit(float celsius);
float toCelsius(float fahrenheit);

int main() {
    char choose;
    float number;

    printf("Fahrenayttan Celsius'a donusturmek icin C, Celsius'tan Fahrenayttan donusturmek icin F tusuna basin: ");
    printf("\nSeciminizi girin: ");
    scanf(" %c", &choose); // Boşluk karakteri önceki enter'ı temizlemek için eklenmiştir

    switch (choose) {
    
        case 'c':
            printf("\nFahrenayt degerini girin: ");
            scanf("%f", &number);
            printf("Celsius degeri: %.2f\n", toCelsius(number));
            break;
        
        case 'f':
            printf("\nCelsius degerini girin: ");
            scanf("%f", &number);
            printf("Fahrenayt degeri: %.2f\n", toFahrenheit(number));
            break;
        default:
            printf("\nYanlis deger girdiniz!\n");
    }

    return 0;
}

// Celsius'u Fahrenheit'a çeviren fonksiyon
float toFahrenheit(float celsius) {
    return (celsius * 9 / 5) + 32;
}

// Fahrenheit'ı Celsius'a çeviren fonksiyon
float toCelsius(float fahrenheit) {
    return (fahrenheit - 32) * 5 / 9;
}