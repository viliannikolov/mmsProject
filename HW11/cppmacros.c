#include <stdio.h>

#define MAX(x,y,z) (((x)<(y)? (y)<(z)? (z):(y):(x)<(z)? (z):(x)))
#define MIN(x,y,z) (((x)>(y)? (y)>(z)? (z):(y):(x)>(z)? (z):(x)))
int main()
 {
    int a=31,b=33,c=100;
    printf("MAX is : %d\n", MAX(a,b,c));
    printf("MIN is : %d\n", MIN(a,b,c));
    return 0;
 }