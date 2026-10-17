#include<stdio.h>

int main()

{
int x,y;
x=7;
y=2;

printf("result:%d\n",(x>5 && y<x && y>1));//İki koşul da doğru çıktı 1
printf("result:%d",(x<5 || x>y));//çıktı 1 çünkü herhangi bir önerme doğru
printf("result:%d",!(x<9 && x>y ));//Normalde çıktı 1 ama ! olduğu için 0





}