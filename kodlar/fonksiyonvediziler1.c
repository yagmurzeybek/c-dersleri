#include <stdio.h>

int showMe(int x){
    return 5+x;
}
int sumNumbers (int x,int y){
int sum=0;
sum=x+y;
return sum;
}
int main(){
int myNumber=sumNumbers(12,5);

printf("Result is %d\n",myNumber);

return 0;
}