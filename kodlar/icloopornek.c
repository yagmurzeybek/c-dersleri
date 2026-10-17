#include <stdio.h>
int main(){

 int i,j,sharp=0;

 printf("Enter the number of sharps:");
 scanf("%d",&sharp);

 for(i=1;i<=sharp;i++){
    for(j=1;j<=i;j++){
        printf("#");
    }
printf("\n");
 }
for (i=1;i<=sharp;i++){
for(j=sharp;j>=i;j--){
    printf("#");
}
printf("\n");
}
    return 0;
}