#include <stdio.h>

int main (){

int i;
float examgrade,sumgrade;
i=1;
examgrade=0.0;
sumgrade=0.0;

do{
printf("%dth exam grade:",i);
scanf("%f",&examgrade);
if(examgrade==0){
    break;
}
if (examgrade<0){
printf("please enter a positive number\n");
continue;
}
else{
sumgrade+=examgrade;
}
i++;
}
while (examgrade !=0);

printf("\nyou entered %d exam grades\n",i-1);
printf("average:%f\n",sumgrade/(i-1));

return 0;
}