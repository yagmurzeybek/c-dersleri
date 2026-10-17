#include <stdio.h>

int main (){

int number,i,j,control;
number=0;
i=0;

printf("Enter a number:");
scanf("%d",&number);

for(i=2;i<=number;i++){
    control=1;
 for(j=2;j<=i/2;j++){
if(i%j==0){
control=0;
break;
}
 }

if (control!=0){

    printf("%d\t",i);
}
}
return 0;
}