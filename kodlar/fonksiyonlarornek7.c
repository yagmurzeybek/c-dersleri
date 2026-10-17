#include<stdio.h>
#include<math.h>
#include<time.h>
#include <stdlib.h>

int main(){
    int randomnumber,guestnumber=0,guesscount=0,score=100;
    srand(time(NULL));
    randomnumber=(rand()%100)+1;
    printf("1-100 arasinda bir sayi tuttum \n");
    printf("Tahmin Et!\n");
    
    while(guestnumber!=-1){
        printf("Tahmin sayisini gir:");
        scanf("%d",&guestnumber);
        if(guestnumber==-1)
        break;
        if(guestnumber<1 || guestnumber>100){
            printf("1 ile 100 arasi demistim!\n");
            continue;
        }
        guesscount++;
        if(guestnumber==randomnumber){
            printf("Tebrikler,%d. seferde bildiniz\n",guesscount);
            break;
        }else{
            if(guestnumber>randomnumber){
                printf("Daha kucuk bir sayi girmelisin\n");
                score-=10;
            }else{
                printf("Daha büyük bir sayi girmelisin\n");
                score-=10;
            }
        }
    }
    printf("\n Puanin 100 uzerinden %d\n",score<0 ? 0:score);
    return 0;

}