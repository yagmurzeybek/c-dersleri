#include<stdio.h>

int main()

{
int number;
printf("enter a number=");
scanf("%d",&number);

if (number>0){
printf("the value is a positive number\n\n");
}
else if (number<0){
printf("the value is a negative number\n\n");
}
else{
printf("your number is=0");

}

return 0;
}


