#include <stdio.h>

void theMessage();//declaration
int sumNumber(int,int);//declaration

int main(){

int result=sumNumber(5,11);
printf("Result is %d\n",result);
theMessage();
return 0;
}

void theMessage(){
    printf("I Love C Language\n"); //definition
}

int sumNumber(int x,int y){
    return x+y;
}