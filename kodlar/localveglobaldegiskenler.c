#include <stdio.h>
void Print();
int SuperVariable=2;

int main(){

SuperVariable=7;
Print();//işlemı yapması için
return 0;
}

void Print(){

printf("%d\n",SuperVariable);



}