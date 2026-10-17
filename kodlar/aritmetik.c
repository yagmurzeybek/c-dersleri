#include <stdio.h>
int main()
{

float x,y,sum,sub,multi,div,mod;

printf("Bir sayı giriniz :");
scanf("%f",&x);

printf("Bir sayı daha giriniz :");
scanf("%f",&y);


sum=x+y;
sub=x-y;
multi=x*y;
div=x/y;





/*mod=x%y;*/

printf("Sum: %f\n",sum);
printf("Sub:%f\n",sub);
printf("Multi:%f\n",multi);
printf("Div:%f\n",div);
/*printf("Mod::%d\n",mod);*/

return 0;
}