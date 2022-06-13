#include <stdio.h>
 
 //precision - 5
 //0 < n < 1000
 //0 < res < 10

/*
0.00001
0.00002
0.00003
0.00004
....
9.99997
9.99998
9.99999
10.00000
*/
//i == cbrt(n)
//i*i*i==n

/*

cbrt(10)
5?
2.5? 2.5*2.5*2.5 > 10
1.25 1.25*1.25*1.25 < 10
1.875 1.875^3 < 10
2.1875 2.1875^3 > 10
*/
 double my_cbrt(double n){
double epsilon = 0.00000001;
for (double i = 0; i < 10; i+= epsilon)
{
   if(n - i*i*i < epsilon){return i;} 
}

return -1;
 }


int main()
 {

printf("%lf", my_cbrt(10)); //2.15443469
printf("%lf", my_cbrt(8));////2
printf("%lf", my_cbrt(100));//4.64158883


    return 0;
 }