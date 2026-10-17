#include <stdio.h>

int main() {
    double myValue;
    double myArray[10]; // 10 elemanlı bir dizi tanımlandı
    int choice;
    int index;

    // Dizinin başlangıç değerlerini 0 yapmak (opsiyonel)
    for(int i = 0; i < 10; i++) {
        myArray[i] = 0.0;
    }

    do {
        printf("\nSeciminizi yapin (-1 cikis, 1 yazma, 2 okuma): ");
        scanf("%d", &choice);

        // Çıkış kontrolü
        if (choice == -1) {
            break;
        }

        // Geçersiz seçim kontrolü
        if (choice != 1 && choice != 2) {
            printf("Gecersiz secim! Lutfen 1 veya 2 girin.\n");
            continue;
        }

        // İndeks isteme
        printf("Indeks numarasini girin (0-9): ");
        scanf("%d", &index);

        // İndeks sınır kontrolü
        if (index < 0 || index > 9) {
            printf("Hata: Indeks 0 ile 9 arasinda olmalidir!\n");
            continue;
        }

        switch (choice) {
            case 1: // Yazma işlemi
                printf("Degeri girin: ");
                scanf("%lf", &myValue);
                myArray[index] = myValue;
                printf("Yazma islemi basarili.\n");
                break;

            case 2: // Okuma işlemi
                printf("myArray[%d] degeri: %.2lf\n", index, myArray[index]);
                break;
        }

    } while (choice != -1);

    printf("Programdan cikildi.\n");
    return 0;
}