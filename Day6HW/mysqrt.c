#include <stdio.h>
#include <stdint.h>

double simple_sqrt(double num)
{
uint8_t i = 10;
double x = num /2;
while (i-- && num)
{
x = ((num /x) + x) /2 ;
}
return x;
}

int main()
 {
   double num = 3;
   printf("sqrt(%lf) = %lf\n",num,simple_sqrt(num));
   return 0;
 }